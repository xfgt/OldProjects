#include <iostream>


int main()
{
    //time calculator

    int format;
    int current_time;
    int future_time;
    int result = 0;
    char decision; //a [add], s[subtract]

    std::cin >> format;
    std::cin >> current_time;
    std::cin >> future_time;
    std::cin >> decision;
    std::cout << std::endl;

    if(decision = 'a'){
        result = (current_time + future_time) - format;
    } else if(decision = 's'){
        result = (current_time - future_time) - format;
    } else{
        std::cout << "bad decision.\n";
    }

    std::cout << result << std::endl;
    return 0;
}
