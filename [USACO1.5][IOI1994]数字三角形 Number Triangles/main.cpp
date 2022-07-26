#include <iostream>

using namespace std;
int r,num[10/*1001*/][10/*1001*/],memory[10/*1001*/][10/*1001*/];

int run(int i,int j){
    int _return = -1;
    if (j == r){
        return num[i][j];
    }
    if (memory[i + 1][j] == -1){
        memory[i + 1][j] = run(i + 1,j);
    }
    if (memory[i + 1][j + 1] == -1){
        memory[i + 1][j + 1] = run(i + 1,j + 1);
    }
    _return = max(memory[i + 1][j],memory[i + 1][j + 1]) + memory[i][j];
    return _return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> r;
    for (int i = 1;i <= r;i++)
        for (int j = 1;j <= i;j++){
            cin >> num[i][j];
            memory[i][j] = -1;
        }
    run(1,1);
    cout << run(1,1);
    return 0;
}
/*#include <bits/stdc++.h>
#define fp(i,l,r) for(register int i=(l);i<=(r);i++)
#define fd(i,r,l) for(register int i=(r);i>=(l);i--)
using namespace std;
int n;
int a[1000][1000];
int f[1000][1000];
int _count=0;
inline int _max(int a,int b){
    if(a>b){
        return a;
    }
    return b;
}
inline int search(int x,int y){

}
int main(){
    scanf("%d",&n);
    fp(i,1,n){
        fp(j,1,i){
            scanf("%d",&a[i][j]);
            f[i][j]=-1;
        }
    }
    printf("%d",search(1,1));
    return 0;
}
//啊啊啊啊啊啊啊
*/