#include <iostream>
#include <string>
using namespace std;

int gcd(int a, int b)
{
	if (a == 0)
		return b;
	return gcd(b % a, a);
}

int findGCD(int arr[], int n)
{
	int result = arr[0];
	for (int i = 1; i < n; i++)
	{
		result = gcd(arr[i], result);

		if (result == 1)
		{
			return 1;
		}
	}
	return result;
}

int main()
{
	while (true) {


		cout << "enter 0 for stop" << endl;
		int numsArr[100] = {};
		int n = 1;
		int i = 0;


		while (n != 0)
		{
			cin >> n;
			numsArr[i] += n;
			i++;
		}

		/*for (int i = 0; i < numsArr[0]; i++)
		{
			if (numsArr[i] == 0)
				break;

			cout << numsArr[i] << endl;
		}*/
		//int n = sizeof(arr) / sizeof(arr[0]); //lenght of arr
		cout << "gcd = " << findGCD(numsArr, i) << endl;
	}
	return 0; 
}
