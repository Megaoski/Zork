#include<stdio.h>
enum  direction { n, s, e, w, q };


int main(){

	enum direction directions;
	directions = n;
	char imput;

	printf("Which direction you want to go (n/s/e/w/q)?");

	scanf("%c", &imput,1);


	if (imput == 'n')
		printf("You are now on the kitchen");
	else if (imput == 's')
		printf("You are now on the bedroom");
	else if (imput == 'e')
		printf ("You are now on the bathroom");
	else if (imput == 'w')
            printf("You are now on the pantry");
	else if (imput == 'q')
		printf ("You are living the house");
	else
		printf("You can't go that way");


	getchar();
	getchar();
	return 0;
}
