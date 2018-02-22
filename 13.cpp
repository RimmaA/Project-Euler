#include <iostream>
using namespace std;

int sum(char number[], int ans[]){
    int j, i;
    for(i = 49, j = 0; i >= 0; i--, j++){
        int carry = (ans[j] + number[i] - '0')/10;
        ans[j + 1] += carry;
        ans[j] = (ans[j] + number[i] - '0')%10;
    }
    return j;
}

int main(void){
    char number[51];
    int  ans[60]={0};
    int N, j, i;
    cin>>N;
    while(N > 0){
        cin>>number;
        j = sum(number, ans);
        N--;
    }

    int k = 1;
    if(ans[j] == 0)
        j--;
    for(i = j ; k <= 10 ; i--){
        if(ans[i]/10 != 0){
            int temp = ans[i];
            while(temp != 0){
                temp = temp/10;
                k++;
            }
        }
        else
            k++;
        cout<< ans[i];
    }
    return 0;
}
