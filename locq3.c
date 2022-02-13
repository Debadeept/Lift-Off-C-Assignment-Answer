#include<stdio.h>
int main()
{
    int a;
    printf("enter any number to check  even or odd");
    scanf("%d",&a);
    switch(a%2)
 {
     case 0:
     printf("this number is even");
     break;
     case 1:
     printf("this number is odd");
     break;
     
      }  return 0; 
}