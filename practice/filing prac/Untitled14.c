#include <stdio.h>

int rec(char a[],int i){
	
if(a[i]=='\0')
{
	if(a[i]>='A' && a[i]<='Z')
	{
		return a[i];
	}
	else
	rec(a,i++);
}
	
}



int main(void){
	
	char a[]="shUja";
char b = rec(a,0);
   printf("First capital letter: %c",b);
}

