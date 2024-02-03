#include <iostream>



int main() {

    char str[1000], * pt;

    std::cout << "enter the string: ";
    std::cin.getline(str, 999);

    pt = str;   /**IMPORTANT**/

    while (*pt != '\0') {         /**IMPORTANT**/
        // work with ascii nums
        if ((*pt >= 65 && *pt <= 90) || (*pt >= 97 && *pt <= 122)) {
            if ((*pt >= 65 && *pt <= 87) || (*pt >= 97 && *pt <= 119)) {
                *pt += 3;
            }
            else {
                *pt -= 23;
            }

        }

        pt++;   /**IMPORTANT**/
    }
    std::cout << "coded string: " << str;



    //side note: here the original message has been modified permanently, because of the work with pointer.
    return 0;
}