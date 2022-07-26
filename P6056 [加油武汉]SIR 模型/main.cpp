#include <iostream>
#include <cmath>
#define int long long
using namespace std;
int    n;
int    易感染者, 感染者, 恢复者;
double 感染系数, 恢复系数;
signed main() {
    cin >> 易感染者 >> 感染者 >> n;
    cin >> 感染系数 >> 恢复系数;
    for (int i = 1; i <= n; i++) {
        int 昨天的感染者    = 感染者;
        int 昨天的易感染者   = 易感染者;
        int 今天新增的的感染者 = ceil(昨天的易感染者 * 昨天的感染者 * 感染系数 - 1e-10);
        if (今天新增的的感染者 > 昨天的易感染者) 今天新增的的感染者 = 昨天的易感染者;
        int 今天新增的的恢复者 = ceil(恢复系数 * 昨天的感染者 - 1e-10);
        恢复者 += 今天新增的的恢复者;
        感染者 -= 今天新增的的恢复者;
        感染者 += 今天新增的的感染者;
        易感染者 -= 今天新增的的感染者;
    }
    cout << 易感染者 << " " << 感染者 << " " << 恢复者 << endl;
    return 0;
}
