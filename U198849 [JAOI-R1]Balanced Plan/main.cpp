#include <iostream>
#include <string>

using namespace std;
int n, m;
bool flag = true;
string expwmh[15] = {"2(0)", "2", "2(2)", "2(2+2(0))", "2(2(2))", "2(2(2)+2(0))", "2(2(2)+2)",
                     "2(2(2)+2+2(0))", "2(2(2+2(0)))", "2(2(2+2(0))+2(0))", "2(2(2+2(0))+2)",
                     "2(2(2+2(0))+2+2(0))", "2(2(2+2(0))+2(2))", "2(2(2+2(0))+2(2)+2(0))",
                     "2(2(2+2(0))+2(2)+2)"};

int main() {
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        flag=true;
        cin >> m;
        for (int j = 14; j >= 0; j--) {
            if ((m >> j) & 1) {
                if (flag)
                    flag = false;
                else cout << "+";
                cout << expwmh[j];
            }
        }
        cout<<endl;
    }
    return 0;
}