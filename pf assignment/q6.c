#include<stdio.h>
int main(){
	int s, m,iteration, count,i,j; char response;
	printf("Enter 's' to communicate with SD or 'm' to communicate with moblie: ");
	scanf("%c",&response);
switch (response){
	case's':
		printf("number of iterations: ");
		scanf("%d",&iteration);
		printf("Pattern A\n");
		for(count=1;count<=3;count++){
		printf("Move straight\n");
		}
		for (j=1; j<=iteration;j++){
                printf("***\n");
                printf("***");
                for (i=1;i<=6;i++){
                    printf("Move straight\n");
                }
            }
            printf("***");
            break;
	case'm':
		printf("number of iterations : ");
		scanf("%d",&iteration);
		printf("Pattern B\n");
	 for (i=1;i<=3;i++){
                printf("Mobile is in city zone\n");
            }
            for (j=1; j<=iteration;j++){
                printf("**\n");
                printf("**");
                for (i=1;i<=6;i++){
                    printf("Mobile is in city zone\n");
                }
            }
            printf("**");
            break;
	}
	}
