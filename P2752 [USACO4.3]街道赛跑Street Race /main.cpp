#include<cstdio>
#include<cstring>
using namespace std;
struct node{
    int len,next[60];
    node(){
        len = 0;
        memset(next,0,sizeof(next));
    }
} ss[200];
bool bss,bs;
int bk[60],n,sk,a[60],len,b[60],lenb;
void dfs(int k){
    if (k == n){
        bs = true;
        return;
    }
    else{
        for (int i = 1;i <= ss[k].len;i++){
            if (bk[ss[k].next[i]] == 0){
                bk[ss[k].next[i]] = 1;
                dfs(ss[k].next[i]);
                if (bs == true)
                    return;
                bk[ss[k].next[i]] = 0;
            }
        }
    }
}
void dfs1(int k){
    bk[k] = 1;
    if (k == sk){
        bss = true;
        return;
    }
    else{
        for (int i = 1;i <= ss[k].len;i++){
            if (bk[ss[k].next[i]] == 0){
                dfs1(ss[k].next[i]);
                if (bss == true)return;
            }
        }
    }
}
void dfs2(int k){
    if (bss == false)return;
    if (k == n)return;
    else{
        for (int i = 1;i <= ss[k].len;i++){
            if (bk[ss[k].next[i]] == 0){
                bk[ss[k].next[i]] = 2;
                dfs2(ss[k].next[i]);
                bk[ss[k].next[i]] = 0;
            }
            else if (bk[ss[k].next[i]] == 1){
                bss = false;
                return;
            }
        }
    }
}
int main(){
    int x,y = 0;
    while (scanf("%d",&x) != EOF){
        if (x == -1)break;
        if (x == -2)y++;
        else ss[y].next[++ss[y].len] = x;
    }
    n = y - 1;
    for (int i = 1;i < n;i++){
        bs = false;
        memset(bk,0,sizeof(bk));
        bk[i] = 1;
        dfs(0);
        if (bs == false)a[++len] = i;
    }
    if (len != 0){
        printf("%d ",len);
        for (int i = 1;i < len;i++)printf("%d ",a[i]);
        printf("%d\n",a[len]);
    }
    else printf("%d\n",len);
    for (int i = 1;i <= len;i++){
        memset(bk,0,sizeof(bk));
        bss = false;
        sk = a[i];
        bk[a[i]] = 2;
        dfs1(0);
        bss = true;
        dfs2(sk);
        if (bss == true)b[++lenb] = a[i];
    }
    if (lenb != 0){
        printf("%d ",lenb);
        for (int i = 1;i < lenb;i++)
            printf("%d ",b[i]);
        printf("%d\n",b[lenb]);
    }
    else printf("%d\n",lenb);
    return 0;
}
