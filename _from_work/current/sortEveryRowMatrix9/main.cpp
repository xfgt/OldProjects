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




#include <iostream>
#include <iomanip>

int main()
{

    std::string word = "";

    int n = 0;
    std::cout << "matrix lenght: "; std::cin >> n;

    std::string a[n][n];
    int wordSize = 0;


    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
                std::cin >> word;
            wordSize = word.size();
            if(wordSize <= 9)
                a[i][j] += word;
        }

    }




// print matrix
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){

            std::cout << std::setw(10) << a[i][j];
        }
        std::cout << std::endl;
    }








    return 0;
}
