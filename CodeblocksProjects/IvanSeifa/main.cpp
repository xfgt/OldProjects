#include <iostream>

int main()
{
    std::string code = "075";
    std::string guess = "";

    for( int i = 0; i < 3; i++){
            std::cout << i << ":" <<std::endl;
        for (int j = 0; j < 9; j++){
                if(j == code[i] - '0')
                    std::cout << "FOUND!---> " << j <<std::endl;
                else
                    std::cout << ":( ---> " << j <<std::endl;
        }
    }
    return 0;
}
