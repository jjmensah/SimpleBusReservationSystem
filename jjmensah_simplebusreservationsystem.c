#include<time.h>         //Header Files Used
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
int num,opt,price,from,route,distance,classofbus;          //Variable Declaration
int choosenclass,randloop,i,buschoosen,seat;
void payment(int price);                                   //Function Declaration
void form(int price);
void bus();
void main()
{

 srand(time(0));
 randloop=rand()%13;
 A:                                                       //Label for first set of options
 printf("\n\t ****************Welcome to JJM - Corporation***************\t\t\n " );
 printf("\n 1 . Search Your Ticket");
 printf("\n 2 . Show all buses available list ");
 printf("\n 3 . Price list ");
 printf("\n 4 . Exit\n Enter your option: ");
 scanf("%d",&opt);
 switch(opt)                                               //Decision Statement
 {
  case 1 :
	B:                                                     //Label
    printf("\n--------------------------------------------------------------------------------\n");
	printf("Which class of BUS would you like to travel with\n 1. AC inclusive\n 2. AC exclusive\n Enter your option: ");
	scanf("%d",&choosenclass);
	if(choosenclass==1)
	classofbus=10;
	else if (choosenclass==2)
	classofbus=7;
	else
    {printf("\nIncorrect entry");
    goto B;}
	C:                                                   //Label
    printf("\n--------------------------------------------------------------------------------\n");
	printf("FROM : ");
	printf("\n 1 . Accra-ACC");
	printf("\n 2 . Kumasi-KSI");
	printf("\n 3 . CapeCoast-CC");
	printf("\n 4 . Takoradi-TDI");
	printf("\n 5 . Tamale-TAM");
	printf("\n 6 . Back to Main Menu\n Enter your option: ");
	scanf("%d",&from);
	switch(from)
	{
	 case 1 :
		D:
        printf("\n--------------------------------------------------------------------------------\n");
		printf("Available roots from Accra : ");
		printf("\n 1 . Accra to Kumasi ");
		printf("\n 2 . Accra to CapeCoast");
		printf("\n 3 . Accra to Takoradi");
		printf("\n 4 . Accra to Tamale\n Enter your option : ");
		scanf("%d",&route);
		switch(route)
		{
		 case 1:
			distance = 128;
			price = distance*classofbus;
			form(price);
			bus();
			fflush(stdin);
			payment(price);
			exit(0);
		 case 2:
			distance =  40;
			price = distance*classofbus;
			form(price);
			bus();
			fflush(stdin);
			payment(price);
			exit(0);
		 case 3:
			distance =  171;
			price = distance*classofbus;
			form(price);
			bus();
			fflush(stdin);
			payment(price);
			exit(0);
		 case 4:
			distance =  302;
			price = distance*classofbus;
			form(price);
			bus();
			fflush(stdin);
			payment(price);
			exit(0);
         default:
            {
                printf("Wrong entry");
                goto D;
            }
		 }
	 case 2 :
	     E:
		printf("\n Available roots from Kumasi : ");
		printf("\n 1 . Kumasi to Accra ");
		printf("\n 2 . Kumasi to CapeCoast");
		printf("\n 3 . Kumasi to Takoradi");
		printf("\n 4 . Kumasi to Tamale\n Enter your option : ");
		scanf("%d",&route);
		switch(route)
		{
		 case 1:
			distance =  126;
			price = distance*classofbus;
			form(price);
			bus();
			fflush(stdin);
			payment(price);
			exit(0);
		 case 2:
			distance = 40;
			price = distance*classofbus ;
			form(price);
			bus();
			fflush(stdin);
			payment(price);
			exit(0);
		 case 3:
			distance =  133;
			price = distance*classofbus ;
			form(price);
			bus();
			fflush(stdin);
			payment(price);
			exit(0);
		 case 4:
			distance =  256;
			price = distance*classofbus;
			form(price);
			bus();
			fflush(stdin);
			payment(price);
			exit(0);
        default:
            {
                printf("Wrong entry");
                goto E;
            }
		 }
	 case 3 :
	     F:
		printf("\n Available roots from CapeCoast : ");
		printf("\n 1 . CapeCoast to Accra");
		printf("\n 2 . CapeCoast to Kumasi");
		printf("\n 3 . CapeCoast to Takoradi");
		printf("\n 4 . CapeCoast to Tamale\n Enter your option : ");
		scanf("%d",&route);
		switch(route)
		{
		 case 1:
			distance =  148;
			price = distance*classofbus;
			form(price);
			bus();
			fflush(stdin);
			payment(price);
			exit(0);
		 case 2:
			distance = 128;
			price = distance*classofbus;
			form(price);
			bus();
			fflush(stdin);
			payment(price);
			exit(0);
		 case 3:
			distance = 150;
			price = distance*classofbus;
			form(price);
			bus();
			fflush(stdin);
			payment(price);
			exit(0);
		 case 4:
			distance = 233;
			price = distance*classofbus;
			form(price);
			bus();
			fflush(stdin);
			payment(price);
			exit(0);
        default:
            {
                printf("Wrong entry");
                goto F;
            }
		 }
	 case 4 :
	     G:
		printf("\n Available roots from Takoradi : ");
		printf("\n 1 . Takoradi to Accra");
		printf("\n 2 . Takoradi to Kumasi");
		printf("\n 3 . Takoradi to CapeCoast");
		printf("\n 4 . Takoradi to Tamale\n Enter your option : ");
		scanf("%d",&route);
		switch(route)
		{
		 case 1:
			distance = 130;
			price = distance*classofbus;
			form(price);
			bus();
			fflush(stdin);
			payment(price);
			exit(0);
		 case 2:
			distance = 116;
			price = distance*classofbus;
			form(price);
			bus();
			fflush(stdin);
			payment(price);
			exit(0);
		 case 3:
			distance =  96;
			price = distance*classofbus;
			form(price);
			bus();
			fflush(stdin);
			payment(price);
			exit(0);
		 case 4:
			distance =  201;
			price = distance*classofbus;
			form(price);
			bus();
			fflush(stdin);
			payment(price);
			exit(0);
        default:
            {
                printf("Wrong entry");
                goto G;
            }
		 }
	 case 5 :
	     H:
		printf("\n Available roots from Tamale : ");
		printf("\n 1 . Tamale to Accra");
		printf("\n 2 . Tamale to Kumasi");
		printf("\n 3 . Tamale to CapeCoast");
		printf("\n 4 . Tamale to Takoradi\n Enter your option : ");
		scanf("%d",&route);
		switch(route)
		{
		 case 1:
			distance =  267;
			price = distance*classofbus;
			form(price);
			bus();
			fflush(stdin);
			payment(price);
			exit(0);
		 case 2:
			distance = 197;
			price = distance*classofbus;
			form(price);
			bus();
			fflush(stdin);
			payment(price);
			exit(0);
		 case 3:
			distance = 214;
			price = distance*classofbus;
			form(price);
			bus();
			fflush(stdin);
			payment(price);
			exit(0);
		 case 4:
			distance = 229;
			price = distance*classofbus;
			form(price);
			bus();
			fflush(stdin);
			payment(price);
			exit(0);
        default:
            {
                printf("Wrong entry");
                goto H;
            }
		 }

		case 6:
			goto A;
        default:
            {
                printf("Wrong entry");
                goto C;
            }

		 }
		 break;

  case 2 :
	  printf("\n--------------------------------------------------------------------------------\n");
	  printf("Buses under JJM Services ");
	  for(i=0;i<25;i++)
	  {
	   printf("\n%d - BUS NUMBER -  %dJJM%d",i+1,rand()%60,rand()%40);
	  }
	  break;
  case 3 :
	 printf("\n For AC inclusive BUS seats 10GH per Km per head ");
	 printf("\n For AC exclusive BUS seats 7GH per Km per head ");
	 break;
  case 4:
    return;
    default:
  {
            printf("Wrong entry");
            goto A;
        }
 }
 getch();
 }
 void form(int price)                       //Function Definition to determine amount paid
{
 int total,k;
 int *n=&num;
 printf("\n--------------------------------------------------------------------------------\n\t\t\t\tNumber of passengers : ");
 scanf("%d",n);
 total=price * num;
 printf("\n--------------------------------------------------------------------------------\n");
 printf("Total amount paid for ticket will be GH%d\n",total);
}

