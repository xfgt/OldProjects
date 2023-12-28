#include <iostream>
#include <bitset>


int main()
{
    // hexs
    const char i = '\xFF'; // 255
    const char j = '\x59'; // 89

    std::cout << "i: " << i << "\t\tbinary: " << std::bitset<16>(i).to_string() << std:: endl;
    std::cout << "j: " << j << "\t\tbinary: " << std::bitset<16>(j).to_string() << std:: endl;

    char nOT_i = ~i;
    char nOT_j = ~j;
    std::cout << "not_i: " << nOT_i << "\tbinary: " << std::bitset<16>(nOT_i).to_string() << std:: endl;
    std::cout << "not_j: " << nOT_j << "\tbinary: " << std::bitset<16>(nOT_j).to_string() << std:: endl;

    char toLeft = i << j;
    std::cout << "toLeft: " << toLeft << "\tbinary: " << std::bitset<16>(toLeft).to_string() << std:: endl;

    char toRight = i >> j;
    std::cout << "toRight: " << toRight << "\tbinary: " << std::bitset<16>(toRight).to_string() << std:: endl;

    char andn = i & j;
    std::cout << "and: " << andn << "\t\tbinary: " << std::bitset<16>(andn).to_string() << std:: endl;

    char oreo = i | j;
    std::cout << "Or: " << oreo << "\t\tbinary: " << std::bitset<16>(oreo).to_string() << std:: endl;

    char xoreo = i ^ j;
    std::cout << "Xor: " << xoreo << "\t\tbinary: " << std::bitset<16>(xoreo).to_string() << std:: endl;



    return 0;
}
