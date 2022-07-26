#include<bits/stdc++.h>
using namespace std;
int n,t;
int _cost[103],_get[103];
int memory[103][1003];
int dfs(int pos,int tleft){
    if( memory[pos][tleft] != -1 ) return memory[pos][tleft];
    if(pos == n+1)
        return memory[pos][tleft] = 0;
    int dfs1,dfs2 = -2147483647;
    dfs1 = dfs(pos+1,tleft);
    if( tleft >= _cost[pos] )
        dfs2 = dfs(pos+1,tleft-_cost[pos]) + _get[pos];
    return memory[pos][tleft] = max(dfs1,dfs2);
}
int main(){
    __builtin_memset(memory,-1,sizeof(memory));
    cin >> t >> n;
    for(int i = 1;i <= n;i++)
        cin >> _cost[i] >> _get[i];
    cout << dfs(1,t) << endl;
    return 0;
}