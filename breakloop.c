#include <stdio.h>
#include <ctype.h>

int main() {
    int n;
    do{
        printf("Enter number ");
        scanf("%d", &n);
        printf("%d\n",n);
      
      if(n % 2 !=0){
        break;
      }

    }while(1);
    printf("THANK YOU");
   
    return 0;
}