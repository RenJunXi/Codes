#include <iostream>
#include <cstring>
#include <map>
#define temp _temp[0]
#define has_been _has_been[0]
using namespace std;
int n;
string input;
int ans=1;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> n >> input;
    for (; ans <= n; ans++) {
        bool flag=false;
        map<string, bool> _has_been[1];
        for (int j = 0; j <= n; j++) {
            string _temp[1];
            for (int str = j; str <= ans + j - 1; str++)
                temp += input[str];
            if (has_been[temp]) break;
            else
                has_been[temp] = true;
            memset(_temp, 0, sizeof(_temp));
            if(j==n)flag=true;
        }
        if(flag)
        {
            cout<<ans<<endl;
            return 0;
        }
        memset(_has_been, 0, sizeof(_has_been));
    }
    return 2147483647;
}
