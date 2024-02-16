#include <iostream>


bool nameCheckInList(char letter, char* charList, int charListSize) {
    int i = 0;
    
    while (i < charListSize) {
        if (letter == charList[i]) {
            return true;
        }
        i++;
    }
    return false;
}


int main() {

    char letters[] = { 'e', 't', 'i', 's' };
    int lettersListSize = sizeof(letters) / sizeof(letters[0]);
    std::string text = "This is one test string!";
	
    int match = 0;
    int biggestMatch = 0;
    int j = 0;

    for (int i = 0; j < text.length(); i++)
    {
        
        while (text[j] != ' ' && text[j] != '\0') {
            if (nameCheckInList(text[j], letters, lettersListSize)) {
                match++;
            }
            j++;
        }

        if (match > biggestMatch)
            biggestMatch = match;
        match = 0;
        j++;
        
        
        
    }


    std::cout << biggestMatch << std::endl;


    return 0;
}