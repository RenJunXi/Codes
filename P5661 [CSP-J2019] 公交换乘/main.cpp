#include<iostream>
using namespace std;
struct Ticket{
    int price;
    int last;
    bool used;
}tic[100001];
bool bus;
int t,pri,x = 1,y = 0;
int n,sum = 0;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> n;
    for (int i = 1;i <= n;i++){
        cin >> bus >> pri >> t;
        if (!bus){
            y++;
            tic[y].last = t + 45;
            tic[y].price = pri;
            tic[y].used = false;
            sum += pri;
        }
        else{
            bool can = false;
            int newx = x;
            for (int j = x;j <= y;j++){
                if (tic[j].last < t){
                    newx = j;
                    continue;
                }
                if ((tic[j].price >= pri) && (!tic[j].used)){
                    can = true;
                    tic[j].used = true;
                    break;
                }
            }
            x = newx;
            sum += int(!can) * pri;
        }
    }
    cout << sum << endl;
    return 0;
}
