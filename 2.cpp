#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long long n;
        cin >> n;
        long long sum=2, first=1, second=2, third;
        for(long long i=1;i<n;i++){
            third=first+second;
            if(third>n)
                break;
            if(third%2==0)
                sum+=third;
            first=second;
            second=third;
        }
        cout<<sum<<endl;
    }
    return 0;
}
