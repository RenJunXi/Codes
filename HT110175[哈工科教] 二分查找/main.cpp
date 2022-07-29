#include <iostream>
#include <algorithm>
using namespace std;
int n,memory[100001],x;
inline bool cmp(int a,int b)
{
    return a>b;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>memory[i];
    sort(memory+1,memory+n+1);
    cin>>x;
    cout<<lower_bound(memory+1,memory+n+1,x)-memory;
    return 0;
}
