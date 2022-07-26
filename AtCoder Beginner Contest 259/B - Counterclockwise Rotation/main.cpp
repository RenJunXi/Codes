#include <iostream>
#include <cmath>
using namespace std;
long double a,b,d,ans_a,ans_b;
int main(){
    cin >> a >> b >> d;
    ans_a = a * cos(d) - b * sin(d);
    ans_b = b * sin(d) + a * cos(d);
    cout << ans_a <<" "<< ans_b;
    return 0;
}
