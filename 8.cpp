#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n,max=0,temp=1;
        int k;
        cin >> n >> k;
        string num;
        cin >> num;
        for(int j=0;j<k;j++)
            temp*=(num[j]-'0');
        if(max<temp)
            max=temp;
        for(int j=k;j<n;j++){
            if(num[j-k]!='0')
                temp/=(num[j-k]-'0');
            else{
                temp=1;
                for(int i=j-k+1;i<j;i++)
                    temp*=(num[i]-'0');
            }
            temp*=(num[j]-'0');
            if(max<temp)
                max=temp;
        }
        cout<<max<<endl;
    }
    return 0;
}
