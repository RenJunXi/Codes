#include <bits/stdc++.h>
using namespace std;
struct memory
{
    int date;
    int i;
    bool operator<(const memory & temp)const
    {
        return this->date<temp.date;
    }
};
memory _input[1000];
int ans[1000],n;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++) {
        cin >> _input[i].date;
        _input[i].i=i;
    }
    sort(_input+1,_input+n+1);
    for(int i=1;i<=n;i++)
        ans[_input[i].i]=i;
    for(int i=1;i<=n;i++)
        cout<<ans[i]<<" ";
    return 0;
}
