#include <iostream>
#include <cstdio>
using namespace std;
int f[100001],ans[100001];
int n,m,p,q;
int find(int x){
    if (x != f[x])
        f[x] = find(f[x]);
    return f[x];
}
int main(){
    //freopen("bread.in","r",stdin);
    //freopen("bread.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    for (int i = 1;i <= 100001;i++)
        f[i] = i;
    cin >> n >> m >> p >> q;
    while (m != 0){
        int a = (m * p + q) % n + 1,b = (m * q + p) % n + 1;
        int l = min(a,b),r = max(a,b);
        int x = find(l);
        while (x <= r){
            ans[x] = m;
            f[x] = find(x + 1);
            x = find(x);
        }
        m--;
    }
    for (int i = 1;i <= n;i++)
        cout << ans[i] <<endl;
    return 0;
}