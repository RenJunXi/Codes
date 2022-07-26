#include<iostream>
using namespace std;
int sum1[25]={0,0,1,2},sum2[25],a,n,m,x;
int main(){
	cin>>a>>n>>m>>x;
	for(int i=4;i=n-1;i++){
		sum1[i]=sum1[i-1]+sum1[i-2]-1;
		sum2[i]=sum2[i-1]+sum2[i-2]+1;
	}
	cout<<a*sum1[x]+(m-a*sum1[n-1])/sum2[n-1]*sum2[x];
	return 0;
}
