#include <stdio.h>

int main() {
    int n1, n2;
    int a[100], b[100];

    scanf("%d %d", &n1, &n2);

    if(n1 != n2) {
        printf("Jumlah tidak sama");
    } else {
        for (int i = 0; i < n1; i++) {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n2; i++) {
            scanf("%d", &b[i]);
        }
        for (int i = 0; i < n1; i++) {
            printf("%d ", a[i] * b[i]);
        }
    } 
    return 0;
}