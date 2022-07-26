#include <iostream>
#include <set>
using namespace std;
int temp,n,m;
set<int> memory;
int main(){
    cin >> n;
    for (int i = 1;i <= n;i++){
        cin >> m;
        for (int j = 1;j <= m;j++){
            cin >> temp;
            if(!memory.count(temp)){
                memory.insert(temp);
                cout<<temp<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}