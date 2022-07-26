#include<bits/stdc++.h>
using namespace std;
int ans;
char temp;
struct pos
{int x,y;}
        mem[15]={{1,1},{1,2},{1,3},{1,4},{2,1},{2,2},{2,3},{2,4},{3,1},{3,2},{3,3},{3,4},{4,1},{4,2},{4,3}};
int main()
{
    ios::sync_with_stdio(false);
    for(int x=1;x<=4;x++){
        for(int y=1;y<=4;y++)
        {
            cin>>temp;
            if(not(temp=='.'))
            {
                temp-=65;
                ans+=abs(mem[temp].x-x);
                ans+=abs(mem[temp].y-y);
            }
        }
    }
    cout<<ans;
}