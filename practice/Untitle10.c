#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main (){
	int i, freq[26]={0};
	char *p;
	p=(char*)malloc(15*sizeof(char));
	
	printf("Enter String:\n");
	gets(p);
	printf("entered text: %s",p);	
	
	for(i=0;i<strlen(p);i++)
	{
		
		if(p[i]>='a' && p[i]<='z')
		freq[p[i]-'a']++;
		
		else if(p[i]>='A' && p[i]<='Z')
		freq[p[i]-'A']++;
	}
	int	max=freq[0];
		for(i=0;i<26;i++)
	{
		if (max<freq[i])
			max =freq[i];	
	}
	
	printf("Most occured character: %c",max+'A');
	
}
