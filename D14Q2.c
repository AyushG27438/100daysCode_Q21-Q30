//Write a program to print the product of even numbers from 1 to n
#include <stdio.h>

int main() {
    int n, i;
    int product = 1;
    int first = 1; 

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Product of even numbers from 1 to %d: ", n);
    for(i = 1; i <= n; i++) {
        if(i % 2 == 0) {
            if(first) {
                printf("%d", i);
                first = 0;
            } else {
                printf(" * %d", i);
            }
            product = product * i;
        }
    }
    printf(" = %d\n", product);

    return 0;
}
