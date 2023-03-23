#include <stdio.h>
/**
 * main - start of program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned int a = 0, b = 1, c = 0, d = 1;
	int i = 2;

	printf("%u, %u", b, d);
	while (i < 98)
	{
		unsigned int ah = a >> 16, al = a & 0xFFFF;
		unsigned int bh = b >> 16, bl = b & 0xFFFF;
		unsigned int ch = c >> 16, cl = c & 0xFFFF;
		unsigned int dh = d >> 16, dl = d & 0xFFFF;
		unsigned int low = (al + bl + dl) & 0xFFFF;
		unsigned int high = (ah + bh + ch) + (al + bl + dl >> 16);

		c = b;
		d = (d + high) + (low < dl);
		a = b;
		b = c;
		c = d >> 16;
		d &= 0xFFFF;
		printf(", %u", (b << 16) + d);
		i++;
	}
	printf("\n");

	return (0);
}
