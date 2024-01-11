#include<stdio.h>
main(){
int i,j,M,N,a=0, A[M], B[N],P=M+N, C[P];

	//Getting user input for Array A
	printf("Enter size of A: ");
fflush(stdin);
	scanf("%d",&M);

	printf("Before sorting elements of A:\n");
fflush(stdin);
	for(i=0;i<M;i++){
		scanf("%d",&A[i]);
	}
	//Getting user input for Array B
	printf("Enter size of B:");
	scanf("%d",&N);

	printf("Before sorting elements of B:\n");
	for(i=0;i<N;i++){
		scanf("%d",&B[i]);
	}
	//Sorting of A in ascending order
	// a is temporary variable
	for(i=0;i<M;i++){
		for(j=i+1;j<M;j++){
			if(A[i]>A[j])//1 2
			a=A[i]; A[i]=A[j]; A[j]=a; }
	}
	// Sorting of B in asecnding order
	// a is temporary variable
	for(i=0;i<N;i++){
		for(j=i+1;j<N;j++){
			if(B[i]>=B[j])
			a=B[i]; B[i]=B[j]; B[j]=a; }
	}
	//Output after sorting Array A and B
	printf("Elements of A after sorting:\n");
	for(i=0;i<M;i++){
		printf("%2d\t",A[i]);
	}	
	printf("\n\nElements of B after sorting:\n");
	for(i=0;i<N;i++){
		printf("%2d\t",B[i]);
	}
	
	//Merging Array A and B

	for(i=0;i<M;i++)
		C[i]=A[i];
	for(i=0,j=M;j<P && i<N;i++,j++)
		C[j]=B[i];
	
	printf("\nC after merging A and B:\n");
	for(i=0;i<P;i++)
		printf("%2d\t",C[i]);
	//Sorting C in ascending order
	for(i=0;i<P;i++){
		for(j=i+1;j<P;j++){
		if(C[i]>C[j]){
		a=C[i] ; C[i]=C[j]; C[j]=a;	}
		}
	}
	//FINAL OUTPUT
	printf("\nElements of After sorting in ascending order:\n");
		for(i=0;i<P;i++)
		printf("%2d\t",C[i]);
}
