#include<stdio.h>
main(){
int	r1,r2,p1,p2,paisa,rupees;char response;
do{
printf("Enter RUPEES of first amount: ");
scanf("%d",&r1);
printf("Enter Paisas of first amount: ");
scanf("%d",&p1);
printf("Enter RUPEES of second amount: ");
scanf("%d",&r2);
printf("Enter Paisas of second amount: ");
scanf("%d",&p2);
paisa=p1+p2;
rupees=r1+r2;
if (paisa>=100){
	rupees++;
	paisa-=100;
	printf("total amount is:  %d.%d\n",rupees,paisa);
	}
else printf("total amount is:  %d.%d\n",rupees,paisa);

printf("\nDo you wish to continue? (y/n)");
fflush(stdin);
scanf("%c",&response);

}while(response=='y' || response=='Y');

}
