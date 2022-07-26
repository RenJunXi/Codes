#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i=n; i>=1; i--) {
		for(int d=n; d-1>=i; d--) {
			printf(" ");
		}
		for(int j=1; j<=i; j++) {
	
			printf("*");
		}
		cout<<endl;
	}
	return 0;
}
