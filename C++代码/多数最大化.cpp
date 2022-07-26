#include<bits/stdc++.h>
using namespace std;
int n,temp,_max;
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&temp);
		if(temp>_max)
		    _max=temp;
	}
	printf("%d",_max);
	
}
