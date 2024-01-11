#include<stdio.h>
#include<string.h>


void wordcount(char *Text,int *size);

main()
{
char str[30];

char *t=&str;

puts("Enter any sentence: ");
gets(str);

int s= strlen(str);
int *size=&s;
wordcount(t,size);

}

void wordcount(char *Text,int *size){
int i,word=0;

for(i=0;i<*size;i++)
{
	if(Text[i]==' ' || Text[i]=='\t' )
	word++;
	
}
word++;
	printf("words: %d",word);
}
