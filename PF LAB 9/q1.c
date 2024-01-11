#include<stdio.h>
#include<string.h>

main(){
	char fname[20],lname[20];
//GETTING INPUT	
	gets(fname);
	gets(lname);
//CONCATENATING	
	strcat(fname,lname);
	puts(fname);
//FINAL OUTUT	
	strrev(fname);
	puts(fname);
	
}
