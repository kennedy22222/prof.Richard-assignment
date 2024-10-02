//program ro run a bank implementation program
/*
Author:KARANJA KENNEDY THIGA
Reg n.o:CT101/G/23771/24
Date:27/9/2024
*/
#include<stdio.h>
int main() {
	int age;
	float income;
	age=21;
	income=21000;
	
	printf("Enter age:\n");
	scanf("%d",&age);
	
	printf("Enter annual income:");
	scanf("%f",&income);
	
	if(age>=21 && income>=21000){
		printf("congratulasions you qualify for a loan.\n");
	}  {		 
	printf("unfortunately,we are unable to offer you aloan at this time.\n");
	}
	printf("%.2f:\n");
	
return 0;
}	