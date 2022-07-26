#include<iostream>
#include<string>
using namespace std;
int n;
string run(int num,string s=""){
    if(num==0) return "0";
    int i=0;
    do
    {
        if(num&1)
        {
            if(i==1)
                s="2";
            else
                s=("2("+run(num,(string)"")+")")+(s==""?"":"+")+s;
        }
    }
    while(i++,num=num>>1);
    return s;
}
int main(){
    cin>>n;
    cout<<run(n,(string)"")<<endl;
}