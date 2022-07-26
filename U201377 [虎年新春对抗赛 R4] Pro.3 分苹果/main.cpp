#include <iostream>
using namespace std;
int n,input[101],sum,_min=101;
int main() {
    cin>>n;
    for(int i=1;i<=n;i++) {
        cin >> input[i];
        sum += input[i];
        _min=min(input[i],_min);
    }
    for(int i=sum/2;i>=0;i--)
    {

    }

    return 0;
}
