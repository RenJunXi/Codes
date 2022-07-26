#include <iostream>
using namespace std;
long long a,b,c;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cin>>a>>b>>c;
    if(a>=b and b>=c)
        cout<<"Yes"<<endl;
    else if(c>=b and b>=a)
        cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}
