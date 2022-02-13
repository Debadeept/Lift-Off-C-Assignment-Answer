#include<stdio.h>
  void main()
  {
      int x;
      int y;

      printf("Enter two numbers");
      scanf("%d %d",&x,&y);

      if(x>=y)
      {
       printf("greater number is %d",x);
      }
      if(x<=y)
      {
          printf("greater number is %d",y);
      }


  }