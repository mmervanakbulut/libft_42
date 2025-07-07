#include "libft.h"
#include <stdio.h>
#include <fcntl.h>

// ft_strmapi için kullanılacak fonksiyon
char	to_upper(unsigned int i, char c)
{
	(void)i;
	return (char)ft_toupper(c);
}

// ft_striteri için kullanılacak fonksiyon
void	to_lower(unsigned int i, char *c)
{
	(void)i;
	*c = (char)ft_tolower(*c);
}

int	main(void)
{
	char	str1[] = "HeLLo WoRLd!";
	char	str2[] = "HeLLo WoRLd!";

	// ft_strmapi
	char *mapped = ft_strmapi(str1, to_upper);
	printf("ft_strmapi sonucu (yeni string): %s\n", mapped);
	free(mapped);

	// ft_striteri
	ft_striteri(str2, to_lower);
	printf("ft_striteri sonucu (orijinal değişti): %s\n", str2);

	return (0);
}