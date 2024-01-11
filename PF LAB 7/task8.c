#include<stdio.h>
#include<stdlib.h>
main(){
int numToGuess;
int guess, too_high, too_low=0, totalguesses;

numToGuess = rand() % 10 + 1;

printf("Guess the number between 1 and 10:\n");
scanf("%d", &guess);
totalguesses++;
while (guess != numToGuess){
	if (guess<numToGuess){
	too_low+=1;
	printf("Too low, Guess the number again...\n");
	}
	else if (guess>numToGuess){
	too_high+=1;
	printf("Too High, Guess the number again...\n");
	}
	scanf("%d", &guess);
	totalguesses++;
	if(totalguesses==3)
	break;
	}
if(guess==numToGuess)
printf("Congratulations! You guessed the number.\n");
else
printf("Sorry, you are out of chances...\n");
printf("Number of high guesses is/are: %d\n",too_high);
printf("Number of low guesses is/are: %d\n",too_low);
printf("Number of guesses: %d", totalguesses);
}
