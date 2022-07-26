#include<algorithm>
#include<iostream>
using namespace std;
int n,a[500000],b[500000],c[500000],ans;
bool cmp(const int &x,const int &y)
{
    return b[x]>b[y];
}
void add(int argc)
{
    for(;argc<=n;argc+=(argc&-argc))
        c[argc]++;
}
int sum(int argc)
{
    int _return=0;
    for(;argc>0;argc-=(argc&-argc))
        _return+=c[argc];
    return _return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>b[i];
        a[i]=i;
    }
    sort(a+1,a+n+1,cmp);
    unique(a+1,a+n+1);
    for(int i=1;i<=n;i++)
    {
        add(a[i]);
        ans+=sum(a[i]-1);
    }
    cout<<ans<<endl;
    return 0;
}