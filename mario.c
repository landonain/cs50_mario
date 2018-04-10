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
			//row iteration
			int k = i-2;
			for (int j = 0;j < i; j++)
			{
				//column iteration
				int r = 0;
				for (r <= i && r <= k; r++;)
				{
					printf(" ");
				}
				for (r <= i; r++;)
				{
					printf("#");

				}
				k--;
				printf("\n");
			}
			//printf("%d\n", i);
			//printf("%d\n", j);
			//printf("  ##\n");
			break;
		}
	}
}
