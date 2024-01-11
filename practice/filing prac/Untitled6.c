#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct std{
	char name [20], result[8];
	int roll;
	int quiz,mids,final,total;
}*s;

void create();
void display();
void append();
void deleteRec();

int main(){
	int ch;


	printf("1.Create\n2.Display\n3.Append\n4.Delete\n");
	printf("Enter your choice: ");
	scanf("%d",&ch);
	
	switch (ch)
	{
		case 1: create();break;
		case 2: display();break; 
		case 3: append();break;
		case 4: deleteRec();break;	
		case 5: exit (0);break;
	}

return 0;
}

void create()
{
		int i,n;
		FILE *fp;
	printf("Number of student: ");
	scanf("%d",&n);
	
	s =(struct std*) malloc (n*sizeof(struct std));
	
	fp=fopen("stdnt.txt","w");

	for(i=0;i<n;i++)
	{
		printf("Enter name: ");
		scanf("%s",s[i].name);
		
		printf("Enter Roll number: ");
		scanf("%d",&s[i].roll);
		
		printf("Enter quiz Marks: ");
		scanf("%d",&s[i].quiz);
		
		printf("Enter Mid term Marks: ");
		scanf("%d",&s[i].mids);
		
		printf("Enetr final marks: ");
		scanf("%d",&s[i].final);
		
		s[i].total=s[i].quiz+s[i].mids+s[i].final;
		printf("total: %d\n",s[i].total);	
		
		if(s[i].total>50)
		strcpy	(s[i].result,"pass");
		else
		strcpy (s[i].result,"fail");

		fwrite(&s[i],sizeof(struct std),1,fp);
	}
	fclose(fp);
	free(s);
}

void display()
{
	int i,n;
	FILE *fp;
	struct std s1;
	fp=fopen("stdnt.txt","r");
	while((fread(&s1,sizeof(struct std),1,fp)))
	{
		printf("%s\t",s1.name);
		printf("%d\t",s1.roll);
		printf("%d\t",s1.quiz);
		printf("%d\t",s1.mids);
		printf("Finals: %d\tTotal: %d\tResult: %s\n\n",s1.final,s1.total,s1.result);
		
	}
	
	
}

void append()
{
		int i,n;
		FILE *fp;
	printf("Number of student: ");
	scanf("%d",&n);
	
	s =(struct std*) malloc (n*sizeof(struct std));
	
	fp=fopen("stdnt.txt","a");

	for(i=0;i<n;i++)
	{
		printf("Enter name: ");
		scanf("%s",s[i].name);
		
		printf("Enter Roll number: ");
		scanf("%d",&s[i].roll);
		
		printf("Enter quiz Marks: ");
		scanf("%d",&s[i].quiz);
		
		printf("Enter Mid term Marks: ");
		scanf("%d",&s[i].mids);
		
		printf("Enetr final marks: ");
		scanf("%d",&s[i].final);
		
		s[i].total=s[i].quiz+s[i].mids+s[i].final;
		printf("total: %d\n",s[i].total);	
		
		if(s[i].total>50)
		strcpy	(s[i].result,"pass");
		else
		strcpy (s[i].result,"fail");

		fwrite(&s[i],sizeof(struct std),1,fp);
	}
	fclose(fp);
}



void deleteRec()
{
	struct std s1;
	int roll_no,found=0;
	
	
	printf("Enter Roll no. to delete the record: ");
	scanf("%d",&roll_no);
	
	FILE *fp=fopen("stdnt.txt","r");
	FILE *ufp=fopen("temp.txt","w");
	
	while(fread(&s1,sizeof(struct std),1,fp))
	{
		if (roll_no== s1.roll) 
			found=1;
		else
			fwrite(&s1,sizeof(struct std),1,ufp);
	}
	fclose(fp);fclose(ufp);
	if(found==1)
	{
		fp=fopen("stdnt.txt","w");
		ufp=fopen("temp.txt","r");	
		while(fread(&s1,sizeof(struct std),1,ufp))
		{
			fwrite(&s1,sizeof(struct std),1,fp);
		}	
	}
	fclose(fp);fclose(ufp);
}

