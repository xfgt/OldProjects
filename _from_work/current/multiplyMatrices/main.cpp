
#include <iostream>
#include <iomanip>

int main()
{
    int nA = 0;
    int mA = 0;

    int nB = 0;
    int mB = 0;

    int num = 0;

    std::cout << "== A matrix size ==" << std::endl;
    std::cout << "(A)N = "; std::cin >> nA;
    std::cout << "(A)M = "; std::cin >> mA;

    std::cout << "== B matrix size ==" << std::endl;
    std::cout << "(B)N = "; std::cin >> nB;
    std::cout << "(B)M = "; std::cin >> mB;



    if(nA >= 1 && nA <= 30 && nB >= 1 && nB <= 30){
        if(mA >= 1 && mA <= 40 && mB >= 1 && mB <= 40){

            int ** A = new int*[nA];
            for(int i = 0; i < nA; i++){
                A[i] = new int[mA];
            }

            int ** B = new int*[nB];
            for(int i = 0; i < nB; i++){
                B[i] = new int[mB];
            }

            if(mA == nB){

                int ** C = new int*[nA];

                for(int i = 0; i < nA; i++){
                    C[i] = new int[nA];
                }

                std::cout << "values for A matrix: " << std::endl;
                for(int i = 0; i < nA; i++){
                    for(int j = 0; j < mA; j++){
                        std::cin >> num;
                        A[i][j] = num;
                    }
                }
                num = 0;
                std::cout << "values for B matrix: " << std::endl;
                for(int i = 0; i < nB; i++){
                    for(int j = 0; j < mB; j++){
                        std::cin >> num;
                        B[i][j] = num;
                    }
                }
                int sum = 0;


                int g = 0;
                int j = 0;
                int z = 0;

                while(g <= mA){
                    sum += A[g][j] * B[j][z];
                    j++;
                    if(j > mB){
                        std::cout << sum << " ";
                        sum = 0;
                        if(z <= mB)
                            z++;
                        j = 0;
                    }
                    if(z >= mB){
                        g++;
                        z=0;
                    }
                }



               //TODO C array

                // std::cout << std::endl << "C matrix: " << std::endl;


                /** MEMORY MANAGEMENT **/

                for(int i = 0; i < mA; i++){
                    delete[] A[i];
                    delete[] B[i];
                    delete[] C[i];
                }
                delete[] A;
                delete[] B;
                delete[] C;
                A = NULL;
                B = NULL;
                C = NULL;
            }
        }
    }

    return 0;
}
