#include <iostream>

using namespace std;
int N,M,S;
struct tree{
    int t,nex;
} trees[500010 << 1];
int head[500010],tot;

void add(int x,int y){
    trees[++tot].t = y;
    trees[tot].nex = head[x];
    head[x] = tot;
}

int depth[500001],fa[500001][22],lg[500001];

void dfs(int now,int fath){
    fa[now][0] = fath;
    depth[now] = depth[fath] + 1;
    for (int i = 1;i <= lg[depth[now]];++i)
        fa[now][i] = fa[fa[now][i - 1]][i - 1];
    for (int i = head[now];i;i = trees[i].nex)
        if (trees[i].t != fath) dfs(trees[i].t,now);
}

int LCA(int x,int y){
    if (depth[x] < depth[y]) swap(x,y);
    while (depth[x] > depth[y])
        x = fa[x][lg[depth[x] - depth[y]] - 1];
    if (x == y) return x;
    for (int k = lg[depth[x]] - 1;k >= 0;--k)
        if (fa[x][k] != fa[y][k])
            x = fa[x][k],y = fa[y][k];
    return fa[x][0];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> N >> M >> S;
    for (int i = 1;i <= N - 1;++i){
        int x,y;
        cin >> x >> y;
        add(x,y);
        add(y,x);
    }
    for (int i = 1;i <= N;++i)
        lg[i] = lg[i - 1] + (1 << lg[i - 1] == i);
    dfs(S,0);
    for (int i = 1;i <= M;++i){
        int x,y;
        cin >> x >> y;
        cout << LCA(x,y) << endl;
    }
    return 0;
}
