#include <stdio.h>
#include <ctype.h>

int main() {
    int n;
    printf("Enter marks : ");
    scanf("%d", &n);
//
  //  if( n>30 ) {
  //      printf("You are pass\n", n);
  //      if(n>80){
  //       printf("Well Done\n");
  //      } else if(n>101){
  //          printf("Wrong Marks\n");
  //      }else{
  //          printf("You are fail\n");
  //      }
  //  } 

    n > 30 ? printf("PASS\n") : printf("FAIL\n");
    return 0;
}