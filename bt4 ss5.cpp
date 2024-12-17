#include <stdio.h>

int main() {
    int n;
    printf("nhap mot so tu 1 den 10: ");
    scanf("%d", &n);
    printf("bang cuu chuong cua %d la:\n", n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i,n*i);
    }

    return 0;
}

