#include "libft.h"

char	ft_sub_strmapi(unsigned int n, char c)
{
	c = c + n;
	return (c);
}

char	zr2(unsigned int n, char c)
{
	c = c - n;
	return (c);
}

int	main(void)
{
	char str[] = "-34567abc";

	printf("the result of the ft_atoi function is: %d\n", ft_atoi(str));
	printf("The result of the atoi function is: %d", atoi(str));

	char buffer[50];
	char buffer2[50];

	ft_bzero (buffer, 6);
	printf("The ft_bzero result is: %s\n", buffer);
	printf("The bzero result is: %s\n", bzero(buffer2, 6));

	printf("The result of ft_calloc is: %s\n", ft_calloc (4, 10));
	printf("The result of calloc is: %s", calloc (4, 10));

	printf("; is alpha o numeric:? %d\n", ft_isalnum(';'));
	printf("A is alpha o numeric:? %d\n", ft_isalnum('A'));
	printf("; is alpha o numeric:? %d\n", isalnum(';'));
	printf("A is alpha o numeric:? %d\n", isalnum('A'));

	int a1 = 'l';
    int a2 = 'M';
    int a3 = '$';

    printf("%c is alpha:? %d\n", a1, ft_isalpha(a1));
    printf("%c is alpha:? %d\n", a2, ft_isalpha(a2));
    printf("%c is alpha:? %d\n", a3, ft_isalpha(a3));
    printf("%c is alpha:? %d\n", a1, isalpha(a1));
    printf("%c is alpha:? %d\n", a2, isalpha(a2));
    printf("%c is alpha:? %d\n", a3, isalpha(a3));

	printf("180 es un ASCII:? %d\n", ft_isascii(180));
	printf("180 es un ASCII:? %d\n", ft_isascii(180));
	printf("127 es un ASCII:? %d\n", isascii(127));
	printf("127 es un ASCII:? %d\n", ft_isascii(127));

	printf("4 is a decimal digit:? %d\n", ft_isdigit('4'));
	printf("A is a decimal digit:? %d\n", ft_isdigit('A'));
	printf("4 is a decimal digit:? %d\n", isdigit('4'));
	printf("A is a decimal digit:? %d\n", isdigit('A'));

	printf("127 is printable:? %d",ft_isprint(127));
	printf("127 is printable:? %d\n",isprint(127));
	printf("38 is printable:? %d",ft_isprint(38));
	printf("38 is printable:? %d\n",isprint(38));

	printf("The resul of ft_itoa for 0 is: %s\n", ft_itoa(0));
    printf("The result of ft_itoa for 123456 is: %s\n", ft_itoa(123456));
    printf("The result of ft_itoa for -123456 is: %s\n", ft_itoa(-123456));
    printf("The result of ft_itoa for -2147483648 is: %s\n",
	 ft_itoa(-2147483648));

	char strx[] = "Hola caracola";
	char *ptr1;
	char *ptr2;
	ptr1 = ft_memchr(strx, 'c', 10);
	ptr2 = memchr(strx, 'c', 10);
	printf("The ft_memchr found the character at post (null if -): %ld.\n",
		ptr1 - strx);
	printf("The memchr found the character at posit (null if-): %ld.\n",
		ptr2 - strx);

	char s1[] = "Macanudo";
	char s2[] = "Macanudo";
	int result1 = ft_memcmp(s1, s2, strlen(s1) + 1);
	int result2 = memcmp(s1, s2, strlen(s1) + 1);

	printf("The ft_memcmp function result comparing s1 and s2 is: %d\n", result1);
    printf("The memcmp function result comparing s1 and s2 is %d\n", result2);

	char	dst [] = "amigo";
	char	src [] = "mariano";
	char	dst1 [] = "amigo";
	char	src1 [] = "mariano";

	ft_memcpy(dst, src, 8);
	printf("The ft_memcpy function result is: %s\n", dst);
	memcpy(dst1, src1, 8);
	printf("The memcpy function result is:%s", dst1);

	char	dst [] = "mariano";
	char	src [] = "amigo";
	char	dst1 [] = "mariano";
	char	src1 [] = "amigo";

	ft_memmove(dst, src, 3);
	printf("The ft_memmove result is: %s\n", dst);
	memmove(dst1, src1, 3);
	printf("The memmove result is: %s\n", dst1);

	char	dst [] = "mariano";
	char	src [] = "amigo";
	char	dst1 [] = "mariano";
	char	src1 [] = "amigo";

	ft_memmove(dst, src, 3);
	printf("The ft_memmove result is: %s\n", dst);
	memmove(dst1, src1, 3);
	printf("The memmove result is: %s\n", dst1);

	char buffer[50];
	char buffer2[50];

	printf("%s\n", memset(buffer, '8', 6));
	printf("%s\n", ft_memset(buffer2, '8', 6));

	char str[] = "Hola Caracola";
	int fd = open("archivo_salida_test.txt", O_WRONLY | O_CREAT, 0644);
	ft_putchar_fd(str[0], fd);
	ft_putchar_fd(str[1], fd);
	close (fd);

	char	str[] = "Hola Caracola";
	int	fd = open ("Archivo_salida_string_end_line_test.txt",
		O_WRONLY | O_CREAT, 0644);
	ft_putendl_fd(str, fd);
	close (fd);

	int nb = 2735;
	int	fd = open ("Archivo_salida_ft_putnbr.txt", O_WRONLY | O_CREAT, 0644);

	ft_putnbr_fd(nb, fd);

	char	str[] = "Hola Caracola";
	int	fd = open ("Archivo_salida_string_test.txt", O_WRONLY | O_CREAT, 0644);
	ft_putstr_fd(str, fd);
	close (fd);

	const char	str []= "caricatura roja";
	char	*result1 = ft_strchr(str, 'r');
	char	*result2 = strchr(str, 'r');

	printf("The result of ft_strchr is a pointer to: %ld\n", result1 - str);
	printf("The result of strchr is a pointer to: %ld\n", result2 - str);

	char	str1 [] = "El Perro de San Roque";
	char	str2 [] = "El Perro de San Roque";

	printf("The result of the ft_strdup is: %s\n", ft_strdup(str1));
	printf("The result of strdup is: %s\n", strdup(str2));

	char	str [] = "abcdefghijklmn";
	char	*p;
	p = ft_strdup(str);
	ft_striteri(p, ft_sub_strmapi);
	printf("The result of ft_striteri for abcdefghijklmn is: %s\n", p);
	free(p);

	char	str1 [] = "Me duele la cara ";
	char	str2 [] = "de ser tan guapo";

	printf("The result of the ft_strjoin is: %s", ft_strjoin(str1, str2));
	return(0);

	char dst [] = "pqrstuvwxyz";
	char scr [] = "abcd";
	char dst1 [] = "pqrstuvwxyz";
	char scr1 [] = "abcd";

	printf("The result of the ft_strlcat is: %lu\n", ft_strlcat(dst, scr, 20));
	printf("The concatenated string with ft_strlcat is: %s\n", dst);
	printf("The source string is: %s\n", scr);
	printf("The destination string string is: %s\n", dst);
	printf("The result of the srtcat is: %lu\n", strlcat(dst1 , scr1, 20));
	printf("The concatenated string with strlcat is: %s\n", dst1);
	printf("The source string is %s\n", scr1);
	printf("The destination string string is: %s\n", dst1);

	char s1[25];
	printf("The strlcpy result is: %lu",strlcpy(s1, "Caracola", 4));
	printf("\n%s\n", s1);
	char s2[25];
	printf("The ft_strlcpy result is: %lu",ft_strlcpy(s2, "Caracola", 4));
	printf("\n%s\n", s2);

	printf("ft_strlen for Oligarquico is: %lu\n",ft_strlen("Oligarquico"));
	printf("strlen for Oligarquico is": %lu\n",strlen("Oligarquico"));

	char	str [] = "abcdefghijklmn";
	printf("The result of ft_strmapi with ft_sub_strmapi for
	abcdefghijklmn is: %s\n", ft_strmapi(str, ft_sub_strmapi));

	char	str [] = "abcdefghijklmn";
	printf("The result of ft_strmapi with zr2 for abcdefghijklmn is: %s\n",
	 ft_strmapi(str, zr2));

	printf("The result of strncmp is: %d\n", strncmp( "Hola",
	 "Holacfgyny", 4));
	printf("The result of ft_strncmp is: %d\n", ft_strncmp( "Hola",
	 "Holacfgyny", 4));

	const char *str = "Me duele la cara de ser tan guapo";
	const char *to_find = "du";
	size_t len = 20;
	char *pos1 = ft_strnstr(str, to_find, len);
	char *pos2 = ft_strnstr(str, to_find, len);

	if (pos1 != 0 || pos2 !=0)
	{
        printf("ft_strnstr: The substring starts in %ld\n", pos1 - str);
		printf("strnstr: The substring starts in %ld\n", pos2 - str);
    }
    else
    {
        printf("Could not find '%s' in '%s'\n", to_find, str);
    }

	const char	str []= "caricatura roja";
	char	*result1 = ft_strrchr(str, '\0');
	char	*result2 = strrchr(str, '\0');

	printf("The result of ft_strrchr is a pointer to: %ld\n", result1 - str);
	printf("The result of strrchr is a pointer to: %ld\n", result2 - str);

	char *s1 = "%&Holaa&&&CaralolaH%&";
    char *set = "%&";
    char *str = ft_strtrim(s1, set);

    printf("The result of the ft_strtrim is: %s\n", str);

	char	str [] = "Me duele la cara de ser tan guapo";
	int	start_pos_sub = 3;
	int	len_sub = 5;
	printf("The result of ft_substr is: %s", ft_substr(str, start_pos_sub,
		len_sub));

	int c = 'b';
	int b = 'b';
	printf("%c\n", tolower(c));
	printf("%c", ft_tolower(b));

	int c = 'A';
	int b = 'A';
	printf("The function toupper result is: %c\n", toupper(c));
	printf("The function ft_toupper result is: %c", ft_toupper(b));
}

