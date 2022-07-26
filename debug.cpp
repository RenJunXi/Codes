#include<iostream>
#include<map>
using namespace std;
map<long long,bool> integer;
long long n,m;
int ans;
int main()
{   
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>m;
        if(integer[m]) ans++;
        integer[m]=true;
    }
    cout<<ans<<endl;
}