#include <stdio.h>
#include "nameDB.h"

int main(void) {
    init();
    setName(0, "山田太郎");
    setName(1, "ただ華子");
    setName(2, "徳川家康");
    showName(1);
    showName(2);
    showName(0);

    return 0;
}
