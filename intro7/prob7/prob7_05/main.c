#include <stdio.h>
#include "logic.h"
#include "showResult.h"

int main(void) {
    int num;

    init();

    printf("じゃんけんゲーム\n");
    printf("0:グー、1:チョキ、2:パー\n");
    printf("(0-2でない数を入力すると終わります)\n");

    while(1) {
        printf("あなたの手は？(0-2)：");
        scanf("%d", &num);
        if(num < 0 || num > 2) {
            printf("終了します\n");
            break;
        }else {
            setPlayer(num);
            setComputer();
            Judge();
            printf("\n");
        }
    }

    return 0;
}
