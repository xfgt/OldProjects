#include <iostream>

int* cleanISBN(char* isbn) {

    int* cleanISBNArr = new int[10];

    char* isbn_ptr;
    isbn_ptr = isbn;

    int i = 0;
    while (*isbn_ptr != '\0') {
        if (*isbn_ptr != '-' && *isbn_ptr != 'X') {   // same as " - '0' ";
            cleanISBNArr[i++] = (int)(*isbn_ptr) - 48; // transform every new character to a real number/digit in the array "isbn_numbers";
        }
        if (*isbn_ptr == 'X') {
            cleanISBNArr[i++] = 10;
        }
        isbn_ptr++;
    }


    return cleanISBNArr; // not a value but an address. (that's why we have * at 'int')
}


int sumISBN(int* cleanISBN) {
    int* sumarr = new int[10];

    int* ptr;
    ptr = cleanISBN;

    for (int i = 9; i >= 0; --i) {
        sumarr[i] = (*ptr);
        ptr++;
    }

    // for(int i = 0; i < 10; i++)
    //     std::cout << sumarr[i];



    int sum = 0;
    for (int i = 0, j = 1; i < 10; i++, j++) {            // combo for loop (i and j)
        sum += j * sumarr[i];

    }
    return sum;
}


bool isValidISBN(char* isbn) {
    return sumISBN(cleanISBN(isbn)) % 11 == 0;          // true
}

int main() {
    // 0-7167-0344-0
    // 0-7167-0344-X

    char isbn[14];
    std::cin >> isbn;

    std::cout << ((isValidISBN(isbn)) ? "yes" : "nyes");


    return 0;







}