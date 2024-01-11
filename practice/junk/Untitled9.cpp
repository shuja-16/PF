#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int verticalCheck(char arr[5][6], char search[], int len, int score);
int horizontalCheck(char arr[5][6], char search[], int len, int score);
void numGenerate(char arr[5][6], int max, int min);
void print(char arr[5][6]);
int main()
{
	printf("Muhammad Ali Noorani\n22K-4343\nBSCS-F\n");
	char arr[5][6];
	char search[6];
	int len,score=0;
	int a=1,b=1;
	while(a=1)
	{
		fflush(stdin);
		if(b==1){
			numGenerate(arr,90,65);
			print(arr);
		}
		if(b!=1){
			print(arr);
		}
		b=0;
		printf("Enter the word you want to search: ");
		gets(search);
		for(len=0;search[len] != '\0';len++){
		
		}
		score = horizontalCheck(arr,search,len,score);
		printf("\nScore is: %d", score);
		printf("\nDo you want to play again\nPress 1 for yes\nPress 0 for no: ");
		scanf("%d", &a);
		if(a==0){
			return 0;	
		}
		printf("Do you want to shuffle the array again\nPress 1 for yes\nPress 0 for no: ");
		scanf("%d", &b);
	}
}
int verticalCheck(char arr[5][6], char search[], int len, int score)
{
	int i,j,k,l,count,b;
	for(i=0;i<5;i++){
		b = 1;
		for( j=0 ; j < 6 && b == 1 ; j++ ){
			count = 0;
			if(arr[i][j] == search[0]){
				for(l=i,k=0;l<5;l++,k++){
					if(arr[l][j] == search[k]){
						count++;
					}
					if(len==count){
						printf("correct word");
						score+=1;
						return score;
					}
					if(arr[l][j] != search[k]){
						b = 0;
						count = 0;
						break;
					}
				}
			}
		}
	}
	printf("wrong word");
	return score;
}
void numGenerate(char arr[5][6], int max, int min)
{
	int i,j;
	srand(time(0));
	for(i=0;i<5;i++){
		for(j=0;j<6;j++){
			if(i==4){
				if(j==0){
					arr[i][j] = 52;
				}
				else if(j==1){
					arr[i][j] = 51;
				}
				else if(j==2){
					arr[i][j] = 53;
				}
				else if(j==3){
					arr[i][j] = 55;
				}
				else
					arr[i][j] = ((rand() % (max-min+1)) + min);
			}
			else{
				arr[i][j] = ((rand() % (max-min+1)) + min);
			}
		}
	}
}
void print(char arr[5][6])
{
	int i,j;
    for(i=0;i<5;i++)
	{
		for(j=0;j<6;j++)
		{
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}
}
int horizontalCheck(char arr[5][6], char search[], int len, int score)
{
	int i,j,k=0,l,m,count = 0;
	for(i=0;i<5;i++){
		for(j=0;j<6;j++){
			count=0;
			if(arr[i][j] == search[0]){
				for(l=j,k=0;l<6;l++,k++){
					if(arr[i][l] == search[k]){
						count++;
					}
					if(count==len){
						printf("Correct word");
						score+=1;
						return score;
					}
					if(arr[i][l] != search[k]){
						count=0;
						break;
					}
				}
			}
		}
	}
	return verticalCheck(arr,search,len,score);
}
