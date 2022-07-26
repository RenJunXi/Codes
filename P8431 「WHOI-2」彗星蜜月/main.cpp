#include <iostream>
#include <cmath>
#define int unsigned long long int
using namespace std;
int T,N;
inline int LEN(int n){
    int _return = 0;
    while (n != 0){
        _return++;
        n /= 10;
    }
    return _return;
}
inline int f(int n){
    int _return = 0;
    while (n != 0){
        _return = _return * 10 + (n % 10);
        n /= 10;
    }
    return _return;
}
void solve(){
    int minn = 9e18;
    cin >> N;
    int len = LEN(N);
    for (int i = 0;i <= len;i++){
        int p = pow(10,i);
        int ni = N - (N % p) + p;
        if (ni % 10 == 0)
            ni++;
        minn = min(minn,f(ni));
    }
    cout << minn - 1 << endl;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> T;
    for (int i = 1;i <= T;i++)
        solve();
    return 0;
}
