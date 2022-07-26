#include<bits/stdc++.h>
using namespace std;
int _input;
int main()
{
	scanf("%d",&_input);
	if((_input%100)==0)
	{
		if((_input%400)==0) printf("YES")
		else printf("NO");
	}
	else if ((_input%4)==0)  printf("YES")
	else printf("NO");
	return 0;
}
