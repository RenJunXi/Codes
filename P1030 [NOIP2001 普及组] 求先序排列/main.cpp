#include <iostream>
#include <string>
#include <map>
using namespace std;
string behind,middle;
map<char,bool> memory;
void run(int ml,int mr,int bl,int br)
{
    if(memory.count(behind[br])==0){
        cout << behind[br];
        memory[behind[br]]=true;
    }
    int pos=middle.find(behind[br]);
    if(ml==mr or bl==br)
        return;
    run(ml,pos-1,bl,bl+pos-ml-1);
    run(pos+1,mr,bl+pos-ml,bl-ml+mr-1);
}
int main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin>>middle;
    cin>>behind;
    run(0,middle.length()-1,0,behind.length()-1);
    return 0;
}
