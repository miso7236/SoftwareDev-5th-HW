#include <stdio.h>

int main() {
    int ary[2] = {1, 10};   // ary 배열 선언
    printf("Address: %p Value: %d", &ary[0], ary[1]);   // 이거 이상해 왜 주소는 0이고 출력은 1이야??
    return 0;   // 정상종료
}