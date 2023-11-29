#include <iostream>

int main()
{
    int x, y, mod;
    int result[10];
    for (int i = 0; i < 10; i++)
        result[i] = NULL;

    
    //std::cout << "x= "; 
    std::cin >> x;
    //std::cout << "y= "; 
    std::cin >> y;


    int while_counter = 0;
    if (x >= 2 && x <= 16) {
        if (y >= 1 && y <= 100) {

            while (!y % x <= 0) {

                mod = y % x;
                //std::cout << y << "/" << x << "= " << y / x << " rem: " << mod << std::endl;
                y /= x;
                result[while_counter] = mod;
                ++while_counter;

            }

            bool firstHit = false;
            switch (x) {
            case 2:
                for (int i = 9; i > -1; --i)
                {
                    if (result[i] == 1) {
                        firstHit = true;
                    }
                    if (firstHit) {
                        for (int j = i; j > -1; --j)
                        {
                            std::cout << result[j];
                        }
                        break;
                    }

                }
                break;

            case 15:
            case 16:
                for (int i = while_counter - 1; i > -1; --i)
                {
                    switch (result[i])
                    {
                    case 10:
                        std::cout << 'A';
                        break;
                    case 11:
                        std::cout << 'B';
                        break;
                    case 12:
                        std::cout << 'C';
                        break;
                    case 13:
                        std::cout << 'D';
                        break;
                    case 14:
                        std::cout << 'E';
                        break;
                    case 15:
                        std::cout << 'F';
                        break;
                    default:
                        std::cout << result[i];
                        break;
                    }
                }
                break;

            default:
                for (int i = while_counter-1; i > -1; --i)
                {
                    std::cout << result[i];
                }
                break;

            }

        }
        else {
            std::cout << "Invalid input data!";
        }
    }
    else {
        std::cout << "Invalid input data!";
    }
}


