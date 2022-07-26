#include <iostream>
using namespace std;
long long a1,b1,i,j,n,m,k,t,_max;
long long a[26]={1,0},b[26]={0,1};
int main() {
    cin >> a1 >> n >> m >> k;
    for (int i = 3; i <= n; i++)
        a[i] = a[i - 1] + a[i - 2];
    b[i] = b[i - 1] + b[i - 2];
    if(n== 1)
    {
        cout << m;
        return 0;
    }
    b1 = (m - (a[n - 1] + 1) * a1) / (b[n - 1] - 1);
    cout << ((a[k] + 1) * a1 + (b[k] - 1) * b1);
    return 0;
}