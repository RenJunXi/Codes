#include <iostream>
using namespace std;
int n,ans;
int count(int m){
    int ans=0;
    for(int i=1;i<=m;i++)
        if(m%i==0 and m/i<=n and i<=n)
            ans++;
    return ans;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin>>n;
    for(int i=1;i<=n;i++){
        ans += count(i * i);
    }
    cout<<ans<<endl;
    return 0;
}
