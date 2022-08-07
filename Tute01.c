/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1=0,mark2=0;
  float avg=0;
  printf("enter the mark 1");
  scanf("%d",&mark1);
  printf("enter the mark 2");
  scanf("%d",&mark2);
  avg=(mark1+mark2)/2;
  printf("the average is:%.2f",avg);
 
  
  
  
  
  return 0;
}

