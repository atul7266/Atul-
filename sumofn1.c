#include <stdio.h>
#include <ctype.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int sum=0;

   for(int i=1,j=n; i<=n && j>=1; i++,j--)
   {
       sum=sum+i;
       printf("%d\n", j);
   }
   printf(" Sum is : %d"  ,sum);

 

    return 0;
}