#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int secretNum, usrAnswer;
	srand(time(NULL));
	secretNum = rand() % 10 + 1;
	do {
		printf("Odgadnij liczbę (1 do 10): ");
		scanf("%d", &usrAnswer);
		if(secretNum < usrAnswer) puts("Za wysoko mierzysz");
		else if(secretNum > usrAnswer) puts("Za nisko");
	} while(secretNum != usrAnswer);
	
	puts("Brawo!");
	
	return 0;
}
