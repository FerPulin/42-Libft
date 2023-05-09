/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <fpulin-v@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 23:09:09 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/05/09 12:34:29 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 /*
 Create an array of string by splitting the strin 's' given into substrings
 using the character "c" as delimer. The fuction uses Malloc to allocate the
 requited memory space. The array must end with a NULL pointer. And the
 function will return the resulting array or a Null if the memory booking
 failes.
 */


char **split(const char *str, const char *delim)
{
    char **tokens = NULL;
    int count = 0;

    // Copiar la cadena a tokenizar a una variable local para no modificarla
    char *str_copy = strdup(str);

    // Inicializar los punteros a la primera posición de la cadena a tokenizar y al delimitador
    char *token = str_copy;
    char *delim_pos = strchr(str_copy, *delim);

    // Contar la cantidad de tokens
    while (delim_pos)
	{
        count++;
        token = delim_pos + 1;
        delim_pos = strchr(token, *delim);
    }

    // Asignar memoria para el arreglo de tokens
    tokens = malloc((count + 1) * sizeof(char *));

    // Reinicializar los punteros a la primera posición de la cadena a tokenizar y al delimitador
    token = str_copy;
    delim_pos = strchr(str_copy, *delim);
    count = 0;

    // Rellenar el arreglo de tokens
    while (delim_pos)
	{
        *delim_pos = '\0';
        tokens[count++] = strdup(token);
        token = delim_pos + 1;
        delim_pos = strchr(token, *delim);
    }
    tokens[count++] = strdup(token);
    tokens[count] = NULL;

    // Liberar la memoria asignada para la cadena temporal
    free(str_copy);

    return (tokens);
}
int main(void)
{
    char *str = "Hola mundo, esto es una prueba";
    char **tokens = split(str, ' ');

    int i = 0;
    while (tokens[i] != NULL) {
        printf("Token %d: %s\n", i, tokens[i]);
        free(tokens[i]);
        i++;
    }
    free(tokens);

    return (0);
}
