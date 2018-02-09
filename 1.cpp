#include <iostream>

using namespace std;

long long get_sum(long long n){
    long long n3=n/3;
    long long n5=n/5;
    long long n15=n/15;
    //subtract repeated values
    return 3*n3*(n3+1)/2+5*n5*(n5+1)/2-15*n15*(n15+1)/2;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long long n;
        cin >> n;
        long long sum=get_sum(n-1);
        cout<<sum<<endl;
    }
    return 0;
}
