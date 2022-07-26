#include <bits/stdc++.h>
using namespace std;
int n,L,R;
int main() {
    std::istream::sync_with_stdio(false);
    std::ostream::sync_with_stdio(false);
    cin>>n>>L>>R;
    cout<<min(R,L+(n-1-L%n))%n;
    return 0;
}
