#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cctype>
#include<cstring>
#define N 10005
using namespace std;
int n,rt,m,tot,p;
int siz[N],ans[N],h[N],sum[N];
struct node{
    int nex,to;
} edge[N << 1];
inline void add(R int u,int v){
    edge[++tot].nex = h[u];

    edge[tot].to = v;
    h[u] = tot;
}
inline void dfs(R int x,R int f){
    siz[x] = 1;
    for (R int i = h[x];i;i = edge[i].nex){
        R int xx = edge[i].to;
        if (xx == f)continue;
        dfs(xx,x);
        siz[x] += siz[xx];
        sum[x] += siz[xx] * siz[xx];
    }
    ans[x] = siz[x] * siz[x] - sum[x];
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> n;
    cin >> rt;
    cin >> m;
    for (int i = 1,u,v;i <= n - 1;i++){
        cin >> u;
        cin >> v;
        add(u,v),add(v,u);
    }
    dfs(rt,0);
    while (m--){
        cin>>p;
        cout<<ans[p]<<endl;
    }
    return 0;
}
