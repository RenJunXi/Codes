#include <bits/stdc++.h>
using namespace std;
int a,b,ans2,A[2881],B[2881],temp,ans1;
bool temp2;
int main() {
    cin.sync_with_stdio(false);
    cout.sync_with_stdio(false);
    cin>>a;
    for(int i=1;i<=a;++i){
        cin>>temp;
        if(temp<=1440) ans1++;
        A[temp]=1;
    }
    cin>>b;
    for(int i=1;i<=b;++i){
        cin>>temp;
        if(temp<=1440) ans1++;
        B[temp]=1;
    }
    for(int i=1;i<=2880;i++)
    {
        A[i]+=A[i-1];
        B[i]+=B[i-1];
    }
    cout<<ans1<<endl;
    temp2=A[1]>B[1];
    for(int i=1;i<=2880;++i){
        if(A[i]!=B[i] and (A[i]!=0 or B[i]!=0))
            if(A[i]+B[i]==1 or (A[i]>B[i])!=temp2)
            {
                temp2=(A[i]>B[i]);
                if(A[i]+B[i]>1) ans2++;
            }
    }
    cout<<ans2;
    return 0;
}
