#include <stdio.h>

int main() {
    int temps[2][7];
    char cityNames[2][10] = {"City A", "City B"};
    int i, j;

    // input temperatures for each city
    for (i = 0; i < 2; i++) {
        printf("Enter temperatures for %s for the week:\n", cityNames[i]);
        for (j = 0; j < 7; j++) {
            scanf("%d", &temps[i][j]);
        }
    }

    // display temperatures for each city
    for (i = 0; i < 2; i++) {
        printf("Temperatures for %s for the week:\n", cityNames[i]);
        for (j = 0; j < 7; j++) {
            printf("%d ", temps[i][j]);
        }
        printf("\n");
    }

    return 0;
}
//output:
Enter temperatures for City A for the week:
23
25
24
27
26
22
21
Enter temperatures for City B for the week:
21
22
20
18
19
20
23
Temperatures for City A for the week:
23 25 24 27 26 22 21 
Temperatures for City B for the week:
21 22 20 18 19 20 23 //
