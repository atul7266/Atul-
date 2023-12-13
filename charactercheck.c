#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if(ch>='A' && ch<='Z') {
        printf("Upper case\n", ch);
    } else if(ch>='a' && ch<='z'){
        printf(" Lower case\n", ch);
    }else{
        printf("Invalid\n");
    }

    return 0;
}