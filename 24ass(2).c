#include<stdio.h>
struct emp
{
    char name[20];
    int age;
};
int main()
{
    emp int xx;
    int a;
    printf("%d\n", &a);
    return 0;
}

errors:

emp int xx; - this line is incorrect. It should be struct emp xx; to declare a variable of type struct emp named xx.

printf("%d\n", &a); - this line is attempting to print the address of the variable a, but a has not been initialized to any value yet, so its address cannot be meaningfully printed.
