#include <stdio.h>
#include <ctype.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n>=0) {
        printf("number is positive\n", n);
        if(n % 2 == 0){
         printf("even\n");
        }else{
         printf("odd\n");
        }
    } else {
        printf("number is negative\n", n);
    }

    return 0;
}