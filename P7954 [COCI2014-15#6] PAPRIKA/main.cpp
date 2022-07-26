#include <bits/stdc++.h>
using namespace std;
int x,n,ans;
struct Memory
{
    int a;
    int b;
}mem[1001];
int Dream(int i)
{
    if(mem[i].a<=x and mem[i].b==1) return 1;
    else if(mem[i].a>x and mem[i].b==0) return 1;
    else return 0;
}
int main() {
    cin.sync_with_stdio(false);
    cout.sync_with_stdio(false);
    cin >> n >> x;
    for (int i = 1; i <= n; ++i)cin >> mem[i].a >> mem[i].b;
    for (int i = 1; i <= n - 1; ++i)
    {
        if (mem[i].a > mem[i + 1].a and mem[i + 1].b == 0 and mem[i].b ==1)
            swap(mem[i+1].a, mem[i].a);
        if (mem[i + 1].a > mem[i].a and mem[i].b == 0 and mem[i + 1].b == 1)
            swap(mem[i+1].a, mem[i].a);
    }
    for (int i = 1; i <= n; ++i)ans += Dream(i);
    cout << ans << endl;
    return 0;
}
