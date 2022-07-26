#include<iostream>
#include<vector>
using namespace std;
vector<int> trees[101];
int n;
bool flag=false;
void dfs(int number)
{
    if(flag)
        cout<<number<<endl;
    for(int i=1;i<=trees[number].size();i++)
        dfs(trees[number][i]);
    if(!flag)
        cout<<number<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int a,b;
        cin>>a>>b;
        trees[a].push_back(b);
    }
    dfs(1);
    flag=!flag;
    dfs(1);
    return 0;
}