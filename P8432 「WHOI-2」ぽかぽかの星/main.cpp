#include <iostream>
using namespace std;
#define int long long
#define endl "\n"
const int maxn = 5e6 + 10;
const int mo = 1e9 + 7;
inline int read(){
    int ret = 0,f = 1;
    char ch = getchar();
    while (!isdigit(ch)){
        if (ch == '-')f = -f;
        ch = getchar();
    }
    while (isdigit(ch)){
        ret = ret * 10 + ch - '0';
        ch = getchar();
    }
    return ret * f; //x=(x<<1)+(x<<3)+(ch^48);
}
inline int mod(int x){ return x >= mo?x % mo:x; }
inline int qpow(int x,int k){
    int res = 1,base = x;
    while (k){
        if (k & 1) res *= base,res = mod(res);
        k >>= 1;
        base *= base;
        base = mod(base);
    }
    return res;
}
int jc[maxn],jc_inv[maxn];
inline void preC(){
    jc[0] = jc_inv[0] = 1;
    for (int i = 1;i < maxn;i++) jc[i] = mod(jc[i - 1] * i);
    jc_inv[maxn - 1] = mod(qpow(jc[maxn - 1],mo - 2));
    for (int i = maxn - 2;i >= 1;i--) jc_inv[i] = mod(jc_inv[i + 1] * (i + 1));
}
inline int C(int m,int n){
    return mod(mod(jc[n] * jc_inv[n - m]) * jc_inv[m]);
}
int a[maxn] = {0};
int n,m,k,ans;
int lg2[maxn];
inline void solve(){
    n = read();
    k = read();
    ans = 0;
    if (n == 1){
        cout << k << endl;
        return;
    }
    if (k == 1){
        cout << 0 << endl;
        return;
    }
    if (k % 2 == 0){
        m = k / 2;
        for (int i = 1;i <= min(n,m);i++){
            ans += mod(C(i,m) * C(i - 1,n - 1)) * lg2[i];
            ans = mod(ans);
        }
        cout << ans << endl;
    }
    else{
        m = (k - 1) / 2;
        for (int i = 1;i <= min(n,m);i++){
            ans += mod(C(i,m) * C(i - 1,n - 1)) * lg2[i];
            ans = mod(ans);
        }
        for (int i = 1;i <= min(n - 1,m);i++){
            ans += mod(C(i,m) * C(i - 1,n - 2)) * lg2[i];
            ans = mod(ans);
        }
        cout << ans << endl;
    }
    return;
}
signed main(){
    int t = read();
    preC();
    for (int i = 0;i < maxn;i++) lg2[i] = qpow(2,i);
    while (t--){
        solve();
    }
    return 0;
}




