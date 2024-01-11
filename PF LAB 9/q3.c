#include<stdio.h>
#include<string.h>
main(){
int x; char str1[20],str2[20];
gets(str1);
gets(str2);
x=strcmp(str1,str2);
if(x>0)
printf("string 2 is greater than string 1");
if(x<0)
printf("string 1 is greater than string 2");
if(x==0)
printf("Both string are equal :)");
}