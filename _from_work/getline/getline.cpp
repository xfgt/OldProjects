#include <iostream>
#include <string>
#include <iomanip>

void showAsCharArr (std::string strArr, size_t strArrSize){

    char * chArr = new char[strArrSize];
    for(size_t i = 0; i < strArrSize; i++)
        chArr[i] = 0;

    for(size_t i = 0; i < strArrSize; i++)
        chArr[i] = strArr[i];

    std::cout << '"' << strArr << '"' << " to char array: " << std::endl << std::endl;
    std::cout << "chArr[i]\tASCII\t\chArr[i]-0"<< std::endl;
    for(size_t i = 0; i < strArrSize; i++)
        std::cout  << std::setw(5) << chArr[i] << std::setw(15) << int(chArr[i]) << std::setw(10) << chArr[i] - '0' << std::endl;


}


int main()
{
    std::string str;
    std::getline(std::cin, str); //needs to be string; default delimiter: '\n'

    showAsCharArr(str, str.size());
    return 0;
}
