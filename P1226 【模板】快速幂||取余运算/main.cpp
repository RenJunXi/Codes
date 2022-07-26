#include <iostream>
#define int long long
using namespace std;
int a,b,p,ans;
int quick_pow(int base,int _p){
    if (_p == 1){
        return base;
    }
    else if (_p == 0){
        return 1;
    }
    else{
        int ans = quick_pow(base,_p / 2) % p;
        int ans1 = (ans % p * ans % p) % p;
        if (_p % 2 == 1)
            ans1 = (ans1 % p * base % p) % p;
        ans1 = ans1 % p;
        return ans1;
    }
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin >> a >> b >> p;
    ans = quick_pow(a,b);
    ans = ans % p;
    cout << a << "^" << b << " mod " << p << "=" << ans;
    return 0;
}
