#include <iostream>
#include <vector>
using namespace std;
vector<int> graph[101];
bool have_visited[101];
int id;
void run(int i){
    have_visited[i] = true;
    for (int j = 1;j <= graph[i].size();j++)
        if (graph[i][j] == 1 and !have_visited[j])
            run(i);
}
void must_through(){
    ;
}
void input(){
    for (int k = 0 ;k != -1;cin >> k){
        while (k >= 0){
            graph[id].push_back(k);
            cin >> k;
        }
        if (k == -2)
            id++;
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    input();
    must_through();
    return 0;
}
