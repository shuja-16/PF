#include<stdio.h>
main(){
	int i,intcount,num, c1=0,c2=0,c3=0,c4=0,c5=0;
	float p1,p2,p3,p4,p5;
	printf("Enter number of integers: ");
	scanf("%d",&intcount);
	
	for(i=1;i<=intcount;i++){
	printf("Enter integer: ");
	scanf("%d",&num);
		if ((num>0) && (num<200))
		c1+=1;
		if ((num>=200) && (num<400))
		c2+=1;
		if ((num>=400) && (num<600))
		c3+=1;
		if ((num>=600) && (num<800))
		c4+=1;
		if ((num>=800) && (num<=1000))
		c5+=1;
	}
	p1=(c1*100.0)/intcount;
	p2=(c2*100.0)/intcount;
	p3=(c3*100.0)/intcount;
	p4=(c4*100.0)/intcount;
	p5=(c5*100.0)/intcount;
	printf("Percentage of p1 is %0.2f%%\n",p1);
	printf("Percentage of p2 is %0.2f%%\n",p2);
	printf("Percentage of p3 is %0.2f%%\n",p3);	
	printf("Percentage of p4 is %0.2f%%\n",p4);
	printf("Percentage of p5 is %0.2f%%\n",p5);
}
