#include <iostream>

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

