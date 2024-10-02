//program a compound interest
/*
Author:KARANJA KENNEDY THIGA
Reg no:CT101/G/23771/24
Date:25/9/2024
*/

#include<stdio.h>
#include<math.h>
int main (){

	double p,r,t,ci;
	int n;
	p=1000;
	r=5;
	t=10;
	n=4;
	 
	 printf("Enter the principal amaount:");
	 scanf("%lf",&p),
	 
	 printf("Enter the rate of interest:");
	 scanf("%lf",&r);
	 
	 printf("enter the time:");
	 scanf("%lf",&t);
	 
	 printf("The the number of times interest is compounded:");
	 scanf("%d",&n);
	 
	 ci=p*pow((1+r/(n*100)),n*t);
	 printf("ci:%.2lf\n",ci);
	 
return 0;
}