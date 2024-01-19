#include <iostream>


int cleanISBN(char * isbn){
    int cleanISBN[10];

    char *isbn_ptr;

    isbn_ptr = isbn;

    int i = 0;
    while(*isbn_ptr != '\0'){
        if(*isbn_ptr != '-' && *isbn_ptr != 'X'){   // same as " - '0' ";
            cleanISBN[i++] = (int)(*isbn_ptr) - 48; // transform every new character to a real number/digit in the array "isbn_numbers";
        }
        if(*isbn_ptr == 'X'){
            cleanISBN[i++] = 10;
        }
        isbn_ptr++;
    }

    return cleanISBN;
}


int sumISBN(int* cleanISBN){
    int sum = 0;
    for(int i = 0, j = 1; i < 10; i++, j++){            // combo for loop (i and j)
        sum += j * cleanISBN[i];
    }
    return sum;
}


bool isValidISBN(char * isbn){
    return sumISBN(cleanISBN(isbn)) % 11 == 0;          // true
}

int main(){

    char isbn[14], *isbn_ptr; //pointer used for reading every element of the array;
    int* isbn_numbers = new int[10];

    std::cin >> isbn;

    std::cout << isValidISBN(isbn);


    return 0;
}