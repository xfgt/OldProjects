
#include <iostream>

int main()
{
    enum myEnum {
        kraka, 
        race,
        yes = 5,
        non,
        FALSE
    };
    std::cout << kraka << std::endl;
    std::cout << race << std::endl;
    std::cout << yes << std::endl;
    std::cout << non << std::endl;
    std::cout << FALSE << std::endl;
    std::cout << std::endl;
    
    std::cout << (myEnum)4 << std::endl;

}
