#include <bits/stdc++.h>
using namespace std;
int f[1001][31][80],n,m,k;
int t[1001],a[31],w[80];
int main(){
    cin >> n >> m >> k;
    for(int i = 1;i <= n;i++){
        cin >> t[i] >> a[i] >> w[i];
    }
    memset(f,0x3f,sizeof(f));
    f[0][0][0] = 0;
    for(int x = 1;x <= n;x++){
        for(int y = 0;y <= m;y++){
            for(int z = 1;z <= k;z++)
            {
                f[x][y][z] = f[x - 1][y][z];
                f[x][y][z] = f[x-1][max(0,j-input[i].oxy)][max(0,k-n[x])]+w[x];
            }
        }
    }
    cout << f[n][m][k];
    return 0;
}