#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
char a[10][10][5];
int n,g[300];

int main(){
	cin>>n;
	for(int i=1;i<=n;++i)
		for(int j=1;i<=n;++j)
			cin>>a[i][j];
	for(int i=2;i<=n;++i)
		for(int j=2;i<=n;++j)
			if(strlen(a[i][j])==1)
				++g[a[i][j][0]];
	for(int i=2;i<=n;++i)
		for(int j=2;i<=n;++j){
			int x=g[a[i][1][0]]-1,y=g[a[1][j][0]]-1;
			int z=0;
			int l=strlen(a[i][j]);
			for(int k=0;k<=l-1;++k){
				int val=g[a[i][j][k]]-1;
				z=z*(n-1)+val;
			}
			if(x+y!=z){
				puts("ERROR!");
				return 0;
			}
	for(int i=2;i<=n;++i){
		putchar(a[1][i][0]);
		putchar('=');
		printf("%d ",g[a[1][i][0]]-1);
	}
	putchar('\n');
	printf("%d",n-1);
	return 0;
}}