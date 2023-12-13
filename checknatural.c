#include <stdio.h>
#include <ctype.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n>0){
        printf(" Natural number ");
    }else{
        printf("Not a Natural number ");
    }

    return 0;
}