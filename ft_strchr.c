#include <stddef.h>

char	*ft_strchr(const char *cadena, int character_buscado)
{
	int i;

	i = 0;
	while (cadena[i] != '\0')
	{
		if (cadena[i] == (char) character_buscado)
			return ((char*) cadena);
		i++;
	}
	if (cadena[i] == '\0')
		return ((char*) cadena)
	return (NULL);
}
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	cadena []= "caricatura roja";

	printf("%c\n", *ft_strchr(cadena, 'j'));
	printf("%c\n", *strchr(cadena, 'a'));
	return (0);
}
