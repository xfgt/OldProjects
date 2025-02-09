#include <iostream>
#include <iomanip>

int main()
{
    int levski[2];
    int cska[2];
    int slaviq[2];
    int spartak[2];
    int botev[2];

    int p;


    // 5 x 3 - 15

    int* points = new int[15];
    for (int i = 0; i < 15; i++)
        points[i] = 0;

    for (int i = 0; i < 15; i++){
        std::cin >> p;
        points[i] = p;
    }

    std::cout << std::setw(10) << "Levski" << std::setw(10) << "CSKA" << std::setw(10) << "Slavia" << std::setw(10) << "Spartak" << std::setw(10) << "Botev" << std::endl;

    int counter = 0;
    for (int i = 0; i < 15; i++){

        if (counter == 5){
            counter = 0;
            std::cout << '\n';
        }
        std::cout << std::setw(10) << points[i];
        counter++;
    }




    return 0;
}
