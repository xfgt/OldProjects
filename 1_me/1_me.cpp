#include <iostream>

int main()
{
    std::string name;
    std::string surname;
    int weight;

    std::cin >> name;
    std::cin >> surname;
    std::cin >> weight;

    std::cout << "My name is " << name << " " + surname << " and I'm " << weight << " kilograms.\n";

    
    return 0;
}

