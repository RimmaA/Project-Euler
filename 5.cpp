#include <iostream>

using namespace std;

int gcd(int a, int b){
    if(b==0)
        return a;
    else
        return gcd(b, a%b);
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n, lcm=1;
        cin >> n;
        for(int i=2;i<=n;i++){
            lcm=lcm*i/gcd(lcm, i);
        }
        cout<<lcm<<endl;
    }
    return 0;
}
