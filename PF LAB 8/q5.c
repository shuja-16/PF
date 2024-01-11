#include<stdio.h>
main(){
int stdntID[15],i=0,j,k,correct=0,wrong; char ans[10]; 
char corr[10]={'T','T','F','F','T','T','F','F','T','T'};
		//Getting user input
		while(i<15){
		printf("Student ID: ");
	fflush(stdin);
		scanf("%d",&stdntID[i]);
	// Getting student answers
		for(j=0;j<10;j++){
			printf("Enter answer to Q%d: ",j+1);
		fflush(stdin);
			scanf("%c",&ans[j]);
			if (ans[j]==corr[j])
		    correct++;
			else
		    continue;
		}
		//Printing of Results
		printf("\nStudent ID: %d obtained following result\n",stdntID[i]);
float	perc=(correct/10.0)*100;
	
		//Displaying Correct answers of the test
		printf("\nCorrect anSwers:");
		for(j=0;j<10;j++){
		printf("%c\t",corr[j]);}
		
		//Displying answers of the student
		printf("\n\nStudent answers:");
		for(j=0;j<10;j++){
		printf("%c\t",ans[j]);
		}
		//Printing of marks secured
		printf("\n\nMarks obtained: %d/10",correct);
	
		//Percentage obtained
		printf("\nPercentage obtained: %0.2f%%\n",perc);
	
		//Grading of the test
		if(perc>=90 && perc<=100)
		printf(	"Grade: A");
		else if (perc>=80 && perc<90)
		printf(	"Grade: B");
		else if (perc>=70 && perc<80)
		printf(	"Grade: C");
		else if (perc>=60 && perc<70)
		printf(	"Grade: D");
		else 
		printf(	"Grade: F");		
		correct=0;
	i++;printf("\n\n");
	}
	}



