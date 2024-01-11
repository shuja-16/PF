#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char p[20],q[20];int i,j;
	printf("Enter string1: ");
	gets(p);
	printf("Enter string2: ");
	gets(q);
	
	int x=strlen(p);
	int y=strlen(q);
	
	for(i=0;i<y;i++)
	{
		p[x+i]=q[i];
	}
	
	printf("%s",p);
}
