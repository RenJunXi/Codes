#include <iostream>
using namespace std;
const int MAX_N=105, mod = 1000007;
int n, m, a[MAX_N], dp[MAX_N][MAX_N];
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n>>m;
    for(int i=1; i<=n; i++) cin>>a[i];
    dp[0][0] = 1;
    for(int i=1; i<=n; i++)
        for(int j=0; j<=m; j++)
            for(int k=0; k<=min(j, a[i]); k++)
                dp[i][j] = (dp[i][j] + dp[i-1][j-k])%mod;
    cout<<dp[n][m]<<endl;
    return 0;
}
