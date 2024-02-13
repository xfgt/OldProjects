    
#include <iostream>
using namespace std;


void printArr(int* arr, int size) {

    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i];
    }
    std::cout << std::endl;
}

int main()
{
	int allElements[] = { 1, 2, 3, 4, 5};
	int allElementsSize = sizeof(allElements) / sizeof(allElements[0]);

    //permute(allElements, 0, allElementsSize);

    
    int* chosenEls = new int[3]; for (int i = 0; i < 3; i++) chosenEls[i] = 0;

    int a = 0;
    for (int i = 0; i < 3; i++) {
        if (a < allElementsSize) {
            chosenEls[i] = allElements[a];
        }
        a++;
    }


    unsigned int c = 0;
    // when we reach [2] == '5', we increment [1] with 'one' and decrement [2] with 'one';
    // the second time we reach '5', we increment [0] with 'one' UNTIL [1] < 5
    while (chosenEls[1] < allElementsSize)
    {



        if (chosenEls[1] < chosenEls[2]){
            if (chosenEls[1] != chosenEls[2])
                printArr(chosenEls, 3);
        }



        if (chosenEls[2] != 5) {
            chosenEls[2]++;
        }
        else {
            if (c <= 2)
                chosenEls[1]++; chosenEls[2]--;
            if (c >= 2)
                chosenEls[2]--;
            c++;
            /*std::cout << "(" << c << ")\n";*/
        }

        if (c >= 2) {
            if (chosenEls[1] < chosenEls[2]) {
                if (chosenEls[1] != chosenEls[2]) {
                    printArr(chosenEls, 3);

                }
                else {
                    chosenEls[2]++;
                }
            }
            chosenEls[0]++;
            chosenEls[1]--;
            chosenEls[2]--;
            c=0;
            /*std::cout << "-(" << c << ")\n";*/
        }

        


    }

    

	return 0;
}
