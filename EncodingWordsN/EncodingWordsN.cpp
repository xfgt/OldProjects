#include <iostream>

std::string encryptMessage(std::string inputMessage, int skip) {
    std::string outputMessage = inputMessage;
    char result;
    char diff;
    for (int i = 0; i < inputMessage.length(); i++) {
        if (inputMessage[i] >= 'A' && inputMessage[i] <= 'Z' || inputMessage[i] >= 'a' && inputMessage[i] <= 'z') {
           
            
            if (inputMessage[i] >= 'A' && inputMessage[i] <= 'Z') {
                diff = 90 - inputMessage[i];
                if (diff < skip) {
                    result = abs(diff - skip) - 1;
                    outputMessage[i] = 65 + result;
                }
                else {
                    result = 90 - abs(diff - skip);
                    outputMessage[i] = result;
                }
                    
            }
            else if (inputMessage[i] >= 'a' && inputMessage[i] <= 'z') {
                diff = 122 - inputMessage[i];
                if (diff < skip) {
                    result = abs(diff - skip) - 1;
                    outputMessage[i] = 97 + result;
                }
                else {
                    result = 122 - abs(diff - skip);
                    outputMessage[i] = result;
                }
                    
            }
                
            

        }
    }

    return outputMessage;
}


int main()
{
	std::string message = "";
	int skip = 0;
	getline(std::cin, message);
	std::cin >> skip;
    if (skip >= 0 && skip <= 25)
        std::cout << encryptMessage(message, skip);
    else
        std::cout << "Invalid input data!";
}

