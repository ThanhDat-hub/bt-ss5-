#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    printf("nhap vao mot so nguyen duong: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("tong cac so tu 1 den %d la: %d\n", n, sum);

    return 0;
}

