#include <bits/stdc++.h>
using namespace std;
int memory[100000][100000];
int n,k,ans;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> k >> n;
    for (int i = 1; i <= k; i++) {
        for (int j = 1; j <= n; j++) {
            int a;
            cin >> a;
            memory[i][a] = j;
        }
    }
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            if (i != j) {
                int flag = 1;
                for (int l = 1; l <= k; l++) {
                    if (memory[l][i] < memory[l][j])flag = 0;
                }
                ans += flag;
            }
    cout << ans;
}