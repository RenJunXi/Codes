#include <iostream>
using namespace std;
const long long mod = 998244353;
int a[1000005],b;
long long f[1000005] = {1,1};
int sum[1000005];
long long cantor(int n){
    long long ans = 0;
    for (int i = 1;i < n;i++){
        ans += sum[i] * f[n - i];
        ans %= mod;
    }
    return (ans + 1) % mod;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> b;
    for (int i = 2;i <= b;i++)
        f[i] = f[i - 1] * i % mod;
    for (int i = 1;i <= b;i++)
        cin >> a[i];
    for (int i = 1;i < b;i++)
        for (int j = i + 1;j <= b;j++)
            if (a[j] < a[i])
                sum[i]++;
    cout<<cantor(b);
    return 0;
}