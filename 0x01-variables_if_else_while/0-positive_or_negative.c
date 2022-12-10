#include <stdid.h>
#include <time.h>

  /**
    * main - random number to int n everytime
    * it executes, and prints it
    *Return: 0
    */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is postive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
