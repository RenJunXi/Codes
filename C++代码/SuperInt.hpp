//高精度数（以类编写）
#ifndef  superint
class Superint
{
   private:
   	char * memory;
   	unsigned long long int  len;
   	static void * temp;
public:
	Superint operator+(Superint a,Superint b)
    Superint operator-(Superint a,Superint b)
	Superint operator*(Superint a,Superint b)
	Superint operator/(Superint a,Superint b)
	bool operator>(Superint a,Superint b)
	bool operator<(Superint a,Superint b) 
	bool operator==(Superint a,Superint b)  	
};
Superint operator+(Superint a,Superint b)
{
	int j;
	temp=a;
	len=(a.len>b.len)?a.len:b.len;
	for(unsigned long long int i=0;i<len;i++)
	{
		arr1[i+1]+=j=(temp.memory[i]+b.memory[i])/10;//进位
		arr1[i]=(temp.memory[i]+b.memory[i])%10;//保留
	}    
	if(j)temp.len++;//最后一位是否进位
	return temp;    
}

bool operator>(Superint a,Superint b) {
	if(a.len>b.len) return true;
	if(b.len>a.len) return false;
	for(int i=lena; i>0; i--) {
		if(a.memory[i]>b.memory[i]) return true;
		if(b.memory[i]>a.memory
		        [i]) return false;
	}
	return 0;
}
bool operator<(Superint a,Superint b) {
	if(a.len>b.len) return false;
	if(b.len>a.len) return true;
	for(int i=lena; i>0; i--) {
		if(a.memory[i]>b.memory[i]) return false;
		if(b.memory[i]>a.memory
		        [i]) return true;
	}
	return 0;
}
bool operator==(Superint a,Superint b) {
	if(a.len>b.len) return false;
	if(b.len>a.len) return false;
	for(int i=lena; i>0; i--) {
		if(a.memory[i]>b.memory[i]) return false;
		if(b.memory[i]>a.memory[i]) return false;
	}
	return true;
}
#define superint
#endif
