#include <iostream>
#include <string>

std::string cesarEncryptMessage(std::string inputMessage) {
    std::string outputMessage = inputMessage;
    for (int i = 0; i < inputMessage.length(); i++) {
        if (inputMessage[i] >= 'A' && inputMessage[i] <= 'Z' ||
            inputMessage[i] >= 'a' && inputMessage[i] <= 'z') {

            if (inputMessage[i] >= 'A' && inputMessage[i] <= 'W' || //for 3 + (Cesar's style)
                inputMessage[i] >= 'a' && inputMessage[i] <= 'w') {
                outputMessage[i] = inputMessage[i] + 3; // ??????
            }
            else {
                // return back to A and count up (-23)
                outputMessage[i] = inputMessage[i] - 23;
            }
        }
    }

    return outputMessage;
}


int main() {

    std::string inputMessage;
    getline(std::cin, inputMessage);
    std::string outputMessage = cesarEncryptMessage(inputMessage);

    std::cout << inputMessage << std::endl;
    std::cout << outputMessage << std::endl;        // zwlk

    return 0;
}