#include<iostream>
#include<cmath>
using namespace std;
int a[50010][18],b[50010][18],n,m,s[50010],x,y;
int p(int x,int y)
{
    int k=log(y-x+1)/log(2);
    return max(a[x][k],a[y-(1<<k)+1][k])-min(b[x][k],b[y-(1<<k)+1][k]);
}
int main()
{
    cin>>n>>m;
    memset(a,1e9,sizeof(a));
    for(int i=1;i<=n;i++)
    {
        cin>>b[i][0];
        a[i][0]=b[i][0];
    }
    int k=log2(n);
    for(int i=0;i<=k;i++)
    {
        for(int j=1;j+(1<<i)<n;j++)
        {
            a[k][i]=max(a[k][i-1],a[k+(1<<(i-1))][i-1]);
            b[k][i]=min(b[k][i-1],b[k+(1<<(i-1))][i-1]);
        }
    }
    for(int i=1;i<=m;i++)
    {
        cin>>x>>y;
        cout<<p(x,y)<<endl;
    }
    return 0;
}