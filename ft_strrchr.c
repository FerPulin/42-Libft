char	*ft_strrchr(const char *cadena, int character_buscado)
{
	int i;

	i = (ft_strlen(cadena)) - 1
	while (i <= 0)
	{
		if (cadena[i] == character_buscado)
		{
			return((char*) cadena);
			break;
		}
		i--;
	}
	if (i == 0 && cadena[i] != character_buscado)
		return (NULL);
}
#include <unistd.h>
#include <stdio.h>
include <string.h>

int	main(void)

