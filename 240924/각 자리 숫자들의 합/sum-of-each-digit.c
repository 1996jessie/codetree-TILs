#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    int sum = 0;
    
    while (n > 0) {
        sum += n % 10; 
        n /= 10; 
    }

    printf("%d\n", sum);

    return 0;
}