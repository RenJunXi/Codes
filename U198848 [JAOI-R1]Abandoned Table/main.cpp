#include <iostream>
#include <string>
using namespace std;
int n;
string input1;
string input2;
int ans1=1,ans2=1;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int ans1=1,ans2=1;
        cin>>input1>>input2;
        for(int j=0;j<input1.size();j++)
            ans1*=(input1[j]-'A'+1);
        for(int j=0;j<input2.size();j++)
            ans2*=(input2[j]-'A'+1);
        if(ans1%47==ans2%47) cout<<"GO"<<endl;
        else cout<<"STAY"<<endl;
    }
    return 0;
}
