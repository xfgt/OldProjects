#include <iostream>

int main()
{
    int N, M;
    std::cin >> N >> M;

    int counter = 0;
    int suMM = 0;
    int reminder = 0;

    if(N > M){

        do {
            suMM += M;
            counter++;
        }
        while(suMM <= N);


        if(suMM > N){
            suMM -= M;
            counter--;
            reminder = N - suMM;
        }



    }

    std::cout << reminder << std::endl;
    return 0;
}
