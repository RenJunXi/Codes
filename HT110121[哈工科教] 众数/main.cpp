#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int N;
    while(cin>>N&&N!=0){
        int *a=new int[N];
        for(int i=0;i<N;i++){
            cin>>a[i];
        }
        int num=0,max=0,x=0;
        for(int i=0;i<=N;i++){
            if(a[i-1]==a[i]){
                num++;
            }
            else{
                if(max<num){
                    max=num;
                    x=a[i-1];
                }
                num=0;
            }
        }
        cout<<x<<endl;
    }
    return 0;
}