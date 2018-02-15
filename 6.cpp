#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long long n, sum=0, sumofsq=0;
        cin >> n;
        sum=pow((n*(n+1)/2),2);
        sumofsq=n*(n+1)*(2*n+1)/6;
        cout<<sum-sumofsq<<endl;
    }
    return 0;
}
