#include <iostream>
#include <algorithm>

using namespace std;

inline long long low_bit(long long num){
    return num & -num;
}

long long n,m,a[300005];
long long head[300005],idx;
struct edge{
    long long v,w,next;
} e[300005];
long long tmp[300005],Idx;

void add(long long u,long long v,long long w){
    e[++idx].v = v;
    e[idx].next = head[u];
    head[u] = idx;
    e[idx].w = w;
}

long long dfn[300005],size[300005],num;
long long dis[300005];
long long ans[300005];

void dfs(long long x){
    dfn[x] = ++num;
    size[x] = 1;
    for (int i = head[x];i;i = e[i].next){
        long long y = e[i].v;
        dis[y] = dis[x] + e[i].w;
        dfs(y);
        size[x] += size[y];
    }
}
struct node{
    long long op,x,id,l,r,type;
} p[300005 << 1];
long long cnt;

bool cmp(node x,node y){
    if (x.x != y.x) return x.x < y.x;
    return x.op < y.op;
}


class TreeList{
private:
    long long c[300005 << 2];
public:
    void add(long long x,long long v){
        for (;x <= m;x += low_bit(x)) c[x] += v;
    }

    long long ask(long long x){
        long long res = 0;
        for (;x;x -= low_bit(x)) res += c[x];
        return res;
    }
}tree_list;
long long get_id(long long x){
    return lower_bound(tmp + 1,tmp + m + 1,x) - tmp;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> n;
    for (int i = 1;i <= n;i++)
        cin >> a[i];
    for (int i = 2;i <= n;i++){
        long long f,w;
        cin >> f >> w;
        add(f,i,w);
    }
    dfs(1);
    for (int i = 1;i <= n;i++){
        tmp[++Idx] = dis[i];
        tmp[++Idx] = dis[i] - a[i];
    }
    sort(tmp + 1,tmp + Idx + 1);
    m = unique(tmp + 1,tmp + Idx + 1) - tmp - 1;
    for (int i = 1;i <= n;i++){
        p[++cnt] = (node) {2,dfn[i] - 1,i,1,get_id(dis[i]),-1};
        p[++cnt] = (node) {2,dfn[i] + size[i] - 1,i,1,get_id(dis[i]),1};
        p[++cnt] = (node) {1,dfn[i],get_id(dis[i] - a[i]),0,0,0};
    }
    sort(p + 1,p + cnt + 1,cmp);
    for (int i = 1;i <= cnt;i++){
        if (p[i].op == 2){
            ans[p[i].id] += p[i].type * (tree_list.ask(p[i].r) - tree_list.ask(p[i].l - 1));
        }
        else tree_list.add(p[i].id,1);
    }
    for (int i = 1;i <= n;i++)
        cout << ans[i] - 1;
    return 0;
}
