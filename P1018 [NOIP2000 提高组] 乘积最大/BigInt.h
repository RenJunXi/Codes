struct QAQ {
    int x[103];
    QAQ () {memset (x, 0, sizeof (x)); return ;}
    inline QAQ operator * (const QAQ p) const { //高精*高精
        QAQ t;
        int i, j;
        for (i = 1; i <= 40; ++i) {
            for (j = 1; j <= 40; ++j) t.x[i + j - 1] += x[i] * p.x[j];
        }
        for (i = 1; i <= 40; ++i) {
            t.x[i + 1] += t.x[i] / 10;
            t.x[i] %= 10;
        }
        return t;
    }
    inline QAQ operator * (const int p) { //高精*非高精
        QAQ t;
        int i; for (i = 1; i <= 40; ++i) t.x[i] = x[i] * p;
        for (i = 1; i <= 40; ++i) {
            t.x[i + 1] += t.x[i] / 10;
            t.x[i] %= 10;
        }
        return t;
    }
    inline QAQ operator + (const int p) { //高精+非高精
        QAQ t;
        int i; for (i = 1; i <= 40; ++i) t.x[i] = x[i];
        t.x[1] += p;
        for (i = 1; i <= 40; ++i) {
            t.x[i + 1] += t.x[i] / 10;
            t.x[i] %= 10;
        }
        return t;
    }
    inline int operator < (const QAQ p) const { //max函数需要用到
        int i;
        for (i = 40; i; --i) {
            if (x[i] > p.x[i]) return 0;
            if (x[i] < p.x[i]) return 1;
        }
        return 0;
    }
    inline QAQ operator - (const QAQ p) const { //高精-高精
        QAQ t;
        int i; for (i = 1; i <= 40; ++i) {
            t.x[i] = x[i] - p.x[i];
            if (t.x[i] < 0) {
                t.x[i] += 10;
                --t.x[i + 1];
            }
        }
        return t;
    }
    inline void out () {
        int i = 40;
        while (i && !x[i]) --i;
        while (i) putchar (x[i--] + '0');
        return ;
    }
}f[N][N], sum[N], ans, cf[N];