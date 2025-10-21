//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include<stdio.h>
int main(){
int area,perimeter,length,breadth;
printf("Enter length:");
scanf("%d",&length);

printf("Enter breadth:");
scanf("%d",&breadth);

area=length*breadth;
perimeter=  2 * (length+breadth);

printf("Area is : %d",area);
printf("Perimeter is : %d",perimeter);
return 0;

}
