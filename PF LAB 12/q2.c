#include <stdio.h>
#include<string.h>
#include <stdlib.h>
int main()
{
  FILE *fp1,*fp2; char str[25];
  int i,j,freq[26]={0},count=0,ch;


fp1=fopen("text.txt","w");
printf("enter text: ");
gets(str);
fprintf(fp1,"%s",str);
fclose(fp1);

if(fp1==NULL)
{
	printf("error.\n");exit(0);
}
else
{
	fgets (str, 20, fp1);
    printf("Text is: %s\n",str);
	fclose(fp1);
	
	
  	for(i = 0; str[i] != '\0'; i++)
  	{
  		if(str[i] >= 'a' && str[i] <= 'z')
  		{
  			freq[str[i] - 'a']++; 
		}
  		else if(str[i] >= 'A' && str[i] <= 'Z')
  		{
  			freq[str[i] - 'A']++;
		}
	}
  	fp2=fopen("q2ii.txt","w");
	  	
  	for(i = 0; i < 26; i++)
  	{
		if(freq[i] != 0)
		{
			fprintf(fp2,"Character '%c/%c' Occurs %d Times \n", i+'A',i+'a', freq[i]);
		}
	}
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]==' ')
		continue;
		else count++;
	}
	fprintf(fp2,"Total characters: %d",count);
	
}
}
		


