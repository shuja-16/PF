#include<stdio.h>
main(){
	int size, v=0,c=0,i; char alpha[size],vowels[10],consonants[10];	

	printf("Number of Elements you want to enter: ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		fflush(stdin);
		scanf("%c",&alpha[i]);
	}
	
	for(i=0;i<size;i++)
	{
		if(alpha[i] =='a' || alpha[i] =='e' || alpha[i] =='i' || alpha[i] =='o' || alpha[i] =='u'){		
		vowels[v]=alpha[i];
		v++;	}	
		else{
		consonants[c]=alpha[i];	
		c++;}			
	}
// FINAL OUTPUTS
	printf("Consonants are:\n");
	for(i=0;i<c;i++)
	{
		printf("%c\n",consonants[i]);
	}
	printf("Vowels are:\n");
	for(i=0;i<v;i++)
	{
		printf("%c\n",vowels[i]);
	}
	printf("Number of consonants are %d\n",c);
	printf("Number of vowels are %d\n",v);		
}
