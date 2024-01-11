#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct emp{
	char name[20];
	char* add;
	int id, sal;
}*e;

main(){
	int i,n;
	
	printf("Enter number of emp: ");
	scanf("%d",&n);
	
	e=(struct emp*) malloc (n*sizeof(struct emp));
	for(i=0;i<n;i++)
	{
		
		printf("Enter name: ");
	fflush(stdin);
		scanf("%s",e[i].name);
		
	e[i].add=(char*) malloc (sizeof(char*));
		printf("Address: ");
		scanf("%s",e[i].add);
		
		printf("Enter id: ");
		scanf("%d",&e[i].id);
		
		printf("Enter salary: ");
		scanf("%d",&e[i].sal);
		
	}	
	
	for(i=0;i<n;i++)
	{
		printf("\n%s\t%s\t%d\t%d\n",e->name,e->add,e->id,e->sal);
		e++;
	}
	
	free(e);
}






