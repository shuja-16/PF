#include<stdio.h>
#include<string.h>

struct student{
	int id;
	char name[200];
	float mid1,mid2,final,assignment,quiz,percent,gpa;
};
int a,n,i,m,b,choice,j,f,v,x,g;
float avg,avg1,avg2,sum=0,sum1=0,sum2=0,max,max1,max2,total=0,l;
char search[200],selection;
int accumulateEvaluations();
float getgpa(struct student data[], int);
void smartfind();
int main(){
	printf("NAME : RAAHIM HUSSAIN  ID:4289\n\n");
	accumulateEvaluations();
		
	}
	

	

int accumulateEvaluations(){
	int i,j,a; float gpa;
	printf("any sample id of the student after 21k-");
	scanf("%d",&a);
	int n=a-((a/1000)*1000);
	struct student data[n];	
	
    for(i=0;i<n;i++){
    	start:
    	puts("enter student id after 21k-:");
    	scanf("%d",&data[i].id);
    	for(m=0;m<i;m++){
        	if(data[i].id==data[m].id){
        	printf("repeated id \n");
        	goto start;
        }
        	else{
        		goto here;
			}
        }
        here:
    	puts("enter student name:");
    	fflush(stdin);
    	gets(data[i].name);
    	puts("enter mid1 marks:");
    	fflush(stdin);
    	scanf("%f",&data[i].mid1);
    	fflush(stdin);
    	puts("enter mid2 marks:");
    	fflush(stdin);
    	scanf("%f",&data[i].mid2);
   		puts("enter final marks:");
   		fflush(stdin);
    	scanf("%f",&data[i].final);
   		puts("enter assignment marks:");
   		fflush(stdin);
    	scanf("%f",&data[i].assignment);
   		puts("enter quiz marks:");
   		fflush(stdin);
    	scanf("%f",&data[i].quiz);
    	printf("\n\n");
    }

    
    	
    	
	
    
    printf("which options you want to select:\npress A for printing gpa of a student\npress B for printing gpa in tabular form\npress C for replacing the data of index by new data\npress D to find detail of a stuednt \npress E for stastics\npress Q for quitting:\n");
	fflush(stdin);
	scanf("%c",&selection);
	switch(selection){
		case 'A':
			
			printf("enter id of the student:");
			scanf("%d",&f);
			for(i=0;i<n;i++){
				if(data[i].id==f){
					puts("name :");
					puts(data[i].name);
					puts("id :");
					printf("%d\n",data[i].id);
					gpa=getgpa(data,i);
					puts("gpa :");
				printf("%f",data[i].gpa);					
					
				}
			}

			break;
			case 'B':
				printf("id\t\tname\t\tgpa");
				printf("\n");
				for(i=0;i<n;i++){
					printf("%d",data[i].id);
					printf("\t\t");
					printf("%s",data[i].name);
					printf("\t\t");
					gpa=getgpa(data,i);
					printf("%0.2f",data[i].gpa);
					
					
					printf("\n");
				}
				break;
	
			case 'C':
				printf("which index do you want to replace (starts with 0):");
				scanf("%d",&v);
				printf("enter id\n");
				fflush(stdin);
				scanf("%d",&data[v].id);
				printf("name :\n");
				fflush(stdin);
				gets(data[v].name);
				printf("gpa:\n");
				fflush(stdin);
				scanf("%f",&data[v].gpa);
				
				
				printf("after replacing \n\n:");
				printf("id:\n");
					printf("%d\n",data[v].id);
					printf("name :\n");
					puts(data[v].name);
					printf("gpa:\n");
					printf("%0.2f\n\n",data[v].gpa);
					
				
				break;
			case 'D':
			printf("press 1 for searching student by id\npress 2 for searching studnet by name\n: ");
	scanf("%d",&choice);
	switch(choice){
	case 1:
	puts("enter id after 21k- ");
	scanf("%d",&b);
	printf("\n\n");
	for(i=0;i<n;i++){
		if(data[i].id==b){
		printf("name:\n");
		puts(data[i].name);
		printf("id:\n");
		printf("22k-%d",data[i].id);
		puts("\ngpa:");
		printf("%0.2f",data[i].gpa);
		
	}
	
	}
	break;
	case 2:
	printf("enter name of the student:\n");
	fflush(stdin);
	gets(search);
	printf("%s",data[i].name);
	printf("\n\n");
	
		for(i=0;i<n;i++){
		if(strcmp(search,data[i].name)==0){
			printf("name:\n");
		puts(data[i].name);
		printf("id:\n");
		printf("22k-%d",data[i].id);
		puts("\ngpa:");
		printf("%0.2f",data[i].gpa);
	
	}
		
		
	}
}
	break;
			case 'E':
				printf("total student: ");
				printf("%d\n\n",n);
				for(i=0;i<n;i++){
					sum=sum+data[i].mid1;
			}
	
				printf("\n\naverage mid 1 marks : \n");
				avg=(sum)/n;
				printf("\n%0.2f",avg);	
		
			   	for(i=0;i<n;i++){
					sum1+=data[i].mid2;
				
				
				
			}
				
				printf("\n\naverage mid 2 marks : \n");
				avg1=sum1/n;
				printf("\n%0.2f",avg1);
				for(i=0;i<n;i++){
				sum2+=data[i].final;
				
				}
			
			    avg2=sum2/n;
				printf("\n\naverage final score:\n\n%0.2f",avg2);
				
				
				total=avg+avg1+avg2;
				
				printf("\n\ntotal average  marks:\n\n%0.2f\n\n",total);
				for(i=0;i<n;i++){
				 
			
				
				if(data[i].percent>max){
				max=data[i].percent;
				g=i;
					
				}
		
				
				
				}
				printf("\n\n%s HAS THE HIGHEST SCORE :",data[g].name);
				printf("\n\n%0.2f",max);
				
				printf("\n\nSTUDENTS WHO FAILS THE COURSE\n\n")
				;
					for(i=0;i<n;i++){
						if(data[i].gpa<1.0){
							puts(data[i].name);
							printf("\n");
						}
				}
				
				break;
	
		    case 'F':
		    	printf("quitting the program");
				break;
				
						


}
}

float getgpa(struct student data[],int i){
		for(i=0;i<n;i++){
    		
    		data[i].percent=(data[i].mid1+data[i].mid2+data[i].final+data[i].assignment+data[i].quiz);
			if (data[i].percent>= 86 && data[i].percent<=100)
					data[i].gpa=4.0;
			else if (data[i].percent>= 82 && data[i].percent<86)
					data[i].gpa=3.66;
			else if (data[i].percent>= 78 && data[i].percent<82)
					data[i].gpa=3.33;
			else if (data[i].percent>= 74 &&data[i].percent<78)
					data[i].gpa=3.0;
			else if (data[i].percent>= 70 && data[i].percent<74)
					data[i].gpa=2.66;
			else if (data[i].percent>= 66 && data[i].percent<70)
					data[i].gpa=2.33;
			else if (data[i].percent>= 62 && data[i].percent<66)
					data[i].gpa=2.0;
			else if (data[i].percent>= 58 && data[i].percent<62)
					data[i].gpa=1.66;	
			else if (data[i].percent>= 54 && data[i].percent<58)
					data[i].gpa=1.33;
			else if (data[i].percent>= 50 && data[i].percent<54)
					data[i].gpa=1.0;		
			else{
			
					data[i].gpa=0;
			}
		
		
	}
    return data[i].gpa;
	
}


