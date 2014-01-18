/* Name: Steven Lee
 * Program: converts text to Colossus Mode (convert input to allcaps output).
 * Also count the number of numerals in text.
 */
#include <stdio.h>
#include <ctype.h>

#define	NUMBERS 10	/* number of single digit numbers for array */

main()
{
	int c, i;
	int count[NUMBERS];
	/* initialize count values to 0 */
	for (i = 0; i < 10; ++i)
		count[i] = 0;

	while ((c = getchar()) != EOF)
	{
		// check digit occurrences and increment
		if (isdigit(c))
			count[c - '0']++;

		// output in uppercase
		if (c <= 'z' && c >= 'a')
			putchar(toupper(c));
		else
			putchar(c);
	}

	// output digit count
	for (i = 0; i < 10; ++i)
		printf("%d\n", count[i]);
}

