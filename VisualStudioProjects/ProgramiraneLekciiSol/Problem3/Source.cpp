


#include <iostream>
#include <string>
#include <istream>

void encryptTextNPositions(char* txt, int positions) {
	/*
	* ASCII:
	* 
	* A - Z -> 65 - 90
	* a - z -> 97 - 122
	* 
	*/
 
	std::string textHolder = txt;
	std::string outputText = "";
	char getAscii = 0;
	for (int i = 0; i <= textHolder.length(); i++)
	{
		if (textHolder[i] >= 'A' && textHolder[i] <= 'Z' ||
			textHolder[i] >= 'A' && textHolder[i] <= 'z') {

			
			// check capital letters
			if (textHolder[i] >= 'A' && textHolder[i] <= 'Z') {

				textHolder[i] += positions;


				if (textHolder[i] >= 65 && textHolder[i] <= 90) {
					outputText += textHolder[i];
				}


				else {

					if (textHolder[i] > 0) {
						textHolder[i] -= 90;
						textHolder[i] += 65;
						textHolder[i] -= 2; // correction 
						if (textHolder[i] >= 65 && textHolder[i] <= 90) {
							outputText += (char)textHolder[i];
						}
						else {
							textHolder[i]++;
							outputText += (char)textHolder[i];
						}

					}
					else {
						textHolder[i] -= positions;
						if (textHolder[i] - 90 > 0) {
							textHolder[i] -= positions;
							textHolder[i] = 65 - textHolder[i];
							textHolder[i] += 65;
							textHolder[i] -= 1;
							outputText += textHolder[i];

						}
						else {
							textHolder[i] -= 5;
							outputText += textHolder[i];
						}
					}

				}

			} // uppercase 



			// check low-case letters
			if (textHolder[i] >= 'a' && textHolder[i] <= 'z') {
				
				textHolder[i] += positions;


				if (textHolder[i] >= 97 && textHolder[i] <= 122) {
					outputText += textHolder[i];
				}


				else {

					if (textHolder[i] > 0) {
						textHolder[i] -= 122;
						textHolder[i] += 97;
						textHolder[i] -= 2; // correction 
						if (textHolder[i] >= 97 && textHolder[i] <= 122) {
							outputText += (char)textHolder[i];
						}
						else {
							textHolder[i]++;
							outputText += (char)textHolder[i];
						}

					}
					else {
						textHolder[i] -= positions;
						if (textHolder[i] - 122 > 0) {
							textHolder[i] -= positions;
							textHolder[i] = 97 - textHolder[i];
							textHolder[i] += 97;
							textHolder[i] -= 1;
							outputText += textHolder[i];

						}
						else {
							textHolder[i] -= 5;
							outputText += textHolder[i];
						}
					}

				}

			} // lowercase 


		}
		else { // include all other symbols & spaces
			outputText += textHolder[i];
		}

	} // for end

	for (int i = 0; i < outputText.length(); i++)
	{
		std::cout << outputText[i];
	}
	
} //func end


bool isPrime(int number) { // if number > 1 ?
	for (int i = 2; i < number; i++) {
		if (number % i == 0) {
			return false;
		}
	}
	return true;
}


int main() {


	/*int bottom = 30;
	int top = 40;
	char input[] = { "can ya get it?" };*/

	// getinput;
	int bottom = 0, top = 0;
	std::cin >> bottom >> top;
	std::cin.ignore();
	char input[100];
	std::cin.getline(input, 100);

	
	
	
	


	int SMOFI = 0; // smallest prime of interval
	for (int i = bottom; i < top; i++)
	{
		if (isPrime(i)) {
			SMOFI += i;
			//printf("%d", SMOFI);
			break;
		}
	}
	int PTOMOVE = 0; // positions to move
	if (SMOFI > 26)
		PTOMOVE = SMOFI % 26;
	else
		PTOMOVE = SMOFI;

	encryptTextNPositions(input, PTOMOVE);
	



	return 0;
}