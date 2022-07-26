#include <iostream>
using namespace std;
int n;
int s[10000],t[10000];int b[100];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int temp1 = 0;
        int temp2 = 0;
        cin >> temp1 >> temp2 >> b[i];
        s[temp1] = i;
        t[temp2] = i;
    }
    for (int ans = 1; ans <= 1000; ans++) {
        bool flag = true;
        int now_ans = ans;
        for (int i = 1; i <= 1000; i++) {
            if (s[i] != 0)
                now_ans -= b[s[i]];
            if (t[i] != 0)
                now_ans += b[t[i]];
            if (now_ans < 0) {
                flag = false;
                break;
            }
        }

        if (flag) {
            cout << ans;
            return 0;
        }
    }
    return 0;
}