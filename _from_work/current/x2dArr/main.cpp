#include <iostream>
#include <iomanip>



int main()
{

    int n, x;
    int num = 0;

    std::cin >> n >> x;


//  init
    int ** a = new int*[n];
    for(int i = 0; i < n; i++){
        a[i] = new int[n];
    }


//  assign
    int s = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            std::cin >> num;
            a[i][j] = num;
            s++;
        }
    }


//  check

    int current_value = 0;
    int counter = 0;
    std::string output = "";

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            current_value = a[i][j];
            if(current_value == x){
                std::cout << "LOL: " << i << std::endl;
                output[counter] = i;
                counter++;
            } else{
                current_value = 0; // reset
            }

        }
    }



//  print
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            std::cout << std::setw(5) << a[i][j];
        }
        std::cout << std::endl;
    }
    std::cout << std::endl << "rows where x is met: ";

    for(int i = 0; i < counter; i++)
        std::cout << " " << (int)output[i];

/**MM**/
    for(int i = 0; i < n; i++){
        delete[] a[i];
    }
    delete[] a;
    a = NULL;

    return 0;
}
