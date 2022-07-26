#include<iostream>
#include<string>
using namespace std;
int len,n;
string input;
int main(){
    cin>>input;
    len=input.size();
    for(int i=1;i<len;i++)
        if(input[i]!=input[i-1] or input[i]!='/')
        {
            n++;
            cout<<input[i-1];
        }
    if(input[len-1]!='/' or n==0)
        cout<<input[len-1];
}