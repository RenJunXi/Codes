#include <iostream>
using namespace std;
int a[7], w[7] = {0, 1, 2, 3, 5, 10, 20}, dp[1001] = {1}, ans = 0;
int main() {
    for (int i = 1; i <= 6; i++) cin >> a[i];
    for (int i = 1; i <= 6; i++)
        for (int j = 1; j <= a[i]; j++)
            for (int k = 1000; k >= 0; k--)
                if (dp[k])
                    dp[k + w[i]] = 1;
    for (int i = 1; i <= 1000; i++) if (dp[i]) ans++;
    cout << "Total=" << ans << endl;
    return 0;
}