#include <stdio.h>
#include <ctype.h>

int main() {
    int n;
    printf("Enter a marks: ");
    scanf("%d", &n);

    if(n<30) {
        printf("C grade\n", n);
    }  else if(n>=30 && n<70){
        printf("B Grade\n");
    } else if(n>=70 && n<90){
        printf("A garde\n");
    }else if(n>=90 && n<=100){
        printf("A+ Grade\n");
    }else{
        printf("Invalid marks\n");
    }
    return 0;
}