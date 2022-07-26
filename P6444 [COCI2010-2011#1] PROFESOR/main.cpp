#include <bits/stdc++.h>
using namespace std;
int n,a[100001],b[100001],str_01[1000001],ans,_max,ans1,ansx;
int _max_01(int n)
{
    ans=0;
    _max=-2147483647;
    for(int i=1;i<=n;i++)
    {
        if(ans>_max) _max=ans;
        if(str_01[i]==0) ans=0;
        if(str_01[i]==1) ans++;
    }

    return _max;
}
int main() {
    cin.sync_with_stdio(false);
    cout.sync_with_stdio(false);
    cin>>n;
    ans1=-2147483647;
    for(int i=1;i<=n;++i)
        cin>>a[i]>>b[i];
    for(int x=1;x<=5;++x)
    {
        memset(str_01,0,sizeof(str_01));
        for(int i=1;i<=n;i++)
            if(a[i]==x or b[i]==x)
                str_01[i]=1;
        if(ans1<_max_01(n)) {
            ans1 = _max_01(n);
            ansx=x;
        }
    }
    cout<<ans1<<" "<<ansx;
    return 0;
}
