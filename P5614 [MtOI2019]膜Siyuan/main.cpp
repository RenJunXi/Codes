#include<bits/stdc++.h>
using namespace std;
int n,m,ans;
struct {
    int a, b, c;
}memory[6];
int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    cin >> n>>m;
    for (int i = 1; i <= n; i++)
        cin >> memory[i].a >> memory[i].b >> memory[i].c;
    for (int x = 1; x <= m; x++)
        for (int y = 1; y <= m; y++) {
            int temp = abs(memory[1].a - x) ^ abs(memory[1].b - y) ^ 9;
            int z = memory[1].c + temp;
            if (z >= 1 && z <= m)ans++;
            for (int i = 1; i <= n; i++)
                if ((abs(memory[i].a - x) xor abs(memory[i].b - y) xor abs(memory[i].a - z)) != 9) {
                    if (z >= 1 && z <= m)ans--;
                    break;
                }
            z = memory[1].c - temp;
            if (z >= 1 && z <= m)ans++;
            for (int i = 1; i <= n; i++)
                if ((abs(memory[i].a - x) xor abs(memory[i].b - y) xor abs(memory[i].a - z)) != 9) {
                    if (z >= 1 && z <= m)ans--;
                    break;
                }
        }
    cout << ans << endl;
}