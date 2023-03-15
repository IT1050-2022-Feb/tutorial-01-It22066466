/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {
  //variable declaration
  float distance , rate ;

  //Get user input from the user 
  printf("Enter the distance : ");
  scanf("%f",&distance);
//calculating the rate if the distance is less than 30
  if(distance <= 30){
    rate = distance * 50;
  }
//calculating the rate if the distance is more than 30 
  else if(distance > 30){
    rate = 30 * 50 + (distance - 30) * 40;
  }
//display the rate 
  printf("The rate is %.2f",rate);
  return 0;
}
