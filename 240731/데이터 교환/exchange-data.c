#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a = 5;
    int b = 6;
    int c = 7;
    int temp = a;
    a = c;
    c = b;
    b = temp;
    printf("%d\n%d\n%d", a, b, c);
    return 0;
}