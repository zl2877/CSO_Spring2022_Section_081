/*
 * fibnum.c
 *
 *  Created on: Apr 25, 2022
 *      Author: judyli
 */


#include <stdio.h>
int main() {
	int count, first_t = 0, second_t = 1, next, i;

	//Ask user to input number of terms
	printf("Enter the number of terms:\n");
	scanf("%d", &count);

	printf("Fibonacci series:\n", count);
	for (i = 0; i < count; i++) {
		if (i <= 1)
			next = i;
		else {
			next = first_t + second_t;
			first_t = second_t;
			second_t = next;
		}
		printf("%d\n", next);
	}

	return 0;
}
