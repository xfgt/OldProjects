#include <iostream>

int main()
{
    int n, K, L;
    int num = 0;

    int cnt = 0;
    int sum = 0;

    std::cin >> n >> K >> L;

    //(1 ≤ K ≤ L ≤ n)
    if(1 <= K){
        if(K <= L){
            if(L <= n){
                int* A = new int [n];
                for(int i = 0; i < n; i++)
                    A[i] = 0;

                for(int i = 0; i < n; i++){
                    std::cin >> num;
                    A[i] = num;
                }

                for(int j = K; j <= L; j++){
                    sum+=A[j];
                    cnt++;
                }

                int avg = sum / cnt;
                std::cout << avg << std::endl;













            }
        }
    }




    return 0;
}
