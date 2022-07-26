#include<iostream>
#include<cstring>
#include<cmath>
#define maxn 200001
using namespace std;

struct edge{
    int to,next; long long dis;
    edge(){}
    edge(const int &_to,const long long &_dis,const int &_next){ to=_to,dis=_dis,next=_next; }
}e[maxn<<1];
int head[maxn],k;

int fa[maxn][20],size[maxn],size2[maxn],sum[maxn],maxdep;
int n;
long long m,dis[maxn][20];

inline long long read(){
    register long long x(0),f(1); register char c(getchar());
    while(c<'0'||'9'<c){ if(c=='-') f=-1; c=getchar(); }
    while('0'<=c&&c<='9') x=(x<<1)+(x<<3)+(c^48),c=getchar();
    return x*f;
}
inline void add(const int &u,const int &v,const long long &w){ e[k]=edge(v,w,head[u]),head[u]=k++; }

void dfs(int u){
    size[u]=1;
    for(int i=head[u];~i;i=e[i].next){
        int v=e[i].to;
        if(v==fa[u][0])
            continue;
        fa[v][0]=u,dis[v][0]=e[i].dis;
        for(register int j=1;j<=maxdep;j++) fa[v][j]=fa[fa[v][j-1]][j-1],dis[v][j]=dis[v][j-1]+dis[fa[v][j-1]][j-1];
        dfs(v),size[u]+=size[v];
    }
}

void dfs_getsum(int u){
    for(register int i=head[u];~i;i=e[i].next){
        int v=e[i].to;
        if(v==fa[u][0]) continue;
        dfs_getsum(v);
        long long len=0; int tmp=size[v],tmp2=size2[v];
        for(register int j=maxdep;j>=0;j--) if(len+dis[v][j]<=m&&fa[v][j]) len+=dis[v][j],v=fa[v][j];
        if(len+dis[v][0]>m&&fa[v][0]) sum[fa[v][0]]+=tmp,size[u]-=tmp2;
    }
}

void dfs_get_ans(int u){
    for(int i=head[u];~i;i=e[i].next){
        int v=e[i].to;
        if(v==fa[u][0]) continue;
        dfs_get_ans(v),sum[u]+=sum[v];
    }
}

int main(){
    memset(head,-1,sizeof head);
    n=read(),m=read();
    for(register int i=2;i<=n;i++){
        int v=read(); long long w=read();
        add(i,v,w),add(v,i,w);
    }
    maxdep=(int)log(n)/log(2),dfs(1);
    for(register int i=1;i<=n;i++) size2[i]=size[i];

    dfs_getsum(1);
    dfs_get_ans(1);

    for(register int i=1;i<=n;i++) cout<<size2[i]-sum[i]<<endl;
    return 0;
}