#include <iostream>
using namespace std;
int l,r,N;
int the_min=2147483647;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> N;
    for (int I = 1; I <= N; I++) {
        cin >> l >> r;
        if(r-l>=2021)
        {
            cout<<0<<endl;
            continue;
        }
        for (int i = l; i <= r; i++)
            for (int j = i + 1; j <= r; j++)
                the_min = min(the_min, i * j % 2022);
        cout << the_min << endl;
    }
    return 0;
}
