#include <iostream>
using namespace std;
#define root 1,n,1
#define lson l,mid,rt<<1
#define rson mid+1,r,rt<<1|1
int n,cnt;
int head[100015],next[100015<<1],to[100015<<1];
int dfn[100015],size[100015];
int add[100015<<2];
void ad(int from,int too){
    next[++cnt]=head[from];
    to[cnt]=too;
    head[from]=cnt;
}
void dfs(int u){
    dfn[u]=++cnt;
    size[u]=1;
    int v;
    for(int i=head[u];i;i=next[i]){
        v=to[i];
        if(dfn[v])continue;
        dfs(v);
        size[u]+=size[v];
    }
}
void push_down(int rt){
    if(!add[rt])return;
    add[rt<<1]+=add[rt];
    add[rt<<1|1]+=add[rt];
    add[rt]=0;
}
void update(int x,int y,int l,int r,int rt){
    if(x<=l&&r<=y){
        add[rt]++;
        return;
    }
    push_down(rt);
    int mid=(l+r)>>1;
    if(x<=mid)update(x,y,lson);
    if(mid<y)update(x,y,rson);
}
int query(int k,int l,int r,int rt){
    if(l==r)return add[rt];
    push_down(rt);
    int mid=(l+r)>>1;
    if(k<=mid)return query(k,lson);
    return query(k,rson);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin>>n;
    for(int x,y,i=1;i<n;i++){
        cin>>x>>y;
        ad(x,y);
        ad(y,x);
    }
    cnt=0;
    dfs(1);
    for(int k,i=1;i<=n;i++){
        cin>>k;
        cout<<query(dfn[k],root)<<endl;
        update(dfn[k],dfn[k]+size[k]-1,root);
    }
    return 0;
}
