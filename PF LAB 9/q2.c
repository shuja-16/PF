#include<stdio.h>
#include<string.h>

int coursefreq();
int namefreq();

main(){
	char name[30],course[30];
	coursefreq(course);
	namefreq(name);
	
}
coursefreq(char course[]){
	int i,j,l,freq=0,maxfreq=0; char freqChar;
// GETTING INPUT , 'l' is length of string
	puts("Enter course name: ");
	gets(course);	
	l=strlen(course);
// COUNTING FREQUENCY
	for(i=0;i<l;i++){
		freq=1;
		for(j=i+1;j<l-1;j++){
			if(course[j]==course[i]){
			freq++;		
			}
//FILTERING OUT MOST FREQUENT ELEMENT			
			if(freq>maxfreq){
			maxfreq=freq;
			freqChar=course[i];
			}		
		}
	}
	printf("Most frequent character in course name is: %c with %d time\n",freqChar,maxfreq);
}

namefreq(char name[]){
	int l, i,j,freq=0,maxfreq=0; char freqChar;
// GETTING INPUT , 'l' is length of string
	puts("Enter your name: ");
	gets(name);	
	l=strlen(name);
// COUNTING FREQUENCY
	for(i=0;i<l;i++){
		freq=1;
		for(j=i+1;j<l-1;j++){
			if(name[j]==name[i]){
			freq++;	
			}
//FILTERING OUT MOST FREQUENT ELEMENT
			if(freq>maxfreq){
			maxfreq=freq;
			freqChar=name[i];
		  	}	
		}
    }
	printf("Most frequent character in name is: %c with %d times",freqChar,maxfreq);
}


