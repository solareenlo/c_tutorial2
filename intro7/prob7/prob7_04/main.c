#include <stdio.h>
#include "calculation.h"
#include "showResult.h"

int main(void) {
    init(130); // 操作される数字
    showNum();
    add(10); // 操作される数字に10加算
    showNum();
    sub(100); // 操作される数字に100減算
    showNum();

    return 0;
}
