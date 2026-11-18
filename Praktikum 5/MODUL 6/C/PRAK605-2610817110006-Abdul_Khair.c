#include <stdio.h>


int main() {
    int n;
    int A[100][100], B[100][100], C[100][100];
    char label[100];

    scanf("%d", &n);
    getchar();

    fgets(label, 100, stdin);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){
            scanf("%d", &A[i][j]);
        }
    }
    
    getchar();
    fgets(label, 100, stdin);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){
            scanf("%d", &B[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = 0;

            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printf("Matriks AXB\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d", C[i][j]);

            if (j < n - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}