

#include <iostream>



int main()
{
    int x, y, z;
    std::cin >> x >> y >> z;

    if (x >= 20 && x <= 300 && y >= 20 && y <= 300 && z >= 20 && z <= 300) {
        int smallestN = 0;
        if (x < y) {
            if (x < z) {
                smallestN = x;
            }
            else {
                smallestN = z;
            }
        }
        else if (y < x) {
            if (y < z) {
                smallestN = y;
            }
            else {
                smallestN = z;
            }
        }
        else if (z < x) {
            if (z < y) {
                smallestN = z;
            }
            else {
                smallestN = y;
            }
        }
        else {
            smallestN = x;
        }
        //std::cout << "smallest num: " << smallestN << '\n';


        int gcd = 0;
        bool foundGCD = false;


        while (!foundGCD) {
            for (int i = smallestN; i >= 1; i--)
            {

                if (x / i != 1 && y / i != 1 && z / i != 1) {

                    if (x % i == 0) {
                        if (y % i == 0) {
                            if (z % i == 0) {
                                gcd = i;
                                foundGCD = true;
                                break;
                            }
                        }
                    }


                }
                else {
                    if (x == y == z || x == y || x == z || y == z) {
                        gcd = smallestN;
                        foundGCD = true;
                        break;

                    }
                    else {
                        gcd = i;
                        foundGCD = true;
                    }
                   
                    
                    
                }
            }
        }

        std::cout << gcd << std::endl;
    }
    else {
        std::cout << "Invalid input data!" << std::endl;
    }
}
