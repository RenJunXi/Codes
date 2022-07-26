#include<iostream>
#include<vector>
using namespace std;
vector<int> trees[101];
int n;
void dfs(int number)
{
    cout<<number<<endl;
    for(int i=1;i<=trees[number].size();i++)
        dfs(trees[number][i]);
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
        vector[a].push_back(b);
    }
}