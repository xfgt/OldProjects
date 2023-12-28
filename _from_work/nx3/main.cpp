#include <iostream>

int main()
{
    std::string str;
    getline(std::cin, str);

    int x;
    std::cin >> x;

    std::string status = "false";

    int i = str.size();
    std::string c;
    int n = 0;

    if(i >= 3){
        do{
            if(str[i] != '\0'){
                c = str.substr( i, 1);
                n = std::stoi(c);
                if(n == x){
                    status = "true";
                }
            }
            i--;
        }while(i >= 0);

        std::cout << status;
    }
}
