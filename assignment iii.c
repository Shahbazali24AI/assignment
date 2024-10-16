#include<stdio.h>
#include<conio.h>
void main(){
	float celsius,fahrenheit;
	printf("enter temperaturein celsius");
	scanf("%f",&celsius);
	fahrenheit=(celsius*9/5)+32;
	printf("temperature in fahrenheit is %f",fahrenheit);
}