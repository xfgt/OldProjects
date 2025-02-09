#include <iostream>



int main(){

    char txt[100];

    std::cin.getline(txt, 99);

    int* i_arr = new int[sizeof(txt)];
    char* ptr;
    ptr = txt;
    
    int i = 0;
    while(*ptr != '\0'){
        i_arr[i++] = (int)(*ptr) - '0';
        ptr++;
    }

    
    


    
    std::cout << std::endl;
    for(int j =0; j < i; j++)
        std::cout << i_arr[j]<< "\t";

    
    
    

    return 0;
}