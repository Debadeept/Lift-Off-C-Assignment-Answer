#include<stdio.h>
  void main()
  {
      float PI=3.14;
      float r;
      float diameter;
      float area;
      float circumference;

      printf("Enter the radius of circle\n");
      scanf("%f",&r);
      diameter=2*r;
      area=PI*r*r;
      circumference=2*PI*r;
      printf("the diameter of the circle is %d\n",diameter);
      printf("the area of the circle is %f\n",area);
      printf("the circumference of circle is %f",circumference);



  }