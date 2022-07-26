#include <bits/stdc++.h>
using namespace std;
int a,b,n,nowi;
int gcd(int a,int b) noexcept {
    if (b % a == 0) return a;
    else return gcd(b % a, a);
}
struct mem {
    int i, ans_a, ans_b;

    bool operator<(const mem &temp) const { return i < temp.i; }

    bool operator==(const mem &temp) const { return i == temp.i; }

    bool operator>(const mem &temp) const { return i > temp.i; }
}memory[10000];
int main() {
    cin.sync_with_stdio(false);
    cout.sync_with_stdio(false);
    cin >> a >> b;
    int d = gcd(a, b), s = sqrt(d);
    for (int i = 1; i <= s; i++) {
        if (d % i == 0) {
            nowi++;
            memory[nowi].i = i;
            memory[nowi].ans_a = a / i;
            memory[nowi].ans_b = b / i;
            nowi += 1;
            memory[nowi].i = d / i;
            memory[nowi].ans_a = a / d * i;
            memory[nowi].ans_b = b / d * i;
        }
    }
    sort(memory + 1, memory + nowi + 1);
    for (int i = 1; i <= nowi; i++) {
        if (not(memory[i].i == memory[i - 1].i))
            cout << memory[i].i << " " << memory[i].ans_a << " " << memory[i].ans_b << endl;
    }
    return 0;
}
