#include <iostream>

int main()
{
    /*
        Вярно  Оценка
        0-60   Слаб (2.00)
        61-70  Среден (3.00)
        71-80  Добър (4.00)
        81-90  Мн. Добър (5.00)
        91-100 Отличен (6.00)
    
    */
    int pts, grade;
    std::cin >> pts;

    if (pts >= 0 && pts <= 100) {

        if (pts <= 60) {
            grade = 2;
        }
        else if (pts <= 70){
            grade = 3;
        }
        else if (pts <= 80){
            grade = 4;
        }
        else if (pts <= 90){
            grade = 5;
        }
        else if (pts <= 100){
            grade = 6;
        }
        
    }

    std::cout << grade;


}
