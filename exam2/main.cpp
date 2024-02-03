#include <iostream>
#include <string>

std::string* seperateWords(char* input) {
    std::string wordChar = "";
    std::string words[100];
    std::string* wordsArr = new std::string[100];

    char* ptr;
    ptr = input;

    int j = 0;
    while (*ptr != '\0') {          // add every word into string arr

        if (*ptr != 32) {
            wordChar += (*ptr);
        }
        else {
            words[j++] = wordChar;
            wordChar = "";
        }

        ptr++;
    }
    if (wordChar != "") {           // check for the last word
        words[j++] = wordChar;
        wordChar = "";
    }

    
    for (int i = 0; i < 100; i++) {
        wordsArr[i] = words[i];
        if (wordsArr[i] == "")          // escape blank the rest of spaces
            break;
        
    }

    return wordsArr;
}


bool nameCheckInList(std::string name, std::string* nameList, int nameListSize) {
    int i = 0;
    while (i < nameListSize) {
        if (name == nameList[i]) {
            return true;
        }
        i++;
    }
    return false;
}



/*  INPUT:
*
Ivan Pesho Hristo Stamat Haralampi Natasha Stoqnka End
Tell a personal story
Stoqnka Bobby End
Create a task
Taylor Swift
Do a Exam
Ivan Georgi Pesho End
End
*/

int main() {

    std::string motivated[10];
    std::string justComming[10];
    std::string StudyingBusiness[10];


    char inputList[100];
    std::string* namesArrList = new std::string[100];
    std::string* pureNamesArr = new std::string[100];

    std::cin.getline(inputList, 99);
    namesArrList = seperateWords(inputList);
    int namesArrList_size = namesArrList->length() * 2;

    std::string command = "";
    getline(std::cin, command);
    while (command != "End") {
        
        char input[100];

        int i = 0;
        if (command == "Tell a personal story") {
            std::cin.getline(input, 99);
            pureNamesArr = seperateWords(input);
            int j = 0;
            while (pureNamesArr[i] != "End") {
                if (nameCheckInList(pureNamesArr[i], namesArrList, namesArrList_size)) {
                    motivated[j] = pureNamesArr[i];
                    j++;
                }
                
                i++;
            }
            
        }


        else if (command == "Create a task") {
            std::string task = "";
            getline(std::cin, task);
            
            if (task == "Taylor Swift") {   // last two of list
                // END
                // NATASHA
                // STOQNKA
                justComming[i] = namesArrList[namesArrList_size - 3];
                justComming[i+1] = namesArrList[namesArrList_size - 4];     // End last, last2
                
            }
            else if (task == "Cancel Culture Task") { // first two of list
                justComming[i] = namesArrList[0];
                justComming[i + 1] = namesArrList[1];
            }
            // elseif "random stuff" - nothing happens
            

        }


        else if (command == "Do a Exam") {
            std::cin.getline(input, 99);
            pureNamesArr = seperateWords(input);
            int j = 0;
            while (pureNamesArr[i] != "End") {
                if (nameCheckInList(pureNamesArr[i], namesArrList, namesArrList_size)) {
                    StudyingBusiness[j] = pureNamesArr[i];
                    j++;
                }
                i++;
            }
            
        }



        else {
            std::cout << "\n#error." << std::endl;
            
            break;
        }
        
        
        pureNamesArr = nullptr;
        getline(std::cin, command);
    }
    std::cout << std::endl;


    std::cout << "Motivated: ";
    for (int i = 0; i < 10; i++) {
        std::cout << motivated[i] << " ";
        if (motivated[i] == "")
            break;
    }
    std::cout << std::endl;
     
    std::cout << "Just comming: ";
    for (int i = 0; i < 10; i++) {
        std::cout << justComming[i] << " ";
        if (justComming[i] == "")
            break;
    }
    std::cout << std::endl;

    std::cout << "Studying business: ";
    for (int i = 0; i < 10; i++) {
        std::cout << StudyingBusiness[i] << " ";
        if (StudyingBusiness[i] == "")
            break;
    }
    std::cout << std::endl;
    
    
    
    

    return 0;
}


