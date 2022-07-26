#include<map>
#include<iostream>
using namespace std;
map<string,int> Num;
int n;
int main(){
    cin>>n;
    int ans=0;
    for(int i=0;i<n;i++){
        string Name;
        cin>>Name;
        if(Num[Name]*2>i) ans++;
        Num[Name]++;
    }
    cout<<ans<<endl;
    return 0;
}
