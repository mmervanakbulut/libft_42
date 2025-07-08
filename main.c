#include "libft.h"
#include <stdio.h>
#include <fcntl.h>

void	upper(unsigned int i, char *c)
{
	(void)i; // Unused parameter

	int a = 0;
	while (c[a])
	{
		if (c[a] >= 'a' && c[a] <= 'z')
			c[a] -= 32; // Convert to uppercase
		a++;
	}
}
int	main(void)
{
	char buf[10] = "abc";
	ft_striteri(buf, upper);
	printf("Result: %s\n", buf);
}