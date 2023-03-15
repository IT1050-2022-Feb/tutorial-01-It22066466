/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int m1, m2,sum;
  float ave;
//get user input 
  printf("Enter mark 1 : ");
  scanf("%d",&m1);
  printf("Enter mark 2 : ");
  scanf("%d",&m2);
//calculate sum
  sum = m1 + m2;
//calculate average
  ave = sum /2.0;
// display average 
  printf("The average is %.2f",ave);

    

  
  
  
  
  
  return 0;
}

