#include<stdio.h>
int main()
{
int doc=7,i=1,doctor=0,patients,treated=0,untreated=0,days,tot_untreated=0;

printf("Enter number of days: ");
scanf("%d", &days);
while(i<=days){
	printf("enter number of patients today\n");
	scanf("%d",&patients);
	if ((i%3==0) && (tot_untreated>treated)){
	doc=doc+1;
	doctor=doctor+1;
	}
	if (patients>doc){
	treated = treated + doc;
	untreated =  patients - doc;
	tot_untreated = tot_untreated + untreated;
	}
	else {
	treated=treated+patients;
	}
	i++;
}
printf("untreated patients are %d\n",tot_untreated);
printf("treated patients are %d\n",treated);
printf("Number of doctors appointed are %d\n",doctor);
printf("Number of doctors are %d\n",doc);
}

