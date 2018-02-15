#include <iostream>

using namespace std;

bool isPal(int num){
    int n=num, c=100000, b=0;
    while(n>=1){
        b+=(n%10)*c;
        n/=10;
        c/=10;
    }
    return (num==b);
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n, i;
        cin >> n;
        for(i=n-1;i>=101101;i--){
            if(isPal(i)){
                for(int j=100;j<=999;j++){
                    if(i%j==0&&i/j>99&&i/j<1000)
                        goto end;
                }
            }
        }
        end:
        cout<<i<<endl;
    }
    return 0;
}
