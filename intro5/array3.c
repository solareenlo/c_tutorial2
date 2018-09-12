#include <stdio.h>

int main(void) {
    char s1[4] = {'a', 'b', 'c','\0'}; //配列の文字列の一番後ろには\0が必要
    char s2[] = "HelloWorld.";
    char s3[10]; //なので、ここは９文字まで読み込み可能

    printf("９文字までの文字列を入力してください：");
    scanf("%s", s3);
    printf("s1 = %s\n", s1);
    printf("s2 = %s\n", s2);
    printf("s3 = %s\n", s3);

    return 0;
}
