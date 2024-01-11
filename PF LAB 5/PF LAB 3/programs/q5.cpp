#include<stdio.h>

main(){
	float time,d1,d2,d3,d4,d5; float avg_speed;
	printf("Enter time the car travelled (shouldnt be negative and must be between  1 to 5 hours): ");
	scanf("%d",&time);
	printf("\nenter the distance(not negative and diffrent distance)\n\n");
	printf("enter first distance: ");
	scanf("%d",&d1);
	printf("enter second distance(if any else write 0): ");
	scanf("%d",&d2);
	printf("enter third distance(if any else write 0): ");
	scanf("%d",&d3);
	printf("enter fourth distance(if any else write 0): ");
	scanf("%d",&d4);
	printf("enter fifth distance(if any else write 0): ");
	scanf("%d",&d5);
	avg_speed = ((d1+d2+d3+d4+d5)/time);
	printf("\naverage speed: %0.2fkm/h",avg_speed);
}
