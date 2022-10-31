#include<stdio.h>
#include<stdlib.h>
int main()
{
	int seats[100]={0};
	int firstclass = 0;
	int economyclass = 0;
	printf("\tWELCOME TO AIRPORT!\t\nPRESS '1'\t 'FIRST CLASS' \nPRESS '2' \t 'ECONOMY CLASS'\n");
	printf("CHOOSE YOUR OPTION:\n");
	int A = 0;
	scanf_s("%d", &A);
	switch (A)
	{ 
		
	
	  case 1:
		  printf("FIRST CLASS\n");
		  int seatno;
		  printf("ENTER THE SEAT NUMBER BTW [1 - 30]: ");
   		  scanf_s("%d", &seatno);
		  printf("YOUR SEAT NUMBER IS : %d\n", seatno);
		  printf("YOU HAVE PURCHASED FIRST CLASS TICKET. THANK YOU ! ");
		  break;
	  case 2:
		  printf("ECONOMY CLASS\n");
		  int seatnum;
		  printf("ENTER THE SEAT NUMBER BTW [31 - 100]: ");
		  scanf_s("%d", &seatnum);
		  printf("YOUR SEAT NUMBER IS : %d\n", seatnum);
		  printf("YOU HAVE PURCHASED ECONOMY CLASS TICKET. THANK YOU ! ");
		  break;

	} 
        return 0;
}