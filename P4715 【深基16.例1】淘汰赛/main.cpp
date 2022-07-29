#include<iostream>
using namespace std;
int a[(1 << 7) + 1];
int n;
int dfs(int l,int r){
    if (l == r)
        return l;
    int mid = (l + r) / 2;
    int ll = dfs(l,mid),rr = dfs(mid + 1,r);
    if (l != 1 || r != (1 << n)){
        if (a[ll] > a[rr])
            return ll;
        else
            return rr;
    }
    if (a[ll] < a[rr])
        return ll;
    else
        return rr;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin >> n;
    for (int i = 1;i <= (1 << n);i++)
        cin >> a[i];
    cout << dfs(1,(1 << n));
    return 0;
}

