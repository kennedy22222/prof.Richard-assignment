//pragram to run the fine for overdue library books
/*
Author:KARANJA KENNEDY THIGA
Reg n.o:CT101/G/23771/24
Date:27/9/2024
*/
#include<stdio.h>
int main () {
	
	int bookID;
	int dueDate,returnDate,daysOverdue;
	float fineRate,fineAmount;

	printf("Input the BookID:\n");
	scanf("%d",&bookID);
	
	printf("Input the dueDate:\n");
	scanf("%d",&dueDate);
	
	printf("Input the returnDate:\n");
	scanf("%d",&returnDate);
	
	daysOverdue=returnDate-dueDate;
	
	if(daysOverdue <=0) {
		fineRate=0;
		daysOverdue=0;
		fineRate=0;
		fineAmount=0;
	}	
	else if(daysOverdue<=7)	{
		fineRate=20;
		fineAmount=fineRate*daysOverdue;
	}	
	else if(daysOverdue<=14){
		fineRate=50;
		fineAmount=fineRate*daysOverdue;
	}	
	else {
		fineRate=100;
		fineAmount=fineRate*daysOverdue;
	}
	
	printf("Book ID:%d\n",bookID);
	printf("Due Date:%d\n",dueDate);
	printf("Return Date:%d\n",returnDate);
	printf("Days Overdue:%d\n",daysOverdue);
	printf("Fine Rate:%f\n",fineRate);
	printf("Fine Amount:%f\n",fineAmount);
	
return 0;
}		
	