#include <iostream>
using namespace std;
int n,m,ans;
int ans_mem[1001],ans_real[1001];
int main() {
    ios::sync_with_stdio(false);
    cin>>n>>m;
    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
        {
            int temp;
            cin>>temp;
            ans_mem[j]+=temp;
        }
    for(int i=1;i<=n;i++)
        cin>>ans_real[i];
    for(int i=1;i<=n;i++)
        ans+=(((((n/2)>ans_mem[i])?1:0)==ans_real[i])?1:0);
    cout<<ans<<endl;
    return 0;
}
