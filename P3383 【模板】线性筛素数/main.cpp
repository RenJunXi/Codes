#include <iostream>
#include <cstring>
using namespace std;
bool isPrime[100000010];
int Prime[6000010],cnt = 0;
void GetPrime(int n)
{
    memset(isPrime,1,sizeof(isPrime));
    isPrime[1] = 0;
    for (int i = 2;i <= n;i++){
        if (isPrime[i])
            Prime[++cnt] = i;
        for (int j = 1;j <= cnt && i * Prime[j] <= n;j++){
            isPrime[i * Prime[j]] = 0;
            if (i % Prime[j] == 0)
                break;
        }
    }
}
int main(){
    int n,q;
    cin>>n>>q;
    GetPrime(n);
    while (q--){
        int k;
        cin>>k;
        cout<<isPrime[k]<<endl;
    }
    return 0;
}

