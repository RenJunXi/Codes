#include <iostream>

using namespace std;
char image[1001][1001];
int n, m, N;

void make_square(int x, int y, int final_x, int final_y, char font) {
    for (int i = y; i <= final_y; i++)
        for (int j = x; j <= final_x; j++)
            image[i][j] = font;
}

void make_l(int x, int y, int a, int b, int c, int d) {
    if (d == 1) {
        make_square(x, y, x + a - 1, y + b - 1, '*');
        make_square(x + c, y + c, x + a - 1, y + b - 1, '.');
    } else if (d == 2) {
        make_square(x, y, x + a - 1, y + b - 1, '*');
        make_square(x, y + c, x + a - c - 1, y + a - c, '.');
    } else if (d == 3) {
        make_square(x, y, x + a - 1, y + b - 1, '*');
        make_square(x, y, x + a - c - 1, y + b - c - 1, '.');
    } else if (d == 4) {
        make_square(x, y, x + a - 1, y + b - 1, '*');
        make_square(x + c, y, x + a - 1, y + b - c - 1, '.');
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> n >> m >> N;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            image[i][j] = '.';
    for (int i = 1; i <= N; i++) {
        int x, y, a, b, c, d;
        cin >> x >> y >> a >> b >> c >> d;
        make_l(x, y, a, b, c, d);
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++)
            cout << image[i][j];
        cout << endl;
    }
    return 0;
}

