#include <iostream>
#include <string>
using namespace std;
int len,left_score,right_score;
string input;
int main() {
    cin >> input;
    len = input.size();
    for (int i = 1; i < len; i++) {
        if (input[i] == input[i - 1]) {
            if (input[i] == '1')
                left_score++;
            else right_score++;
        }
    }
    cout << left_score << " : " << right_score << endl;
    return 0;
}
