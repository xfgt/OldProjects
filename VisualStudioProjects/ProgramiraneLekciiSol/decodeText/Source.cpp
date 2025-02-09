#include <iostream>
#include <cctype>

char* encryptMessage(char* message) {
	int messageLenght = strlen(message);
	int i = 0;
	while(i < messageLenght)
	{
		if (message[i] == 'Z' || message[i] == 'z') {
			message[i] = 32;
		}
		else {
			if (message[i] >= 'A' && message[i] <= 'Z')
				message[i] = toupper(char(message[i])) + 1;
			else if (message[i] >= 'a' && message[i] <= 'z')
				message[i] = tolower(char(message[i])) + 1;
			else
				message[i] = char(message[i])+1;
		}
		i++;
	}


	for (int j = 0; j < messageLenght; j++)
	{
		if (message[j] == '!') {
			if (message[j + 1] >= 'A' && message[j + 1] <= 'Z')
				message[j] = 'A';
			else if (message[j + 1] >= 'a' && message[j + 1] <= 'z')
				message[j] = 'a';
		}
	}


	return message;
}


char* decryptMessage(char* message) {

	int messageLenght = strlen(message);
	int i = 0;
	while (i < messageLenght)
	{
		if (message[i] == 32) {
			message[i] = 'Z';
		}
		else {
			if (message[i] >= 'B' && message[i] <= 'Z')
				message[i] = toupper(char(message[i])) - 1;
			else if (message[i] >= 'b' && message[i] <= 'z')
				message[i] = tolower(char(message[i])) - 1;
			else if (message[i] == 'a' || message[i] == 'A') {
				message[i] = 32;
			}
			else {
				message[i] = tolower(char(message[i])) - 1;
			}
		}
		i++;
	}


	


	return message;
}

int main() {

	char message[50] = { "the penZ1i$caT cum-gl0ck!" };
	int countSpaces = 0;
	int g = 0;
	char firstLetter = message[0];

	while (message[g] != '\0') {
		std::cout << message[g];
		g++;
	}
	std::cout << std::endl;
	g = 0;
	while (g < strlen(message)) {
		if (message[g] == ' ') {
			countSpaces++;
		}
		g++;
	}

	char* encryptedMessage = encryptMessage(message);

	
	std::cout << encryptedMessage << std::endl;
	

	char* decryptedMessage = decryptMessage(encryptedMessage);
	std::cout << decryptedMessage << std::endl;


	return 0;
}