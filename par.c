/**program that desigs a parking management system to record
 number of bus ,car,riskaw,and the total revenue collected at the end of the day
**/
#include<stdio.h>
int nor=0,nob=0,noc=0,amount=0,count=0;
int riksha(){
	nor++;
	amount=amount+20;
	count++;
	printf("\n!!!!__Entry successful__!!!!\n");
	return 0;
}
int car(){
	noc++;
	amount=amount+40;
	count++;
	printf("\n!!!!__Entry successful__!!!!\n");
	return 0;
}
int bus(){
	nob++;
	amount=amount+50;
	count++;
	printf("\n!!!!__Entry successful__!!!!\n");
	return 0;
}
int del(){
	nob=0;
	noc=0;
	nor=0;
	amount=0;
	count=0;
}
int show(){
	printf("\n--------------------------------------");
	printf("\nThe number of car is: %d",noc);
	printf("\nThe number of bus is: %d",nob);
	printf("\nThe number of rikshaw is: %d",nor);
	printf("\nThe total amount generated is: RS. %d",amount);
	printf("\n--------------------------------------");
	return 0;
}
//int menu(){
//	int c;
//	printf("\nEnter 1 for rikshaw");
//	printf("\nEnter 2 for car");
//	printf("\nEnter 3 for bus");
//	printf("\nEnter 4 To see all details");
//	printf("\nEnter 5 to clear all data");
//	printf("\nEnter 6 to exit");
//	scanf("\n%d",&c);
//	return 0;
//}
int main(){
		int c;
	printf("\nEnter 1 for rikshaw");
	printf("\nEnter 2 for car");
	printf("\nEnter 3 for bus");
	printf("\nEnter 4 To see all details");
	printf("\nEnter 5 to clear all data");
	printf("\nEnter 6 to exit");
	
	do{
		printf("\nEnter your choice");
		scanf("%d",&c);
		switch(c){
			case 1:
//					int a=0;
					riksha();
					break;
			case 2:
					car();
					break;
			case 3:
					bus();
					break;
				
			case 4:
					show();
					break;
			case 5:
					del();
					break;
//			case 6:
//					exit();
//					break;
			default:
					printf("\nWrong choice");
		}
		
	}while(c!=6);
	
	return 0;
}
