#include<stdio.h>
#include<string.h>

	struct stdnt{
		char id[10], name[20],gender;
		int quiz1,quiz2,mid,final,total;
	}s[20];

int main(){
	int n,i;
	FILE *fp;
fp=fopen("Q3.txt","w+");

	for(i=0;i<2;i++)
	{	
		printf("Details of student %d:\n",i+1);
		printf("Enter name of student: ");
	fflush(stdin);
		gets(s[i].name);
		printf("ID: ");
		gets(s[i].id);
		printf("Gender: ");
		scanf("%c",&s[i].gender);
		printf("Quiz 1: ");
		scanf("%d",&s[i].quiz1);
		printf("Quiz 2: ");
		scanf("%d",&s[i].quiz2);
		printf("Mids: ");
		scanf("%d",&s[i].mid);
		printf("Final: ");
		scanf("%d",&s[i].final);
		
		s[i].total=s[i].final+s[i].quiz1+s[i].quiz2+s[i].mid;
		fprintf(fp,"%s %s %c %d %d %d %d %d\n",s[i].name,s[i].id,s[i].gender,s[i].quiz1,s[i].quiz2,s[i].mid,s[i].final,s[i].total);
	}
	
fclose(fp);
	
	
}

