#include<stdio.h>
#include<string.h>
#include<math.h>

void func (char **, char *, char *);

int main(){
	char *str1, *str2;
int i;
	char *str[]={
					"We will teach you how to...",
					"Move a mountain",
					"Level a building",
					"Erase the past",
					"Make a million",
					"...all through C!"
				};

fflush(stdin);	
	printf("Enter text1: ");
	scanf("%s",&str1);
	
	printf("Enter text2: ");
	scanf("%s",&str2);
	
	func(str,str1,str2);
	
	for(i=0;i<6;i++)
	puts(str[i]);
	
}

void func (char **str, char *s1, char *s2){
	int i=0,j=0,k=0,m=0,c=0;
	char ans[10][50],*p;
	for(i=0;i<6;i++)
	{
		m=0;c=0;
		for(j=0;str[i][j]!='\0';)
		{
			if(str[i][c]==s1[k])
			{
			
				k++;
				c++;
				if(s1[k]=='\0')
				{
					for(k=0;s2[k]!='\0';k++,m++)
					{
						ans[i][m]=s2[k];
						j=c;k=0;
					}
				}
			}
			else
			{
				ans[i][m]=str[i][j];
				m++;j++;
				c=j;k=0;
			}
			
		}
		ans[i][m]='\0';
		j=k=m=0;		
	}
	for(i=0;i<6;i++)
	{
		p=(char*) malloc (strlen(ans[i])+1);
		strcpy(p,ans[i]);
		str[i]=p;
	}
	
}
