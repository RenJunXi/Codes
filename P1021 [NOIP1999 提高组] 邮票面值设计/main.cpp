#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int n,k,res,ans[105],tmp[105],dp[2005];
int calc(int deep,int sum){
    memset(dp,0x3f,sizeof(dp));
    dp[0] = 0;
    for (int i = 1;i <= deep;i++)
        for (int j = tmp[i];j <= n * sum;j++)
            dp[j] = min(dp[j],dp[j - tmp[i]] + 1);
    for (int i = 1;i <= n * sum;i++)
        if (dp[i] > n)
            return i - 1;
    return n * sum;
}
void dfs(int dep,int lst1,int lst2,int sum)
{
    if(dep>k)
    {
        if(res<lst2)
        {
            res=lst2;
            for(int i=1;i<=k;i++)
                ans[i]=tmp[i];
        }
        return ;
    }
    for(int i=lst1+1;i<=lst2+1;i++)
    {
        tmp[dep]=i;
        int x=calc(dep,sum+i);
        dfs(dep+1,i,x,sum+i);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin>>n>>k;
    dfs(1,0,0,0);
    for(int i=1;i<=k;i++)
        printf("%d ",ans[i]);
    cout<<endl<<"MAX="<<res<<endl;
    return 0;
}
