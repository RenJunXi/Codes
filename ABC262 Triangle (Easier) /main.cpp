#include <iostream>
#include <vector>
using namespace std;
vector<int> graph[101];
int n, m;
inline int check(int u,int v)
{
    for(int i=0;i<graph[u].size();i++)
        if(graph[u][i]==v)
            return true;
    return false;
}
int main() {
    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        graph[v].push_back(u);
        graph[u].push_back(v);
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; ++j) {
            for (int k = j + 1; k < n; ++k) {
                if (check(i,k) and check(j,k)) {
                    ans += 1;
                }
            }
        }
    }
    cout << ans << '\n';
    return 0;
}