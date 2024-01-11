#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct tick{
	int t_no;
	char name[20];
}*p;

void insert( struct tick p[], int *);
void del(struct tick p[], int *);
void select(struct tick p[], int *);

int main(){
		int ch=1;
	int n=2,i,count=0;
	p=(struct tick *) malloc (sizeof(struct tick)*n);
	
while(1)
{
	printf("1.Insert\n2.Delete\n3.Select\n4.Display\n5.exit\n");

	printf("Enter your choice: ");
	scanf("%d",&ch);
	
	switch (ch)
	{
		case 1: insert(p,&count);break;
		case 2: del(p,&count);break;
		case 3: select(p,&count);break;
	//	case 4: display(p,&count);break;
		case 5: exit(0);break;
		default: printf("Invalid input.."); 

	}
}
}

void insert(struct tick p[],int *count)
{
	
	printf("ticket number: ");
	scanf("%d",&p[*count].t_no);
	printf("Name: ");
	scanf("%s",p[*count].name);
	*(count)++;
		int i;

	printf("array...\n");	
	for(i=0;i<*count;i++)
	{
		printf("t_no: %d\nname: %s\n",p[i].t_no,p[i].name);
	}
}
void del(struct tick p[],int *count)
{
	int num,i;
	scanf("%d",&num);
	for(i=0;i<*count;i++)
	{
		if (num==p[i].t_no)
			p[i]=p[i+1];
		*(count)--;
	}
}

void select(struct tick p[], int *count)
{
	
	printf("Count: %d\n",*count);
	char nm[20];int i;
	scanf("%s",&nm);
	
	for(i=0;i<*count;i++)
	{
		
		if (strcmp(nm,p[i].name)==0)
		{
			printf("T=%d",p[i].t_no);
			printf("N=%s",p->name);
		}
		else printf("not found\n");
	}
}



