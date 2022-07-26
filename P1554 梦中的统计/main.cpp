#include <iostream>
using namespace std;
int n,m,ans[1001];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin>>n>>m;
    for(int i=n;i<=m;i++){
        int j=i;
        while(j>0){
            ans[j%10]++;
            j/=10;
        }
    }
    for(int i=0;i<=9;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
