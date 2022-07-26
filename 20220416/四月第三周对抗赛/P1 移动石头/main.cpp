#include <iostream>
#include <algorithm>
using namespace std;
int stones[100001],n,_max,_min,cost;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>stones[i];
    sort(stones+1,stones+n+1);
    _max=stones[n]-stones[1]+1-n;
    _max-=min(stones[n]-stones[n-1]-1,stones[2]-stones[1]-1);
    _min=_max;
    int j=1;
    for(int i=1;i<=n;i++){
        while(j<n and stones[j+2]-stones[i]+1<=n)
            j++;
        cost=n-(j-i+1);
        if(j-i+1==n and stones[j]-stones[i]+1==n)
            cost=2;
        _min=min(_min,cost);
    }
    cout<<_min<<endl<<_max<<endl;
    return 0;
}
