#include <iostream>
using namespace std;
/*struct tree
{
    ;
};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    return 0;
}*/
string a,b;
void houxu(int x,int y,int p,int q) {
    if(x>y||p>q) return ;
    else {
        int i=b.find(a[x]);
    houxu(x+1,x+i-p,p,i-1);
    houxu(x+i-p+1,y,i+1,q);
    cout<<a[x];
}
}
int main() {
    cin>>b>>a;
    int l=a.length()-1;
    houxu(0,l,0,l);
    return 0;
}

