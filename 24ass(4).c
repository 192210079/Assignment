#include <stdio.h>

void printEvenOdd(int cur, int limit) {
    if (cur > limit) {
        return;
    }
    if (cur % 2 == 0) {
        printf("%d ", cur);
    }
    printEvenOdd(cur + 1, limit);
}

int main() {
    int lowerLimit, upperLimit;

    printf("Enter lower limit: ");
    scanf("%d", &lowerLimit);

    printf("Enter upper limit: ");
    scanf("%d", &upperLimit);

    printf("Even/odd numbers from %d to %d are: ", lowerLimit, upperLimit);
    printEvenOdd(lowerLimit, upperLimit);
    printf("\n");

    return 0;
}
//output:
Enter lower limit: 1
Enter upper limit: 10
Even/odd numbers from 1 to 10 are: 1 3 5 7 9 
//