#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[])
{
	int i, sum;
	if (argc > 1)
	{
	
		for (i = 1; i < argc; i++)
		{
			printf("argc at index [%d] is %s\n",i, argv[i]);
			sum += atoi(argv[i]);
		}
		printf("Total = %d\n", sum);
	}
	return(0);
}
