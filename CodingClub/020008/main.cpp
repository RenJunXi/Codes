#include <iostream>
using namespace std;
int max_can,temp,temp1,cnt;
struct tree_struct
{
    int root;
    int price;
    int data;
}tree[100001];,
void build(int temp,int c)
{
    tree[cnt++].data=temp;
    if(tree[cnt]>tree[c].data)
    {
        tree[c].price++;

    }
    return;
}
void erase(int temp)
{
    return;
}
void output(int temp)
{
    return;
}
int main (){
    cin>>max_can;
    do
    {
        cin>>temp;
        switch(temp)
        {
            case 1:
                cin>>temp1;
                build(temp1,0);
            case 2:
                cin>>temp1;
                erase(temp1);
            case 3:
                cin>>temp1;
                output(temp1);
            default:
                return 0;
        }
    }while(temp!=0);
    return 0;
}
