/*    Divisors , Read an integer variable and print all of its divisors (including 1 and 		the number itself)   	*/
#include <stdio.h>
int main()
{
	int n, i;

	/*	The input will contain an integer A (0 < A < 1000<A<100)	*/

	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			printf("%d\n", i);
			
		}
	}

	return 0;
}