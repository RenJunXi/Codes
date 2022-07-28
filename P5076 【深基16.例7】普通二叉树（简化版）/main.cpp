#include <iostream>
#include <vector>
using namespace std;
int n,c,x;
vector <int> a;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin>>n;
    for(int i=0;i<n;++i) {
        cin>>c>>x;
        if(c==1) printf("%d\n",lower_bound(a.begin(),a.end(),x)-a.begin()+1);
        else if(c==2) printf("%d\n",a[x-1]);
        else if(c==3) {
            vector<int>::iterator p=lower_bound(a.begin(),a.end(),x);
            if(p==a.begin()) printf("-2147483647\n");
            else printf("%d\n",*(p-1));
        }
        else if(c==4) {
            vector<int>::iterator p=upper_bound(a.begin(),a.end(),x);
            if(p==a.end() printf("2147483647\n");
                    else printf("%d\n",*p);
        }
        else if(c==5) a.insert(upper_bound(a.begin(),a.end(),x),x);
    }
    return 0;
}