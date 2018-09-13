#include <stdio.h>

double triangle(double, double);

int main(void) {
    double teihen, takasa;
    double menseki;

    printf("底辺＝");
    scanf("%lf", &teihen);
    printf("高さ＝");
    scanf("%lf", &takasa);

    printf("三角形の面積：%.2lf\n", triangle(teihen, takasa));

    return 0;
}

double triangle(double a, double b) {
    return a * b * 0.5;
}
