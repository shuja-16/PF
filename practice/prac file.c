#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	FILE *fp;
	
    char *name=(char*) malloc (sizeof(char)*10);
	int id,marks,i,j;
	char str[50],ch;
	
/*	fp=fopen("prac.txt","w");
	if(fp==NULL)
	{
		printf("Error creating File...");
		exit(0);
	}
	else
	{
		printf("Name: ");
		scanf("%s",name);
		printf("id: ");
		scanf("%d",&id);
		printf("marks: ");
		scanf("%d",&marks);
		fprintf(fp,"%s\n%d\n%d",name,id,marks);
	}
	fclose(fp);*/
	
	fp=fopen("prac.txt","r");
		if(fp==NULL)
		{
			printf("Error opening File...");
			exit(0);
		}
		else if(ch=fgetc(fp)==EOF)
		{
			printf("nothing written...");
		}
		else
		{
			rewind(fp);
			//ch=fgetc(fp);
			while(ch!=EOF)
			{
				ch=fgetc(fp);
				printf("%c",ch);
				
				
				if(ch=='\n')
				i++;
				
			//	ch=fgetc(fp)	
			}
			printf("row count: %d",i);
		}
	fclose(fp);
}
