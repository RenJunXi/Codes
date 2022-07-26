#include <bits/stdc++.h>
using namespace std;
int t[30001], sum[26], dp[30001], n, m ;
int main() {
    cin >> n >> m;
    for (int i = 1, value = 0; i <= m; i++, value = 0) {
        cin >> t[i] >> value;
        sum[i] = t[i] * value;
    }
    for (int i = 1; i <= m; i++)
        for (int j = n - t[i]; j >= 0; j--)
            dp[j + t[i]] = max(dp[j] + sum[i], dp[j + t[i]]);
    cout << dp[n];
    return 0;
}
