#include <iostream>
#include <cmath>

using namespace std;

long long A[2000000];

bool isPrime(int N){
    for (int i=2;i<=sqrt(N);++i)
        if (N%i==0)
            return false;
    return true;
}

int main(){
    long long T,N,m=1;
    A[1]=0;
    cin >> T;
    while (T--){
        cin >> N;
        if (!A[N]){
            for (long long m=2;!A[N];++m){
                if (isPrime(m))
                    A[m]=A[m-1]+m;
                else
                    A[m]=A[m-1];
            }
        }
        cout << A[N] << endl;
    }
    return 0;
}
