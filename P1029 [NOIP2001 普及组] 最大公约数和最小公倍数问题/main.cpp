#include <bits/stdc++.h>
using namespace std;
long long a,b,ans;
int _gcd(int a,int b) {
    if (a % b == 0) return b;
    else return _gcd(b,a%b);
}
/*inline*/ int gcd(int a,int b)
{ return 1ll*a*b/_gcd(a,b);}
int main()
{
    cin.sync_with_stdio(false);
    cout.sync_with_stdio(false);
    cin>>a>>b;
    for(int i=1;i<=b;++i) if(a*b%i==0&&gcd(i,a*b/i)==b) ans++;
    cout<<ans<<endl;
    return 0;
}
