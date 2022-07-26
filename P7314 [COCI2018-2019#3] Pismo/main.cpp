#include <bits/stdc++.h>
using namespace std;
int n,memory[100001],ans=2147483647;
int main()
{
    ios::sync_with_stdio(false);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>memory[i];
    for(int i=1;i<=n;i++)
        ans=min(ans,max(memory[i],memory[i+1])-min(memory[i],memory[i+1]));
    cout<<ans;
    return 0;
}
