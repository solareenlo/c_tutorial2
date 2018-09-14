// 原始ピタゴラス数(重複を許さないピタゴラス数a^2+b^2=c^2)を求める
// 参考文献：http://www.geocities.jp/m_hiroi/puzzle/pythagoras.html
// 参考文献：https://ichirin2501.hatenablog.com/entry/20091224/1261635669:
#include <stdio.h>

int gcd(int, int);

int main(void) {
    int m, n;

    for(n = 1; n < 101; n++) {
        for(m = n+1; m < 101; m++) {
            if((m-n) % 2 == 1 && m*m+n*n <= 100 && gcd(m, n) == 1) {
                printf("(%d, %d, %d)\n", m*m-n*n, 2*m*n, m*m+n*n);
            }
        }
    }

    return 0;
}

int gcd(int i, int j) {
    int amari;

    if(i == j) {
        return i;
    }

    if(i < j) {
        amari = i;
        i = j;
        j = amari;
    }

    amari = i % j;
    while(amari != 0) {
        i = j;
        j = amari;
        amari = i % j;
    }

    return j;
}
