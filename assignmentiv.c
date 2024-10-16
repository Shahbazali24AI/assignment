#include<stdio.h>
#include<conio.h>
void main(){
	float fahrenheit,celsius;
	printf("enter temperature in fahrenheit");
	scanf("%f",&fahrenheit);
	celsius=(fahrenheit-32)*5/9;
	printf("temperature in celsius is %2f",celsius);
}