#include <iostream>
#define int long long
using namespace std;
int n,k,now_sum,ans=2147483647;
int mem[1048576],sum[1048576];
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> n >> k;
    for (int i = 1; i <= n - 1; i++) {
        cin >> mem[i];
        now_sum += mem[i];
        sum[i] = now_sum;
    }
    for (int x = 1; x <= n - 1; x++) {
        int 最大传送点=min(x + k, n);
        int 目标点前缀和=sum[最大传送点];
        int 终点前缀和=sum[n - 1];
        int 该点前缀和=sum[x];
        int 当前答案=终点前缀和-目标点前缀和+该点前缀和;
        ans=min(ans,当前答案);
    }
    cout << ans << endl;
    return 0;
}
