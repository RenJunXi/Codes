#include <iostream>
#include <algorithm>
using namespace std;
int n, k;
int a[100];
char c;
unsigned long long int f[100][100], sum[100], ans, cf[100];
int main() {
    cin >> n >> k;
    c = cin.get();
    while (c < '0' || c > '9')
        c = cin.get();
    int i, j;
    for (i = 1; i <= 100; ++i)
        a[i] = c ^ 48;
        c = cin.get();
    cf[0] = 1;
    for (i = 1; i <= 100; i++)
        cf[i] = cf[i - 1] * 10;
    for (i = 1; i <= 100; i++)
        sum[i] = sum[i - 1] * 10 + a[i];
    for (i = 1; i < 100; i++) {
        f[i][1] = sum[i];
        for (j = 2; j <= k; j++)
        {
            for (int u = j - 1; u < i; ++u)
                f[i][j] = max(f[i][j], f[u][j - 1] * (sum[i] - sum[u] * cf[i - u]));
        }
        ans = max(ans, f[i][k] * (sum[100] - sum[i] * cf[100 - i]));
    }
    cout << ans << endl;
    return 0;
}