#include <iostream>
using namespace std;
struct pots
{
    int x=0;
    int y=0;
}one,two,three;
istream & operator>>(istream & Istream,pots & Pots)
{
    return Istream>>Pots.x>>Pots.y;
}
int main() {
    ios::sync_with_stdio(false);
    cin>>one;
    cin>>two;
    cin>>three;

    return 0;
}
