
#include <stdio.h>

main() {

	int humanYears, dogYears;

		printf("How old is your dog? \n");
		scanf_s("%d", &dogYears);

		humanYears = dogYears * 7;

		printf("In human years, your dog is: %d years old! \n", humanYears);

		return 0;
}