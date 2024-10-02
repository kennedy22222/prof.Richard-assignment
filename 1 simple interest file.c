//program to calculate simple interest
/*
Author:KARANJA KENNEDY THIGA
Reg n.o:CT101/G/23771/24
Date:23/9/2024
*/
#include<stdio.h>

int main(){
	float p,r,t,si;
	
	printf("Enter the principal amount:");
	scanf("%f",&p);
	
	printf("Enter the rate of interest:");
	scanf("%f",&r);
	
	printf("Enter the time:");
	scanf("%f",&t);
	
	si=(p*r*t)/100;
	printf("si=%.2f:\n",si);
return 0;
}