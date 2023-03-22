#include "libft.h"

char	*ft_strchr(const char *str, int z)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char) z)
			return ((char*) str + i);
		i++;
	}
	if (z == '\0')
		return ((char*) str + i);
	return (NULL);
}
/*
int	main(void)
{
	const char	str []= "caricatura roja";

	printf("%s\n", ft_strchr(str, 'h'));
	printf("%s\n", strchr(str, 'h'));
	return (0);
}
*/
