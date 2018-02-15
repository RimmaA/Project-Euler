#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long long n;
        cin >> n;
        long long max=1;
        for(long long i=2;i<=sqrt(n);i++){
            while(n%i==0){
                max=i;
                n/=i;
            }
        }
        if(n>max)
            max=n;
        cout<<max<<endl;
    }
    return 0;
}
