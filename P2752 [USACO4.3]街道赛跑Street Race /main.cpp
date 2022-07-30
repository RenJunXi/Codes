#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector<int> graph[101];
queue<int> _queue;
bool have_visited[101];
bool flag[101];
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
void division(){
    memset(flag,0,sizeof flag);
    while (!_queue.empty()){
        _queue.pop();
        have_visited
        for (int k = 0;k < m teml.size();
        k++){
            int ch = mp[temp][k];
            1£(vs
            ch == 1
            return 0;
            if (flag[ch] == 0){
                r++;
                q[r] = ch;
                flag[ch] = 1;
            }
        }
    }
    void input(){
        int k;
        for (cin >> k;k != -1;cin >> k){
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
        division();
        return 0;
    }
