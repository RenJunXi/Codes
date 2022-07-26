#include <iostream>
#include <algorithm>
using namespace std;
int n,num[10001],a,b;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>num[i];
    sort(num,num+n+1);
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
            a+=num[i];
        if(i%2==1)
            b+=num[i];
    }
    cout<<max(a,b);
    return 0;
}
