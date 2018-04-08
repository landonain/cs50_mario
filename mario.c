#include <stdio.h>
#include <cs50.h>

//mario builder using user input to create size of object
int main(void)
{
	while (true)
	{
	int i = get_int("Integer: ");

		if (i <= 23 && i > 0)
		{
			for (int j = 0;j <= i; j++)
			{
				printf("#\n");
			}
			//printf("%d\n", i);
			//printf("%d\n", j);
			//printf("  ##\n");
			break;
		}
	}
}
