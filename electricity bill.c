//program to run an electrical bil
#include<stdio.h>
int main () {
	
	int customerId,unitsConsumed;
	int charges_per_unit,total_amount_to_pay,surcharge;
	char customerName[50];
	
	printf("Input the customer ID:\n");
	scanf("%d",&customerId);
	printf("Input the Customer Name:\n");
	scanf("%s",&customerName);
	printf("Input the UnitsConsumed:\n");
	scanf("%d",&unitsConsumed);
	
	if(unitsConsumed <=0) {
		charges_per_unit=0;
		total_amount_to_pay=charges_per_unit*unitsConsumed;
	}else if(unitsConsumed<=199) {
		charges_per_unit=1.20;
		total_amount_to_pay=charges_per_unit*unitsConsumed;
	}else if(unitsConsumed<=400) {
		charges_per_unit=1.50;
		total_amount_to_pay=charges_per_unit*unitsConsumed;	
	}else if(unitsConsumed<=600) {
		charges_per_unit=1.80;
		total_amount_to_pay=charges_per_unit*unitsConsumed;
	}else{
		charges_per_unit=2.00;
		total_amount_to_pay=charges_per_unit*unitsConsumed;
	}
	if(unitsConsumed>=400){
	    surcharge=total_amount_to_pay*0.15;
	}
	total_amount_to_pay+=surcharge;
	if(total_amount_to_pay<100) {
		total_amount_to_pay=100;
	}
	printf("Customer ID :%d\n",customerId);
	printf("Customer Name :%d\n",customerName);
	printf("Units Consumed:%d\n",unitsConsumed);
	printf("Charges per Unit:%d\n",charges_per_unit);
	printf(" TotalAmount To Pay:%d\n",total_amount_to_pay);
	
	return 0;
}