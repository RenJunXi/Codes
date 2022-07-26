#include<iostream>
using namespace std;
int main (){
	int a,b,c,d;
	a=1,b=2,c=3,d;
	cin>>a>>b>>c;
	d=c,c=a,a=d;
	cout<<a<<""<<b<<""<<c<<endl;
	return 0;
}
