/**
matrix [3 x 3] with words <= 9 in lenght:

      nice   notnice      asdf
     ashvg        xd      sbif
    qwerty    asdgjk      cvvd


      4  6  4
      5  2  4
      6  6  4

_________________________
expected output:


    nice    asdf    notnice
    xd      sbif    ashvg
    ccvd    qwery   asdgjk


      4  4  6
      2  4  5
      4  6  6

    |   sorted   |

**/

// TODO


#include <iostream>
#include <iomanip>

int main()
{

    std::string word = "";
    std::string lastWord = "";

    int n = 0;
    std::cout << "matrix lenght: "; std::cin >> n;
    std::string a[n][n];

    int currentWordSize = 0;
    int lastWordSize = 0;
    int counter = 0;


    for (int i = 0; i < n; i++) {
        counter = 0;
        for (int j = 0; j < n; j++) {
            std::cin >> word;
            currentWordSize = word.size();

            if (currentWordSize <= 9) {
                a[i][j] += word;

                if (counter > 0) {
                    if (lastWordSize > currentWordSize) {
                        a[i][j] = "";
                        a[i][j] = lastWord;
                        a[i][j - 1] = "";
                        a[i][j - 1] = word;
                    }

                }

                lastWord = word;
                lastWordSize = currentWordSize;
                counter++;
            }
        }

    }










    // print matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            std::cout << std::setw(10) << a[i][j];
        }
        std::cout << std::endl;
    }

    return 0;
}
