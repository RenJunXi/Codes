#include<iostream>
using namespace std;
int V,A,B,C;
int main()
{
    cin>>V>>A>>B>>C;
    for(int i=1;i<=V;i++)
        for(int j=1;j<=3;j++)
        {
            V-=A;
            if(V<0) {cout<<"F"<<endl;break;}
            V-=B;
            if(V<0) {cout<<"M"<<endl;break;}
            V-=C;
            if(V<0) {cout<<"T"<<endl;break;}
        }
    return 0;
}