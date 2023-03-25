#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch;
    int i, count = 0;

    printf("Enter any string: ");
    fgets(str, 100, stdin);

    printf("Enter any character to search: ");
    scanf("%c", &ch);

    for (i = 0; i < strlen(str); i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    printf("Total occurrences of '%c' in '%s' = %d\n", ch, str, count);

    return 0;
}
//output:
Enter any string: buygebdhxufxiwg
Enter any character to search: g
Total occurrences of 'g' in 'buygebdhxufxiwg
' = 3//
