#include <iostream>
using namespace std;
int N,M,X,T,D,ans;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin>>N>>M>>X>>T>>D;
    ans=T;
    for(int i=N;i>=M;i--)
    {
        if(i>=X&&i<=N)
            continue;
        ans-=D;
    }
    cout<<ans<<endl;
    return 0;
}
