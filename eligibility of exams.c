/*
Name: Evanson Nduati
reg no: CT101/G/26516/25
*/
// final exams program
#include<stdio.h>
int main(){
int attendance;
int marks;

  printf("enter attendance \n");
  scanf("%d",& attendance);
  
  printf("enter marks \n");
  scanf("%d", &marks);
  if(attendance>=75,marks>=40){
  printf("eligible for final exams");
  }
  else{
  printf("not eligible for final exams");
  }
  return 0;
  }
