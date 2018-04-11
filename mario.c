#include <stdio.h>
#include <cs50.h>

//mario builder using user input to create size of object
int main(void)
{
	while (true)
	{
	int i = get_int("Integer: ");

		if (i <= 23 && i >= 0)
		{

			if (i == 0){
				break;
			}
			//row iteration
			int k = i-2; // this takes the spaces out of the shape with one index every loop
			int g = 1;  // This will start off with with the two blocks and index one per loop
			for (int j = 0;j < i; j++)
			{
				//column iteration
				for (int r = 0; r <= i && r <= k; r++)
				{
					printf(" ");
				}
				for (int r = 0; r <= g; r++)
				{
					printf("#");
					//printf("%d", r);
				}
				k--;
				g++;
				printf("\n");
			}
			//printf("%d\n", i);
			//printf("%d\n", j);
			//printf("  ##\n");
			break;
		}
	}
}
