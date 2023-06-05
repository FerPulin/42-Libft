/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <fpulin-v@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 23:09:09 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/06/04 21:15:31 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c);

/*Create an array of string by splitting the strin 's' given into substrings
 using the character "c" as delimer. The fuction uses Malloc to allocate the
 requited memory space. The array must end with a NULL pointer. And the
 function will return the resulting array or a Null if the memory booking
 failes.
 */
static int	count_words(char const *s, char c)
{
	int	words;

	words = 0;
	while (*s)
	{
		if (*s != c)
		{
			words++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (words);
}

static int	get_word_len(char const *s, char c)
{
	int	len;

	len = 0;
	while (*s && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

char	**fill_arr(char const *s, char c, char **arr)
{
	int	i;
	int	j;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			arr[i] = (char *)malloc(sizeof(char) * (get_word_len(s, c) + 1));
			if (!arr[i])
				return (NULL);
			j = 0;
			while (*s && *s != c)
				arr[i][j++] = *s++;
			arr[i][j] = '\0';
			i++;
		}
		else
			s++;
	}
	arr[i] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		words;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	arr = (char **)malloc(sizeof(char *) * (words + 1));
	if (!arr)
		return (NULL);
	arr = fill_arr(s, c, arr);
	return (arr);
}

//int	main(void)
//{
//	char *s = "Hola como estás, mi nombre es Fer";
//	char **str = ft_split(s, ' ');
//
//	if (str == NULL)
//	{
//		printf("Error: no se pudo asignar memoria.\n");
//		return (1);
//	}
//	for (int i = 0; str[i] != NULL; i++)
//		printf("%s\n", str[i]);
//	for (int i = 0; str[i] != NULL; i++)
//		free(str[i]);
//	free(str);
//	return (0);
//}
