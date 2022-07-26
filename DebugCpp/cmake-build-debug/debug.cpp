
#include <iostream>
#include <algorithm>

using namespace std;
const int N = 5e5 + 5;
int n,top;
char s[N];
int fa[N],f[N],st[N];
long long ans;

void dfs(int x,long long res){
    int flag = 0;
    if (s[x] == '(') st[++top] = x;
    else{
        if (top == 0 || s[st[top]] == ')') st[++top] = x;
        else flag = st[top],f[x] = f[fa[st[top]]] + 1,top--;
    }
    res += f[x];
    ans ^= 1ll * x * res;
    for (Edge *i = head[x];i;i = i->nxt) dfs(to,res);
    if (flag) st[++top] = flag;
    else top--;
}

int main(){
    cin>>n>>str;
    for (int i = 2;i <= n;i++) fa[i] = read(),add(fa[i],i);
    dfs(1,0);
    printf("%lld\n",ans);
    return 0;
}
