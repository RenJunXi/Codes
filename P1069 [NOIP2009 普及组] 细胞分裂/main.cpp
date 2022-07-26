#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
const int MAX_N = 30010;
int n,i,j,m1,m2,minn = 2147483647;
int prime[MAX_N] = {0};
bool flag = false,here;
int pipe_prime[MAX_N];
int cell_prime[MAX_N];
int sum_prime = 0,cell,now;
bool pri(int k){
    int m;
    for (m = 2;m <= floor(sqrt(k));m++)
        if (k % m == 0)return false;
    return true;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> n;
    cin >> m1 >> m2;
    for (i = 2;i <= MAX_N;i++)
        if (pri(i)){
            sum_prime++;
            prime[sum_prime] = i;
        }
    i = 1;
    while (m1 != 1){
        if (m1 % prime[i] == 0)
            while (m1 % prime[i] == 0){
                pipe_prime[i] += m2;
                m1 /= prime[i];
            }
        i++;
    }
    for (i = 1;i <= n;i++){
        cin >> cell;
        j = 1;
        now = 0;
        here = true;
        memset(cell_prime,0,sizeof(cell_prime));
        while (j <= sum_prime){
            if (cell % prime[j] == 0)
                while (cell % prime[j] == 0){
                    cell_prime[j]++;
                    cell /= prime[j];
                }
            j++;
        }
        for (j = 1;j <= sum_prime;j++){
            if (pipe_prime[j] != 0 && cell_prime[j] == 0)here = false;
            if (pipe_prime[j] != 0 && cell_prime[j] != 0){
                if (pipe_prime[j] % cell_prime[j] == 0)
                    now = max(now,pipe_prime[j] / cell_prime[j]);
                else now = max(now,pipe_prime[j] / cell_prime[j] + 1);
            }
        }
        if (here){
            flag = true;
            if (now < minn)minn = now;
        }
    }
    if (flag)cout << minn << endl;
    else cout << -1 << endl;
    return 0;
}
