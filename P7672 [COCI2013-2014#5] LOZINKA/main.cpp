#include <bits/stdc++.h>
using namespace std;
int n,n1;
string temp,temp1;
map<string,bool> memo;
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> temp;
        temp1 = temp;
        memo[temp] = true;
        n1 = temp.size();
        for (int j = 0; j < n1; j++)
            temp1[j] = temp[n1 - j-1];
        if (memo[temp1]) {
            cout << n1 << " ";
            cout << temp1[n1 / 2];
            return 0;
        }
    }
    return 0;
}
