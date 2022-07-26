#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b;
    //a=1,b=2;
    c=a,a=b,b=c;
    cout<<a<<b<<endl;
    return 0;
}
 