void bus()                              //Function definition for buses available for reservation
{
 srand(time(0));
 seat=rand()%30;
 printf("\n--------------------------------------------------------------------------------\n");
 printf("Buses Available between this route : ");
 for(i=0;i<randloop;i++)
 {
 printf("\n%d - BUS NUMBER -  %dJJM%d : PICKUP TIME - %d:%d%d ",i+1,rand()%60,rand()%40,rand()%23,rand()%6,rand()%9);
 }
 printf("\n--------------------------------------------------------------------------------\n");
 printf("Choose your choice : \t");
 scanf("%d",&buschoosen);
 if(seat<num)
 {
  printf("\n--------------------------------------------------------------------------------\n");
  printf("Booking Failed...\nSorry only %d seat is available in selected bus...\nSeat cannot be Allocated...\nSorry for the inconvenience ",seat);
  getch();
  exit(0);
 }
 return;
}
void payment(int price)                     //Function definition for payments
{
   int j,id[100],i;
   char name[100][100];
   for(i=0;i<num;i++)
   {
   fflush(stdin);
   printf("\n Enter name of Passenger No%d :",i+1);
   gets(name[i]);
   printf("\n Ghana Card ID Number of passenger : ");
   scanf("%d",&id[i]);
   }
  printf("\n-----------------------------------YOUR TICKET----------------------------------\n");
  for(i=0;i<num;i++)
  {
  printf("\nName : %s\t\tID : %d\t\tAmount : %d",name[i],id[i],price);

  }
  printf("\n--------------------------------------------------------------------------------\n");
  printf("\n\n\n\t\t\t\t\tPress 1 to book ticket :");
  scanf("%d",&j);
  if(j==1)
  {
  printf("\n--------------------------------------------------------------------------------\n");
  printf("Booking Confirmed...\n");
  printf("Seat Allocated : S%d\nThank you for booking ticket with JJM ",rand()%100+1);
  }
  else
    printf("\n--------------------------------------------------------------------------------\n\n Aborted");
  getch();
}
    /*   
    MENSAH JOSEPH JUNIOR 
    */

