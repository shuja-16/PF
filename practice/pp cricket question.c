#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void func(int player[][7],int rows, int columns){
	
	int *q=&player[0];
	int i,j,k,*temp;
	printf("Details Are: \n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<columns;j++)
		{
			printf("%d\t",*(q+i*columns+j));
		}
		printf("\n");
	}
	
	int **p=(int**) malloc (4*sizeof(int*));
	for(i=0;i<4;i++)
	p[i]=(int*) malloc (7*sizeof(int));
	                                                   
	for(i=0;i<4;i++)
	p[i]=player[i];
	
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(p[i][2]>p[j][2])
			{
				temp=p[i];
				p[i]=p[j];
				p[j]=temp;
			}
		}
	}

	printf("After sorting, Details Are: \n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<columns;j++)
		{
			printf("%d\t",p[i][j]);
		}
		printf("\n");
	}
	
	printf("TOP PLAYERS:\n");

	for(i=0;i<3;i++)
	{

		if (p[i][3]>=1 || p[i][4]<=2)
		{
			printf("ID\t100's\t50's\n");
			printf("%d\t%d\t%d\n",p[i][0],p[i][3],p[i][4]);
		}
		
	}
	
	free(p);
	
}

void func2(int player[][7],int rows, int columns){
	int i,j,*temp,sumi,sumj;
	
int	**p=(int**) malloc (sizeof(int*)*4);
	for(i=0;i<4;i++)
	p[i]=(int*) malloc (sizeof(int)*7);
	
	for(i=0;i<4;i++)
	{
		p[i]=player[i];
	}
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			sumi=player[i][5]+player[i][6];
			sumj=player[j][5]+player[j][6];
			if(sumi>sumj){
				temp=p[i];
				p[i]=p[j];
				p[j]=temp;
			}	
		}
	}
	
	printf("printing array\n");
	for(i=0;i<4;i++){
		for(j=0;j<7;j++){
			printf("%d\t",p[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<4;i++){
		printf("ID %d\n",p[i][0]);
	}	
	
	
}


int main(){
	int player[4][7],i,j;
//	int (*q)[4],*p;
	
	
	for(i=0;i<4;i++){
		printf("Enter details of Player %d\n",i+1);
		printf("ID: ");
		scanf("%d",&player[i][0]);
		printf("Matches: ");
		scanf("%d",&player[i][1]);
		printf("Runs: ");
		scanf("%d",&player[i][2]);
		printf("100's: ");
		scanf("%d",&player[i][3]);
		printf("50's: ");
		scanf("%d",&player[i][4]);
		printf("4's: ");
		scanf("%d",&player[i][5]);
		printf("6's: ");
		scanf("%d",&player[i][6]);
	
	}
	
	
	func2(player,4,7);
	//func(player,4,7);
}
/*	
	for(i=0;i<4;i++)
	{
		q=player[i];
		p=(int*)q;
		for(j=0;j<7;j++)
		{
			printf("%d ",*p);
		}
		printf("\n");
	}
	*/
	
