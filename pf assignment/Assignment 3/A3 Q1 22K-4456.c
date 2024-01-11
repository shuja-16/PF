#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int game(char id[]);

int main(){
printf("Syed Muhammad Shuja Ur Rahman\n22K-4456\n\n");

char id[4];
	
printf("Enter Last 4 Digits Of Your ID: ");
scanf("%s",&id);

printf("\n\n\t\t\t||=========Word Guess Game========||\n\n");

game(id);

	
}


int game(char id[]){

char array[5][6], word[6],ch,end[3];
int i,j,k,matched=0,score=0,flag=0;

restart:
		for (i=0;i<5;i++)
		{
			for (j=0,k=0;j<6;j++,k++)
			{
				if(i==4 && j<4)
					
					array[i][j]=id[k];
				
				else 
				
					array[i][j]=(rand()%26+'A');
				
				printf("\t%c\t",array[i][j]);
				Sleep(100);
			}
		printf("\n\n");
		}

again:
while(1)
{
	 	
	fflush(stdin);
	printf("\nEnter the word you want to search: ");
	gets(word);

	if (strcmpi(word,"END")==0)
		{
			printf("Game ended... Do you want to play again?(Y/N)");
			scanf("%c",&ch);
	
			if ( ch=='y' || ch== 'Y' )
				
				goto restart;
			
			else 
				
				exit(1);
		}
	else goto search;


}
	search:
		// SEARCHING FOR THE WORD ROW WISE... 
		for(i=0;i<5;i++)
		{
			for(j=0;j<6;j++)
			{
				if(word[matched]==array[i][j])
				{
				    matched++;
				
					if ( matched == strlen(word) )	
					{
					
					score++;
					printf("%s is present\nYour score is: %d\n",word,score);
					flag=1;
					break;
				    
					}
				    
				    else continue;
					   
			    }
			    else	matched=0;
						
			}
		}

	// SEARCHING FOR THE WORD COLUMN WISE...
		if ( flag!= 1)
		{
			for(j=0;j<6;j++)
			{
				for(i=0;i<5;i++)
				{
					if ( word[matched]== array[i][j])
					{
						matched ++ ;
					
						if( matched == strlen(word) )
						{
						
						score++;
						printf("%s is present\nYour score is: %d\n",word,score);
						flag=1;
						break;
						
						}
						
						else continue;
					}
					
					else
			    	matched=0;
				}
			}			
		
		}
		
		if(flag!=1)
		{
		score--;
	printf("%s is NOT present\nYour score is: %d\n",word,score);
		}
		
		flag=0;
		
		goto again;	

	
}
	
