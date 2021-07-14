/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  //variable declaration
  int mark1, mark2, total;
  float avg;

  //getting input
  printf("Enter Mark Of Subject 1:");
  scanf("%d", &mark1);
  printf("Enter Mark Of Subject 2:");
  scanf("%d", &mark2);

  //Calculations
  total = mark1 + mark2;
  avg = total / 2;
  
  //print output
  printf("Average of the marks: %.2f", avg);


  return 0;
}

