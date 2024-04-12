#include <stdio.h>

int main() {
    int ary[2] = {1, 10};
    printf("address: %p value: %d", &ary[0], ary[1]);
    return 0;
}