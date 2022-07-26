#include <iostream>
using namespace std;
char dir[100000] = {0};
long n, m, i, temp = 0, a, s;
char er_occ[100000][11] = {{0}};
int main()
{
    ios::
    cin>>n>>m;
    for (i = 0; i < n; ++i) 
        cin>>*(dir+i)>>er_occ[i];
    for (i = 0; i < m; ++i) {
        cin>>a>>s;
        if (dir[temp] == a)
            s *= -1;
        temp = (temp + n + s) % n;
    }
    printf("%s", er_occ[temp]);
    return 0;
}