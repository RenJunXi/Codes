#include<bits/stdc++.h>
using namespace std;
int main()
{
	int _input;
	double A,B;
	scanf("%d",&_input);
	A=((double)_input)*0.88;
	B=(_input%8)+((int)_input/8)*9;
	if(A>B) printf("A");
	else printf("B");
}
