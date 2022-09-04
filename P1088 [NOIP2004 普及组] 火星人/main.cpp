#include <iostream>
using namespace std;
int n,m,input[10009],ans[10009],flag[10009],used[10009];
inline void print(){
    for (int i = 1;i <= n;i++)
        cout << ans[i] << endl;
}
void search(int i){
    if (i == n + 1){
        m--;
        if (m == 0)
            print();
        return;
    }
    if (m == 0)
        return;
    int t;
    if (flag[i] == 0)
        t = input[i];
    else t = 1;
    for (int k = t;k <= n;k++){
        if(used[k]==0){
            used[k] = 1;
            ans[i] = k;
            search(i + 1);
            used[k] = 0;
        }
    }
    flag[i] = 1;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> n >> m;
    m++;
    for (int i = 1;i <= n;i++)
        cin >> input[i];
    search(1);
    return 0;
}
