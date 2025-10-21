//Write a program to calculate the area and circumference of a circle given its radius.
#include<stdio.h>
int main(){
int radius;
printf("Enter radius:");
scanf("%d",&radius);

float area=3.14*radius*radius;
float circumference= 2*3.14*radius;


printf("Area is : %f",area);
printf("Perimeter is : %f",circumference);
return 0;

}
