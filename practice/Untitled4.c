#include<stdio.h>
main(){
	int i,j,stdID[15],result[15],correct,wrong;
	char ans[10][15];
	for(i=0;i<15;i++){
		printf("Enter student id:");
		scanf("%d",&stdID[i]);
		for(j=0;j<10;j++){
			printf("Enter answer to q%d:",j+1);
			fflush(stdin);
			scanf("%c",&ans[i][j]);
			if(ans[i][j]=='T'||ans[i][j]=='t'){
			correct=correct+1;
		}
			else{
			wrong=wrong+1;
		}
		}
		result[i]=correct*100/10;
		printf("Student id:%d\n",stdID[i]);
		for(j=0;j<9;j++){
		printf("%c",ans[i][j]);
	}	
	    printf("\nTest score: %d/10\n",correct);
	    if(result[i]>=90 && result[i]<=100){
	    	printf("Grade is A\n");
		}
	    else if(result[i]>=80 && result[i]<90){
	    	printf("Grade is B\n");
		}
		else if(result[i]>=70 && result[i]<80){
	    	printf("Grade is C\n");
		}
		else if(result[i]>=60 && result[i]<70){
	    	printf("Grade is D\n");
		}
		else
		    printf("Grade is F\n");
	}
}
