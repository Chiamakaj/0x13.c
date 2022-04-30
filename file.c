#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, tmp;
	char pwd[] = "Look";

	i = 0;
	while (i <= 3)
	{
		tmp = i << 3;
		pwd[i] = 0xff & 0x46c6f48 >> tmp;
		i++;
	}
	printf("%s", pwd);
	return (0);
}
