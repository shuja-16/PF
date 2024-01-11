#include<stdio.h>
main(){
char response;
int d=1,voteA=0,voteB=0,A=0,B=0,T=0;int totalA=0,totalB=0,total,grandtotal;
float percA,percB;
do{
printf("\nEnter votes of Candidate A: ");
scanf("%d",&voteA);
printf("Enter votes of Candidate B: ");
scanf("%d",&voteB);
if(voteA>voteB)
	A+=1;
else if(voteB>voteA)
	B+=1;
else
	T+=1;		
total=voteA+voteB;
printf("Total votes candidate A got from District %d are %d\n",d,voteA);
printf("Total votes candidate B got from District %d are %d\n",d,voteB);
percA=(voteA*100.0)/total;
percB=(voteB*100.0)/total;
printf("Percentage of votes Candidate A got from district %d is: %0.2f%%\n",d,percA);
printf("Percentage of votes Candidate B got from district %d is: %0.2f%%\n",d,percB);d++;

totalA+=voteA;
totalB+=voteB;
grandtotal+=total;
	printf("Are there more districts to report?(y/n):  ");
fflush(stdin);
	scanf("%c",&response);	
}while (response=='y' || response=='Y');

percA=(totalA*100.0)/grandtotal;
percB=(totalB*100.0)/grandtotal;
printf("\nTotal votes Candidate A got: %d\n",totalA);
printf("Total votes Candidate B got: %d\n",totalB);
printf("total votes across all districts: %d\n",grandtotal);
printf("Percentage of votes Candidate A got from all district is: %0.2f%%\n",percA);
printf("Percentage of votes Candidate B got from all district is: %0.2f%%\n",percB);
printf("Districts won by A: %d\n",A);
printf("Districts won by B: %d\n",B);
printf("Districts tied between A and B: %d\n",T);
}
