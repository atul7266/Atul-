#include <stdio.h>
#include <ctype.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

  // for(int i=1; i<=n; i++)
  // {
  //     printf("%d\n", i);
  // }

  //int i=1;
  //while(i<=n)
  //{
  //    printf("%d\n", i);
  //    i++;
  //}

    int i=1;
    do
    {
      printf("%d\n", i);
      i++;    
    }while(i<=n);

    return 0;
}