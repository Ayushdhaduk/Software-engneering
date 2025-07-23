#include<stdio.h>
main()

{
	printf("\t    Welcome to online food store \n\n");
	
	int  amount , price , total , q , bill=0;
	char op , ch;
	
	do{
	
	int pizaa = 300 , burgar = 100 , frenchfries = 100 , sandwitch = 50 ,vadapav = 60; 

		printf("\n\n\t\tThis Is Our Menu \n\n");
		printf("\t1.Pizaa             price=300rs\n");
		printf("\t2.Burgar            price=100rs\n");
		printf("\t3.Frenchfries       price=100rs\n");
		printf("\t4.Sandwitch         price=50rs\n");
		printf("\t5.Vadapav           price=60rs\n\n");
		
		printf("Enter your choice in first latter of food :");
		scanf(" %c",&ch);
		
		switch(ch)
		{	
			case 'p':
				printf("\n\nYou select pizaa \n");
				printf("Enter the Quantity of Pizaa :");
				scanf("%d",&q);
				bill = bill + (q*pizaa);
				printf("Your   %d  pizza amount is %d",q,q*pizaa);
				break;
		
			case 'b':
				printf("\n\nYou select Burgar \n");
				printf("Enter the Quantity of Burgar :");
				scanf("%d",&q);
				bill = bill + (q*burgar);
				printf("\nYour   %d  burgar amount is %d",q,q*burgar);
				break;
				
			case 'f':
				printf("\n\nYou select Frenchfries \n");
				printf("Enter the Quantity of Frenchfries :");
				scanf("%d",&q);
				bill = bill + (q*frenchfries);
				printf("\nYour  %d   Frenchfrice amount is %d",q,q*frenchfries);
				break;
				
			case 's':
				printf("\n\nYou select Sandwitch \n");
				printf("Enter the Quantity of Sandwitch :");
				scanf("%d",&q);
				bill = bill + (q*sandwitch);
				printf("\nYour  %d  Sandwitch amount is %d",q,q*sandwitch);
				break;
				
			case 'v':
				printf("\n\nYou select Vadapav \n");
				printf("Enter the Quantity of vadapav :");
				scanf("%d",&q);
				bill = bill + (q*vadapav);
				printf("\nYour  %d  Vadapav amount is %d",q,q*vadapav);
				break;
			
			default :
				printf("\n\nInvalid choice ");
				
		}
		
			printf("\n\nDo you Want to contine ?? press y to yes press n to not :");
			scanf(" %c",&op);
			
	}while(op == 'y' || op == 'Y');
	
	
	printf("\n\nYour total bill is : %d",bill);
}
