#include<stdio.h>
main(){
	int matrixA[3][3],matrixB[3][3],matrixC[3][3];
	int matrixD[3][3],matrixE[3][3],response,i,j,choice;

printf("How many matrices You want to work with:\n1. 2 matrices\n2. 3 matrices\n3. 4 Matrices: ");
scanf("%d",&response);
 switch (response){
	// 2 matrices
	case 1:
	printf("Matrix A\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		printf("element of A%d%d: ",i+1,j+1);
		scanf("%d",&matrixA[i][j]);
		}
	}
	printf("Matrix B\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		printf("element of B%d%d: ",i+1,j+1);
		scanf("%d",&matrixB[i][j]);
		}
	}break;

	// 3 Matrices
	case 2:
	printf("Matrix A\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		printf("element of A%d%d: ",i+1,j+1);
		scanf("%d",&matrixA[i][j]);
		}
	}
	printf("Matrix B\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		printf("element of B%d%d: ",i+1,j+1);
		scanf("%d",&matrixB[i][j]);
		}
	}
	printf("Matrix C\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		printf("element of C%d%d: ",i+1,j+1);
		scanf("%d",&matrixC[i][j]);
		}
	}break;	

	// 4 matrices	
	case 3:
		printf("Matrix A\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		printf("element of A%d%d: ",i+1,j+1);
		scanf("%d",&matrixA[i][j]);
		}
	}
	printf("Matrix B\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		printf("element of B%d%d: ",i+1,j+1);
		scanf("%d",&matrixB[i][j]);
		}
	}
	printf("Matrix C\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		printf("element of C%d%d: ",i+1,j+1);
		scanf("%d",&matrixC[i][j]);
		}
	}
	printf("Matrix D\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		printf("element of D%d%d: ",i+1,j+1);
		scanf("%d",&matrixD[i][j]);
		}
	}
	break;	
	default: printf("Invalid Input.");			
}
	//OPERRATION TO CHOOSE
	printf("Which operation you wish to do?\n1.Addition\n2.Subtraction\n");
	fflush(stdin);
	scanf("%d",&choice);

	switch(choice){
	case 1:
	printf("Result Matrix:\n");
	//Following IF conditions are for the number of matrices the user have chosen.
		if(response==1){
		for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		matrixE[i][j]=matrixA[i][j]+matrixB[i][j];
		}
	}}
		else if(response==2){
		for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		matrixE[i][j]=matrixA[i][j]+matrixB[i][j]+matrixC[i][j];
		}
	}}
		else if(response==3){
		for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		matrixE[i][j]=matrixA[i][j]+matrixB[i][j]+matrixC[i][j]+matrixD[i][j];
		}
	}}
	
	break;
	case 2:
	printf("Result Matrix:\n");
	//Following IF conditions are for the number of matrices the user have chosen.
		if(response==1){
		for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		matrixE[i][j]=matrixA[i][j]-matrixB[i][j];
		}
	}}
		else if(response==2){
		for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		matrixE[i][j]=matrixA[i][j]-matrixB[i][j]-matrixC[i][j];
		}
	}}
		else if(response==3){
		for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		matrixE[i][j]=matrixA[i][j]-matrixB[i][j]-matrixC[i][j]-matrixD[i][j];
		}
	}}
	break;
	default: printf("Invalid Choice.\n");
}
//Output of resultant matrix.
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		printf("%d\t",matrixE[i][j]);
	}printf("\n");
	}
}


