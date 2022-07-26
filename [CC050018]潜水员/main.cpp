#include <iostream>
#include <cstring>
using namespace std;
int O,N,n;
int dp[1001][31][80];
struct gas
{
    int oxy;
    int nit;
    int weight;
}input[1001];
inline istream & operator>>(istream & Istream,gas & Gas)
{
    return Istream>>Gas.oxy>>Gas.nit>>Gas.weight;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cin>>O>>N>>n;
    for(int i=1;i<=n;i++)
        cin >> input[i];
    memset(dp,0x3f, sizeof(dp));
    dp[0][0][0]=0;
    for(int i=1;i<=n;i++)
        for(int j=0;j<=O;j++)
            for(int k=0;k<=N;k++)
            {
                dp[i][j][k]=dp[i-1][j][k];
                if(dp[i-1][max(0,j-input[i].oxy)][max(0,k-input[i].nit)]+input[i].weight<dp[i][j][k])
                    dp[i][j][k]=dp[i-1][max(0,j-input[i].oxy)][max(0,k-input[i].nit)]+input[i].weight;
            }
    cout<<dp[n][O][N]<<endl;
    return 0;
}
