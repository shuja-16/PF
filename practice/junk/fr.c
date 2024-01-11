#include<stdio.h>
#include<string.h>

int main()
 {
printf("NAME : RAAHIM HUSSAIN  ID:4289\n\n");
 	
 	int k;
	char str[200],words[20][20],i=0,wi=0,tw=0,j,temp,vowel[200],c[2]="a",c2[2]="k",c3[2]="s",id[10],v[5]="way",tempo[200][200];
	int a,b=0,l,m; 
	
	printf("enter your id\n");
	gets(id);
	printf("Enter string to encrypt:\n");
	gets(str);
	
	// CREATING A 2D ARRAY OF CHRACTERS
	for(i=0;i<=(strlen(str));i++){
		if(str[i]==' '||str[i]=='\0'){
			words[wi][tw]='\0';
			wi++;
			tw=0;
		}
		else{
			words[wi][tw]=str[i];
			tw++;
		}
	}printf("\n Strings or words after split by space are :\n");
    for(i=0;i < wi;i++)
        printf(" %s\n",words[i]);
	printf("AFTER ENCRYPTION :\n");
	printf("%s ",id);
	
	// ARRANGIN IN A 2D ARRAY
	
	
	//THIS LOOP WILL CHECK EVERY WORD AND ARRANGE IN ORDER
	
	
	for(i=0;i<=wi;i++){
		
		//INITIALING HOW MANY TIMES THE LOOP WILL RUN IN ORDER TO RE ARRANGE THE CHRACTERS
		int place=3,place1=2;
		
		// FOR CHECKING EACH CHRACTER
		for(j=0;j<strlen(words[i]);j++){
			
		//REARRANING OF WORD STARTING WITH SCH	
	
		if(words[i][0]=='s' && words[i][1]=='c' && words[i][2]=='h'){
			//WHILE IS USED UNTIL THE ALL CHARACTERS ARE ARRANGED
    		    while(place){
    			   //REPLACING 2 WORD WITH FIRST ONE BY INCREMENTING a
    			for(a=0;a<(strlen(words[i]))-1;a++){
    			    words[i][a]=words[i][a+1];	
				}
				   //FOR ENDING WHILE LOOP WE ARE DECREMENTING THE PLACE
				   place--; 
				}
				//REPLACING LAST THREE CHRACTERS BY USER DEFINED ONES
				words[i][(strlen(words[i]))-3]=c3[0];
				words[i][strlen(words[i])-2]=c2[0];
				words[i][strlen(words[i])-1]=c[0];
				printf("%s ",strcat(words[i],"y"));
				break;
			    }
			    //REARRANING WORD STARTING WITH CONSONANTS			  	
				
					else if(words[i][j]>='a' && words[i][j]<='z' && words[i][j]!='a' && words[i][j]!='e' && words[i][j]!='i' && words[i][j]!='o' && words[i][j]!='u'){
    			while(place1){
    			   temp=words[i][(strlen(words[i]))-1];
    			for(a=(strlen(words[i]))-1;a>0;a--){
    			    words[i][a]=words[i][a-1];	
				}
				   words[i][0]=temp;
				   place1--; 
				}
				printf("%s ",strcat(words[i],"ay"));
				break;
			    }
			    //REARRANGING WORD WITH CAPITAL CONSONANTS
			    
			else if(words[i][j]>='A' && words[i][j]<='Z' && words[i][j]!='A' && words[i][j]!='E' && words[i][j]!='I' && words[i][j]!='O' && words[i][j]!='U')
				{
			    while(place){
    			   temp=words[i][(strlen(words[i]))-1];
    			for(a=(strlen(words[i]))-1;a>0;a--){
    			    words[i][a]=words[i][a-1];	
				}
				   words[i][0]=temp;
				   place--; 
				}
				//USING TOLOWER() AND TOUPPER() TO CHANGE THE CASES
				words[i][2]=tolower(words[i][2]);
				words[i][0]=toupper(words[i][0]);
				printf("%s ",strcat(words[i],"ay"));
				break;
			
			    }
			    //REARRANGING WORD WITH VOWELS
			    else if( words[i][j]=='a' || words[i][j]=='e' || words[i][j]=='i' || words[i][j]=='o' || words[i][j]=='u')
		    	{
		    	printf("%s ",strcat(words[i], "way"));
		    	break;
			} 
		    	 	
				 
		    	 
	
			    //REARRANGING WORD WITH CAPITALS VOWELS
		        else if(words[i][j]=='A' || words[i][j]=='E' || words[i][j]=='I' || words[i][j]=='O' || words[i][j]=='U')
		    	{
			     printf("%s ",strcat(words[i], "way"));
			    
			    break;
			}
			   
			
			
		}
	}
}
