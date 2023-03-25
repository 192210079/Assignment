#include <stdio.h>

int isPerfect(int num) {
    int i, sum = 0;
    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    if (sum == num) {
        return 1;
    }
    return 0;
}

int main() {
    int lowerLimit, upperLimit, i;

    printf("Input lowest search limit of perfect numbers: ");
    scanf("%d", &lowerLimit);

    printf("Input highest search limit of perfect numbers: ");
    scanf("%d", &upperLimit);

    printf("Perfect numbers between %d and %d are: ", lowerLimit, upperLimit);

    for (i = lowerLimit; i <= upperLimit; i++) {
        if (isPerfect(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
//output:
Input lowest search limit of perfect numbers: 1
Input highest search limit of perfect numbers: 100
Perfect numbers between 1 and 100 are: 6 28//    
