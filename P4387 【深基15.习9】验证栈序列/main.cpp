#include <iostream>
#include <stack>
#include <queue>
#include <cstring>

#ifndef onlinejudge
#pragma GCC optimize(2)
#endif
#define pushed _pushed[0]
#define poped _poped[0]
#define now _now[0]
#define clear(X) memset(X,0,sizeof(X))
using namespace std;
int n,m;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        queue<int> _pushed[1];
        queue<int> _poped[1];
        stack<int> _now[1];
        cin >> m;
        for (int j = 1; j <= m; j++) {
            int temp;
            cin >> temp;
            pushed.push(temp);
        }
        for (int j = 1; j <= m; j++) {
            int temp;
            cin >> temp;
            poped.push(temp);
        }
        while (!pushed.empty()) {
            now.push(pushed.front());
            pushed.pop();
            while (!now.empty() and now.top() == poped.front()) {
                now.pop();
                poped.pop();
            }
        }
        if (poped.empty())cout << "Yes" << endl;
        else cout << "No" << endl;
        clear(_pushed);
        clear(_poped);
        clear(_now);
    }
    return 0;
}
