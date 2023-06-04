#include "libft.h"

int	main(void)
{
	char str[] = "-123456abcd";

	printf("The result of ft_atoi is: %d\n", ft_atoi(str));
	return(0);
}

int	main(void)
{
	char buffer[50];

	ft_bzero(buffer,6);
	printf("The result of ft_bzero is: %s\n", buffer);
	return(0);
}
int main(void)
{
	char *str;

	str = ft_calloc(10,6);
	printf("The result of ft_calloc is: %s\n", str);
	return(0);
}
int	main(void)
{
	int a1 = 'A';
	int a2 = ';';

	printf("%c is Alphanumeric?: %d\n", a1, ft_isalnum(a1));
	printf("%c is Alphanumeric?: %d\n", a2, ft_isalnum(a2));
	return(0);
}
int main(void)
{
    int a1 = 'l';
    int a2 = 'M';
    int a3 = '$';

    printf("%c is alpha:? %d\n", a1, ft_isalpha(a1));
    printf("%c is alpha:? %d\n", a2, ft_isalpha(a2));
    printf("%c is alpha:? %d\n", a3, ft_isalpha(a3));

    return (0);
}
int	main(void)
{
	int a1 = 180
	int a2 = 127

	printf("c% is an ASCII? %d\n:", a1, ft_isascii(a1));
	printf("c% is an ASCII? %d\n:", a2, ft_isascii(a2));
	printf("c% is an ASCII? %d\n:", a1, isascii(a1));
	printf("c% is an ASCII? %d\n:", a2, isascii(a2));
	return(0)
}
int main(void)
{
	int a1 = '4'
	int a2 = 'A'

	printf("c% is a decimal? %d\n:", a1, ft_isdigit(a1));
	printf("c% is a decimal? %d\n:", a2, ft_isdigit(a2));
	printf("c% is a decimal? %d\n:", a1, isdigit(a1));
	printf("c% is a decimal? %d\n:", a2, isdigit(a2));
	return(0)
}
int	main(void)
{
	int a1 = 127
	int a2 = 38

	printf("c% is printable? %d\n:", a1, ft_isprint(a1));
	printf("c% is printable? %d\n:", a2, ft_isprint(a2));
	printf("c% is printable? %d\n:", a1, isprint(a1));
	printf("c% is printable? %d\n:", a2, isprint(a2));
	return(0)
}
int	main(void)
{
	printf("The resul of ft_itoa for 0 is: %s\n", ft_itoa(0));
    printf("The result of ft_itoa for 123456 is: %s\n", ft_itoa(123456));
    printf("The result of ft_itoa for -123456 is: %s\n", ft_itoa(-123456));
    printf("The result of ft_itoa for -2147483648 is: %s\n",
	 ft_itoa(-2147483648));
}
int	main(void)
{
	char strx[] = "Hola caracola";
	char *ptr1;
	char *ptr2;
	ptr1 = ft_memchr(strx, 'c', 10);
	ptr2 = memchr(strx, 'c', 10);
	printf("The ft_memchr found the character at post (null if -): %ld.\n",
		ptr1 - strx);
	printf("The memchr found the character at post (null if-): %ld.\n",
		ptr2 - strx);
	return(0);
}
int main()
{
	char s1[] = "Macanudo";
	char s2[] = "Macanudo";
	int result1 = ft_memcmp(s1, s2, strlen(s1) + 1);
	int result2 = memcmp(s1, s2, strlen(s1) + 1);

	printf("The ft_memcmp function result comparing s1 and s2 is: %d\n", result1);
    printf("The memcmp function result comparing s1 and s2 is %d\n", result2);
    return 0;
}
int	main(void)
{
	char	dst [] = "amigo";
	char	src [] = "mariano";
	char	dst1 [] = "amigo";
	char	src1 [] = "mariano";

	ft_memcpy(dst, src, 8);
	printf("The ft_memcpy function result is: %s\n", dst);
	memcpy(dst1, src1, 8);
	printf("The memcpy function result is:%s", dst1);
}

int	main(void)
{
	char	dst [] = "mariano";
	char	src [] = "amigo";
	char	dst1 [] = "mariano";
	char	src1 [] = "amigo";

	ft_memmove(dst, src, 3);
	printf("The ft_memmove result is: %s\n", dst);
	memmove(dst1, src1, 3);
	printf("The memmove result is: %s\n", dst1);
}
int	main(void)
{
	char buffer[50];
	char buffer2[50];

	printf("%s\n", memset(buffer, '8', 6));
	printf("%s\n", ft_memset(buffer2, '8', 6));
	return (0);
}
int	main(void)
{
	char str[] = "Hola Caracola";
	int fd = open("archivo_salida_test.txt", O_WRONLY | O_CREAT, 0644);
	ft_putchar_fd(str[0], fd);
	ft_putchar_fd(str[1], fd);
	close (fd);
	return (0);
}
int	main(void)
{
	char	str[] = "Hola Caracola";
	int	fd = open ("Archivo_salida_string_end_line_test.txt",
		O_WRONLY | O_CREAT, 0644);
	ft_putendl_fd(str, fd);
	close (fd);
	return (0);
}
int	main(void)
{
	int nb = 2735;
	int	fd = open ("Archivo_salida_ft_putnbr.txt", O_WRONLY | O_CREAT, 0644);

	ft_putnbr_fd(nb, fd);
	return (0);
}
int	main(void)
{
	const char	str []= "caricatura roja";
	char	*result1 = ft_strchr(str, 'r');
	char	*result2 = strchr(str, 'r');

	printf("The result of ft_strchr is a pointer to: %ld\n", result1 - str);
	printf("The result of strchr is a pointer to: %ld\n", result2 - str);
	return (0);
}
int	main(void)
{
	char	str1 [] = "El Perro de San Roque";
	char	str2 [] = "El Perro de San Roque";

	printf("The result of the ft_strdup is: %s\n", ft_strdup(str1));
	printf("The result of strdup is: %s\n", strdup(str2));
	return (0);
}
