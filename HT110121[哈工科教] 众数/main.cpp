#include <iostream>
#define max __INSTATED_MAX
using namespace std;
int N,num = 0,max = 0,x = 0,a[30001];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    for (int i = 0;i < N;i++)
        cin >> a[i];
    num = 0;
    max = 0;
    x = 0;
    for (int i = 0;i <= N;i++){
        if (a[i - 1] == a[i]){
            num++;
        }
        else{
            if (max < num){
                max = num;
                x = a[i - 1];
            }
            num = 0;
        }
    }
    cout << x << endl;
    return 0;
}