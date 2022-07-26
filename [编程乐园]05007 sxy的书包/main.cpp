#include <iostream>
using namespace std;
int dp[31][1001][2001];
int n,v,m;
struct book
{
    int v,w;
}books[31];
int main()
{
    cin>>n>>v>>m;
    for(int i=1;i<=n;i++)
        cin>>books[i].v>>books[i].w;
    for(int i=1;i<=n;i++)
        for(int j=0;j<=v;j++)
            for(int k=0;k<=m;k++)
            {
                dp[i][j][k]=dp[i-1][j][k];
                if(books[i].v<=j and books[i].w<=k)
                    dp[i][j][k]=max(dp[i][j][k],dp[i][j-books[i].v][k-books[i].w]+1);
            }
    cout<<dp[n][v][m];
    return 0;
}
