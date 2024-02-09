#include <iostream>

int fact(int n){
    // n! = n * n-1 ... 1
    int a = n;
    int t = 1;
    while (a > 1){
        t *= a;
        a--;
    }
    
    return t;
}

int nCk(int n, int k){
    int result = fact(n) / (fact(k)*fact(n-k));
    return result;
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


bool isPrime (int number){
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