#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

/**
 * The user has to guess a number from 0 to 5
 * 
 * Output whether or not the person is correct
 */

int main()
{
	/**
	 * pseudo random number generator
	 * this gets seeded
	 * outputs a result
	 * seed - from a clock
	 */

	int maxValue = 5;
	srand(time(NULL));
	int randomNumber = rand() % maxValue + 1; //this eliminates saying rand() % 5

	printf("Guess a number between 0 - %d\n", maxValue);

	int guess;
	scanf("%d", &guess);

	printf("You guessed %d\nThe correct number is %d\n", guess, randomNumber);

	if (guess == randomNumber)
	{
		printf("You Win!\nThank you for playing\n");
	} else
	{
		printf("You lost! Try again!\n");
		main();
	}
	return 0;
}
