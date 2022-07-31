#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;
vector<int> graph[101];
int d[101],n,m,k,ans[101];
bool flag[101];
void bfs(int x,int y){
    memset(d,0x3f,sizeof d);
    memset(flag,0,sizeof flag);
    queue<int> _queue;
    _queue.push(x);
    flag[x] = true;
    while (!_queue.empty()){
        int temp = _queue.front();
        if (temp == y)
            break;
        for (int i = 0;i < graph[temp].size();i++){
            int ch = graph[temp][i];
            if (!flag[ch]){
                _queue.push(ch);
                d[ch] = d[temp] + 1;
                flag[ch] = !flag[ch];
            }
        }
    }
}
void print_ans(queue<int> & _queue)
{
    int len=_queue.size();
    for(int i=1;!_queue.empty();i++)
    {
        ans[i]=_queue.front();
        _queue.pop();
    }
    sort(ans+1,ans+len+1);
    for(int i=1;i<=len;i++)
        cout<<ans[i]<<" ";
    cout<<endl;
}
void getpath(int x,int y){
    memset(flag,0,sizeof flag);
    queue<int> _queue;
    _queue.push(x);
    flag[x] = 1;
    while (!_queue.empty()){
        int temp = _queue.front();
        if (temp == y)
            break;
        for(int i=0;i<graph[temp].size();i++)
        {
            int ch=graph[temp][i];
            if(d[temp]==d[ch]+1 and !flag[ch])
            {
                _queue.push(ch);
                flag[ch]=!flag[ch];
            }
        }
    }
    print_ans(_queue);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> n >> m;
    for (int i = 1;i <= m;i++){
        int temp1,temp2;
        cin >> temp1 >> temp2;
        graph[temp1].push_back(temp2);
        graph[temp2].push_back(temp1);
    }
    cin >> k;
    for (int i = 1;i <= k;i++){
        int x,y;
        cin >> x >> y;
        bfs(x,y);
        getpath(y,x);
    }
    return 0;
}
