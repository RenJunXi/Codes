#include <iostream>
#include <algorithm>
using namespace std;
int n,memory[100001],x;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>memory[1];
    sort(memory+1,memory+n+1);
    cin>>x;
    cout<<upper_bound(memory+1,memory+n+1,x);
    return 0;
}
