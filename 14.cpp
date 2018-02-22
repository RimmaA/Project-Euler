#include<bits/stdc++.h>
using namespace std;

const int Max = 5000001;
int values[Max], maxdp[Max];

int collatzSequenceLen(long long n) {
    if (n <= Max && values[n]) {
        return values[n];
    }
    if (n == 1) {
        return 1;
    }
    if (!(n & 1)) {
       return  1 + collatzSequenceLen(n / 2);
    }
    return  1 + collatzSequenceLen((3 * n + 1) / 2);
}

int main() {

    int t, n, z = -1, index;

    for (int i = 1; i <= Max; ++i ) {
        int cur_len = collatzSequenceLen(i);
        values[i] = cur_len;
        if (values[i] >= z) {
            z = values[i];
            index = i;
        }
        maxdp[i] = index;
    }
    cin >> t;
    for (int q = 0; q < t; ++q) {
        cin >> n;
        cout << maxdp[n] << "\n";
    }
}
