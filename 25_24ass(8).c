#include <stdio.h>

int main() {
    int a[3][3], b[3][3], c[3][3];
    int i, j, k;
    int sum = 0;

    printf("Enter elements in first matrix of size 3x3\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", (*(a + i) + j));
        }
    }

    printf("Enter elements in second matrix of size 3x3\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", (*(b + i) + j));
        }
    }

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            sum = 0;
            for(k = 0; k < 3; k++) {
                sum += *(*(a + i) + k) * *(*(b + k) + j);
            }
            *(*(c + i) + j) = sum;
        }
    }

    printf("Resultant matrix after multiplication: \n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", *(*(c + i) + j));
        }
        printf("\n");
    }

    return 0;
}
//output:
Enter elements in first matrix of size 3x3
10 20 30
40 50 60
70 80 90
Enter elements in second matrix of size 3x3
1 2 3
4 5 6
7 8 9

Resultant matrix after multiplication:
300 360 420
660 810 960
1020 1260 1500//
