#include <stdio.h>
#include <stdlib.h>
void top3s (int [][7],int);
void top3b (int [][7],int);
int main(){
	int player[4][7];
	printf("Filling the data\n");
	int i,j;
	// i have taken 4 players instead of 30 cuz faltu ka time nhi mery pass!!
	for(i=0;i<4;i++){
		printf("Enter id of player %d\n",i+1);
		scanf("%d",&player[i][0]);
		printf("Enter Matches of player %d\n",i+1);
		scanf("%d",&player[i][1]);
		printf("Enter Runs of player %d\n",i+1);
		scanf("%d",&player[i][2]);	
		printf("Enter 50s of player %d\n",i+1);
		scanf("%d",&player[i][3]);
		printf("Enter 100s of player %d\n",i+1);
		scanf("%d",&player[i][4]);
		printf("Enter 4s of player %d\n",i+1);
		scanf("%d",&player[i][5]);
		printf("Enter 6s of player %d\n",i+1);
		scanf("%d",&player[i][6]);									
	}
	printf("printing array\n");
	for(i=0;i<4;i++){
		for(j=0;j<7;j++){
			printf("%d\t",player[i][j]);
		}
		printf("\n");
	}
	printf("select top\n1.Scorer\n2.Boundery\n");
	int c;
	scanf("%d",&c);
	switch(c){
		case 1:
			 top3s(player,4);
			break;
	
		case 2:
			 top3b(player,4);
			break;
		}
		
}
void top3s (int player[][7],int rows){
	int **dp=(int **)malloc(4*sizeof(int*));
	int i,j;
	for(i=0;i<4;i++){
		dp[i]=(int*)malloc(7*sizeof(int));
	}
	int *temp;
	for(i=0;i<4;i++){
		dp[i]=player[i];
	}	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(dp[i][2]>dp[j][2]){
				temp=dp[i];
				dp[i]=dp[j];
				dp[j]=temp;
			}
		}
	}
		printf("printing array\n");
	for(i=0;i<4;i++){
		for(j=0;j<7;j++){
			printf("%d\t",dp[i][j]);
		}
		printf("\n");
	}
	int pc=0;
	for(i=0;i<4;i++){
		if(pc>3)
		break;
		if(dp[i][3]>=2&&dp[i][4]>=1){
			printf("%d id: %d\n",pc,dp[i][0]);
		}
		pc++;
	}
	
}
void top3b (int player[][7],int rows){
	int **dp=(int **)malloc(4*sizeof(int*));
	int i,j;
	for(i=0;i<4;i++){
		dp[i]=(int*)malloc(7*sizeof(int));
	}
	int *temp;
	int sumi,sumj;
	for(i=0;i<4;i++){
		dp[i]=player[i];
	}	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			sumi=dp[i][5]+dp[i][6];
			sumj=dp[j][5]+dp[j][6];
			if(sumi>sumj){
				temp=dp[i];
				dp[i]=dp[j];
				dp[j]=temp;
			}
		}
	}
		printf("printing array\n");
	for(i=0;i<4;i++){
		for(j=0;j<7;j++){
			printf("%d\t",dp[i][j]);
		}
		printf("\n");
	}
	int pc=0;
	for(i=0;i<3;i++){
		printf("ID %d\n",dp[i][0]);
	}	
}
