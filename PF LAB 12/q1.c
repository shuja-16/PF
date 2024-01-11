#include<stdio.h>
#include<string.h>
#include<stdlib.h>

main(){
	FILE *fp1,*fp2,*fp3;
	char str[10],ch;
	
	fp1= fopen("text1.txt", "w");
	if(fp1==NULL)
	{
		printf("Error opening file\n");
		exit(0);
	}
	printf("Enter Data to store in File 1: ");
	fflush(stdin);
	gets(str);
	fputs(str, fp1);
	
	fp2= fopen("text2.txt", "w");
	if(fp2==NULL)
	{
		printf("Error opening file\n");
		exit(0);
	}
	printf("Enter Data to store in File 2: ");
	gets(str);
	fputs(str, fp2);
	
	fp3=fopen("text3.txt","w");
	if(fp3==NULL)
	{
		printf("Error opening file\n");
		exit(0);
	}
	
	else{
	
		while((ch=fgetc(fp1))!=EOF)
		{
			fputc(ch, fp3);
		}
		while((ch=fgetc(fp2))!=EOF)
		{
			fputc(ch,fp3);
		}
		rewind(fp3);
		fclose(fp1);
		fclose(fp2);
		fclose(fp3);
		
		printf("text1.txt & text2.txt have been merged successfully\n");
	
		}
	
}
