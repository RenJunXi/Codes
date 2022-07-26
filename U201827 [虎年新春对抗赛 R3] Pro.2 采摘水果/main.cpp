#include <iostream>
using namespace std;
int input[10001],n,m,ans,now_m;
bool int_max(int a,int b){return a>b;}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin >> input[i];
    sort(input+1,input+n+1, int_max);
    for(ans=input[1];ans>0;ans--)
    {
        now_m=0;
        for(int i=1;i<=n;i++) {
            if (input[i] <= ans or now_m>=m) break;
            now_m += max(0,input[i] - ans);
        }
        if(now_m >= m) break;
    }
    cout<<ans<<endl;
    return 0;
}
