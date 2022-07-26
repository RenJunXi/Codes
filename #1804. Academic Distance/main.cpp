#include<iostream>
#include<iomanip>
#include<queue>
using namespace std;
queue <int> que;
queue <int> q;
int s[410][410];
int ans[410][410];
int d[8][2]={{2,1},{1,2},{-1,2},{-2,1},{2,-1},{-2,-1},{1,-2},{-1,-2}};
int n,m;
int bfs(int x,int y)
{
    while(!que.empty())
    {
        x=que.front();
        y=q.front();
        que.pop();
        q.pop();
        for(int i=0;i<=7;i++)
        {
            int xx,yy;
            xx=x+d[i][0];
            yy=y+d[i][1];
            if(xx>=1 and xx<=n and yy>=1 and yy<=m and ans[xx][yy]==0 and s[xx][yy]==0)
            {
                s[xx][yy]=1;
                ans[xx][yy]=ans[x][y]+1;
                que.push(xx);
                q.push(yy);
            }
        }
    }
    return 0;
}
int main()
{
    int x,y;
    cin>>n>>m>>x>>y;
    s[x][y]=1;
    que.push(x);
    q.push(y);
    bfs(x,y);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(ans[i][j]==0)
            {
                if(i==x and j==y)
                {
                    ans[i][j]=0;
                }
                else
                    ans[i][j]=-1;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
            cout<<left<<setw(5)<<ans[i][j];
        cout<<endl;
    }
}