/*
    given STRING ARRAY transformed into a CHAR ARRAY

*/


#include <iostream>

int main (){

    std::string str = "";
    std::cout << "String: ";
    std::cin >> str;

    std::cout << "Locating space..." << std::endl;
    char* strChArr = new char[str.size()];
    for(int i = 0; i < str.size(); i++)
        strChArr[i] = '\0';

    std::cout << "Assigning chars..." << std::endl;
    int c = 0;
    for( auto a  : str){
        strChArr[c] = a;
        c++;
    }

    std::cout << "Char array: \n[index]\t[char]\t[ascii]" << std::endl;
    for(int i = 0; i < str.size(); i++)
        std::cout <<
            "[" << i << "]\t" << '"' << strChArr[i] << '"' << '\t' << '(' << int(strChArr[i]) << ')'  
        << std::endl;

    return 0;
}
