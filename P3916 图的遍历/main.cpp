#include <iostream>
#include <vector>
using namespace std;
vector<int> graph[100001];
int have_visited[100001],n,m;
void dfs(int i, int d) {
    if(have_visited[i]) return;
    have_visited[i] = d;
    for(int j=0; j<graph[i].size(); j++)
        dfs(graph[i][j], d);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin>>n>>m;
    for(int i=1; i<=m; i++) {
        int temp1,temp2;
        cin>>temp1>>temp2;
        graph[temp2].push_back(temp1);
    }
    for(int i=n; i; i--)
        dfs(i, i);
    for(int i=1; i<=n; i++)
        cout<<have_visited[i]<<" ";
    cout<<endl;
    return 0;
}