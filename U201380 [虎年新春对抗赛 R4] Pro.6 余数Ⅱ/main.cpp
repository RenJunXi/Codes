#include <cstdio>
#define MOD 810
#define Lovelive long long
#define lld "%lld"
#define min(a, b) ((a) < (b) ? (a) : (b))
// 拓展欧几里得算法
Lovelive exgcd(Lovelive a, Lovelive b, Lovelive& x, Lovelive& y) {
    if(!b) {
        x = 1, y = 0;
        return a;
    }
    else {
        Lovelive ret = exgcd(b, a % b, y, x);
        y -= a / b * x;
        return ret;
    }
}
// 计算逆元
Lovelive getinv(int arg) {
    Lovelive x, y;
    exgcd(MOD, arg, x, y);
    return y > 0 ? y : -y; // 取abs
}

const Lovelive inv6 = getinv(6); // 当然可以提前算出它就是3323403。

Lovelive sum1(Lovelive x) { // 计算sigma(i)
    return x * (x + 1) / 2 % MOD;
}

Lovelive dif1(Lovelive l, Lovelive r) {
    return (sum1(r) - sum1(l - 1) + MOD) % MOD;
}

Lovelive sum2(Lovelive x) { // 计算sigma(i^2)
    return x * (x + 1) % MOD * (2 * x + 1) % MOD * inv6 % MOD;
}

Lovelive dif2(Lovelive l, Lovelive r) {
    return (sum2(r) - sum2(l - 1) + MOD) % MOD;
}

Lovelive calc(Lovelive n) { // 计算sigma(n % i)
    Lovelive ret = 0;
    for(int i = 1, j; i <= n; i = j + 1) {
        j = n / (n/i);
        ret = (ret + n * (j-i+1) % MOD - dif1(i, j) * (n/i) % MOD + MOD) % MOD;
    }
    return (ret + MOD) % MOD;
}

Lovelive n, m, li, s1, s2, s3;

int main() {
    scanf(lld lld, &n, &m);
    Lovelive ans = calc(n) * calc(m) % MOD;
    li = min(n, m);
    for(int i = 1, j; i <= li; i = j + 1) {
        j = min(n / (n/i), m / (m/i)); // 根号分块
        s1 = (s1 + n * m % MOD * (j-i+1)) % MOD; // 常数项
        s2 = (s2 + (n * (m/i) + m * (n/i)) % MOD * dif1(i, j)) % MOD; // 一次项
        s3 = (s3 + (n/i) * (m/i) % MOD * dif2(i, j) % MOD) % MOD; // 二次项
    }
    ans = ((ans - s1 + s2 - s3) % MOD + MOD) % MOD;
    printf(lld, ans);
}