#include <stdio.h>

int main() {
    int n = 50; 
    int nhapso;

    printf("nhap so cho den khi trung voi so %d: \n",n);
    do {
        printf("nhap mot so: ");
        scanf("%d", &nhapso);
    } while (nhapso != n); 

    printf("ban da nhap dung so %d.\n",n);

    return 0;
}

