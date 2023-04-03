#include <stdio.h>

int main(void)
{
	char buffer[98] = {0};

	printf("%s\n", typeof(buffer + 50));

	return 0;
}
