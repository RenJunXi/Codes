#include <iostream>
using namespace std;
long long dp[10000001][10000001], 总时间, 总数;
struct medicine {
    int v;
    int p;
} med[100001];
int main() {
    cin >> 总时间 >> 总数;
    for (int i = 1; i <= 总数; i++)
        cin >> med[i].v >> med[i].p;
    for (int i = 1; i <= 总时间; i++)
        for (int j = 1; j <= 总时间; j++)
            for (int x = 1; x <= 总数; x++)
                if (i >= med[i].v*x and dp[i - 1][j-med[i].v*x] + med[x].p > dp[i][j])
                    dp[i][j] = dp[i - 1][j-med[i].v*x] + med[x].p;
    cout << dp[总时间] << endl;
    return 0;
}
