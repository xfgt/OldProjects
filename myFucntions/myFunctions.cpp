#include <iostream>


void printArr(char* inputArr, int size) {
	for (int i = 0; i < size; i++) {
		std::cout << inputArr[i];
	}
	std::cout << std::endl;
}

char* cutWBitmask(char* inputArr, char* bitmask, int size) {
	char* output = new char[size];

	for (int i = 0; i < size; i++) {
		if (bitmask[i] == '0') {
			output[i] = inputArr[i];
		}
		else if (bitmask[i] == '1') {
			output[i] = '0';
		}
	}

	return output;
}


int fact(unsigned int n) {
	// n! = n * n-1 ... 1
	int a = n;
	int t = 1;
	while (a > 1) {
		t *= a;
		a--;
	}

	return t;
}

int nCk(unsigned int n, unsigned int k) {
	int result = 0;
	if (n > k) {
		result = fact(n) / (fact(k) * fact(n - k));
		return result;
	}
	else {
		return 1;
	}
	return 0;
}


int getMaxArr(char * arr, int arrSize){
    int maxValue = arr[0];
    for(int i = 0; i < arrSize; i++){
        if(maxValue < arr[i])
            maxValue = arr[i];

    }
    return maxValue;
}

int getMinArr(char * arr, int arrSize){
    int minValue = arr[0];
    for(int i = 0; i < arrSize; i++){
        if(minValue > arr[i])
            minValue = arr[i];
    }

    return minValue;
}

int gcd(int a, int b)
{
	if (a == 0)
		return b;
	return gcd(b % a, a);
}

int lcm(int a, int b) {
	return (a * b) / gcd(a, b);
}

int findGCDArr(char * arr, int arrSize)
{
	int result = arr[0];
	for (int i = 1; i < arrSize; i++)
	{
		result = gcd(arr[i], result);

		if (result == 1)
		{
			return 1;
		}
	}
	return result;
}


int BezoutsCoefs(int a, int b, int pos) { //pos [0, 1] (s,t)
	int const ROWS = 4;
	

	int cnt = 0;
	int x = (a > b) ? a : b;
	int y = (a < b) ? a : b;
	int tmp = x % y;
	while (tmp) {
		x = (tmp > y) ? tmp : y;
		y = (tmp < y) ? tmp : y;
		tmp = x % y;
		cnt++;
	}
	

	if (cnt > 0) {
		int** arr = new int* [ROWS];
		for (unsigned int i = 0; i < ROWS; i++) {
			arr[i] = new int[cnt + 2]; // s & t
		}
		x = (a > b) ? a : b;
		y = (a < b) ? a : b;
		arr[0][0] = x;
		arr[0][1] = y;

		arr[1][0] = 0;

		arr[2][0] = 1;
		arr[2][1] = 0;

		arr[3][0] = 0;
		arr[3][1] = 1;

		int j = 2;
		tmp = x % y;
		while (tmp) {
			arr[0][j] = tmp;		// mods 
			arr[1][j - 1] = x / y;	// divs
			x = (tmp > y) ? tmp : y;
			y = (tmp < y) ? tmp : y;
			tmp = x % y;
			j++;
		}
		arr[1][j - 1] = x / y; // endpoint


		for (unsigned int i = 2; i < ROWS; i++) {
			for (unsigned int j = 2; j < cnt + 2; j++) {
				if (i == 2)
					arr[i][j] = arr[i - 1][j - 1] * arr[i][j - 1] + arr[i][j - 2];
				else
					arr[i][j] = arr[i - 2][j - 1] * arr[i][j - 1] + arr[i][j - 2];
			}
		}


		int m, s, t;
		for (unsigned int j = 0; j < cnt + 2; j++) {
			m = arr[0][j];
			s = pow(-1, j) * arr[2][j];
			t = pow(-1, j + 1) * arr[3][j];
		}

		/*std::cout << s << "\n" << t << "\n";*/
		for (unsigned int i = 0; i < ROWS; i++) {
			delete[] arr[i];
		}
		delete[] arr;
		if (pos == 0)
			return s;
		if (pos == 1)
			return t;
	} 
	else {
		if (pos == 0)
			return 0;
		if (pos == 1)
			return 1;
	}

return 0;
}

bool isPrime (int number){ // if number > 1 ?
    for(int i = 2; i < number; i++){
        if(number % i == 0){
            return false;
        }
    }
    return true;
}
int modInverse(int A, int M)
{
    for (int X = 1; X < M; X++)
        if (((A % M) * (X % M)) % M == 1)
            return X;
}

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

bool isDigitInArr(int sample, int* arrCompare, int arrCompare_size) {
	bool itsIn = false;
	for (int i = 0; i < arrCompare_size; i++)
	{
		if (sample == arrCompare[i]) {
			itsIn = true;
			break;
		}
		else {
			continue;
		}
	}
	return itsIn;
}

void swap(int& a, int& b) {
	int temp = 0;
	temp = a;
	a = b;
	b = temp;
}


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



bool isPowerOfTwo(int x) {
	if (x != 0) {
		float log_two_x = log2(x);

		if (round(log_two_x) == log_two_x) {
			return true;
		}
		else {
			return false;
		}
	}
	return false;
}

int getRandomNumberFromLimits(int low, int high) {

	int iSecret;
	srand(time(NULL));
	srand(rand());
	srand(rand());

	iSecret = rand() % (high + 1 - (low)) + low;


	return iSecret;
}

void deleteTwoDArr(int** arr, int rows) {

	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
		arr[i] = nullptr;
	}
	delete[] arr;
	arr = nullptr;
}

void deleteThreeDArr(int** arr, int rows, int cols) {

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			delete[] arr[i][j];
			arr[i][j] = nullptr;
		}
		
	}
	delete[] arr;
	arr = nullptr;
}


void deleteElementOfArray(int* a, int& size, int pos) {
	a[pos] = '\0';
	for (int i = pos; i < size; i++)
	{
		a[i] = a[i + 1];
	}
	size -= 1;
}
void addElementAtEndOfArray(int* a, int& size, unsigned element) {
	size += 1;
	for (int i = size - 1; i < size; i++)
	{
		a[i] = 0;
	}
	a[size - 1] = element;

}
void addElementAtSelectedPosOfArray(int* a, int& size, int pos, unsigned element) {

	if (a[pos] != '\0') {
		size += 1;
		for (int i = size - 1; i < size; i++)
		{
			a[i] = 0;
		}

		for (int i = size - 1; i > pos; i--)
		{
			a[i] = a[i - 1];
		}

		a[pos] = element;
	}

	else {
		a[pos] = element;

	}

}
void changeElementValueAtPosOfArray(int* a, int pos, unsigned element) {
	a[pos] = element;

}
