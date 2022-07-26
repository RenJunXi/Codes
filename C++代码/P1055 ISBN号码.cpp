#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
using namespace std;
char _input[14],mod[12];
string __input;
int j=1,t;
int main()
{
	scanf("%s",_input);
	
	for(int i=0;i<12;i++)
	{
		if(_input[i]=='-') continue;
		else t+=((int)_input[i]-48)*j;
		j++;
	}
    
	if(t%11==_input[11])
	    printf("Right");
	else{
		_input[12]=mod[t%11];
		printf("%s%d",_input,t%11);
	}
	return 0;
}
