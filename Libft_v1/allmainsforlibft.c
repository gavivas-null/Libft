#include "libft.h"

							ft_atoi.c
/* int	main(void)
{
	const char	*str;
	int			newint;

	str = "  -12c34";
	newint = ft_atoi(str);
	printf("char:\n%s\n", str);
	printf("int:\n%i\n", newint);
	return (0);
} */

							ft:bzero.c
/* int	main(void)
{
	char	s[12] = "Hello World!";
	size_t	n;

	n = 12;
	printf("s:\n%s\n", s);
	ft_bzero(s, n);
	printf("new:\n%s\n", s);
	return (0);
} */

							ft_calloc.c
/* int main()
{
	size_t count = 300000000;
	size_t size = 5;
	void *arr;
	
	arr = ft_calloc(count, size);
	if (arr == NULL)
		printf("Error ft_calloc\n");
	else
		printf("Bien Chaval ft_calloc\n");
	if (arr != NULL)
		free(arr);
	void *new = calloc(count, size);
	if (new == NULL)
		printf("Error calloc\n");
	else
		printf("Bien Chaval calloc\n");
	if (new != NULL)
		free(new);
} */

							ft_isalnum.c
/* int	main(void)
{
	printf("%d\n", ft_isalnum('2'));
	printf("%d\n", isalnum('2'));
} */

							ft_isalpha.c
/* int	main()
{
	printf("%d \n", ft_isalpha(' '));
	printf("%d", isalpha(' '));
	return(0);
} */

							ft_isascii.c
/* int	main(void)
{
	printf("%d, \n", ft_isascii(127));
	printf("%d", isascii(127));
	return (0);
} */

							ft_isdigit.c
/* int	main()
{
	printf("%d \n", ft_isdigit('1'));
	printf("%d \n", isdigit('1'));
	return (0);
} */

							ft_isprint.c
/* int	main(void)
{
	printf("%d, \n", ft_isprint(115));
	printf("%d", isprint(115));
} */

							ft_itoa.c
/* int	main(void)
{
	int n = 00898;
	char *str = ft_itoa(n);
	printf("%s\n", str);
	return (0);
} */
							ft_lstadd_back.c


							ft_lstadd_front.c


							ft_lstclear.c


							ft_lstdelone.c


							ft_lstiter.c


							ft_lstlast.c


							ft_lstmap.c


							ft_lstnew.c
/* int	main()
{
	int	valor = 42;
    t_list *node = ft_lstnew(&valor);
    if (node)
    {
		printf("direccion hexa del nodo: %p\n", (void *)node);
        printf("Contenido del nodo: %d\n", *(int *)(node->content));
		free(node);
    }
    else
        printf("Error al crear el nodo\n");
    return 0;
} */
							ft_lstsize.c


							ft_memchr.c
/* int	main(void)
{
	char	*s;
	int		c;
	size_t	n;
	char	*ptr;

	s = "hola mundo";
	c = 'm';
	n = 10;
	ptr = ft_memchr(s, c, n);
	printf("%c\n%ld\n", *ptr, ptr - s);
} */

							ft_memcmp.c
/* int	main(void)
{
	const void	*s1 = "Hola";
	const void	*s2 = "H";
	size_t		n = 15;
	int		result;

	result = ft_memcmp(s1, s2, n);
	printf("%d\n", result);
	result = memcmp(s1, s2, n);
	printf("%d\n", result);

} */

							ft_memcpy.c
/* int	main(void)
{
	char src[] = "hola";
	char dest[20];
	size_t d = 5;

	printf("%s\n", (char * )ft_memcpy(dest, src, d));
	printf("%s", (char * )memcpy(dest,src, d));
	return (0);
} */

							ft_memmove.c
/* int	main(void)
{
	char	s[] = "holi";
	char	d[50] = "a";
	size_t	l = 10;

	printf("%s\n", (char *)ft_memmove(d, s, l));
	printf("%s", (char *)memmove(d, s, l));
} */

							ft_memset.c
/* int	main(void)
{
	int				c = 'f';
	size_t			d = 4;
	unsigned char	f[30] = "muy buenas guapisimos";

	printf("%s \n", (char *)ft_memset(f, c, d));
	printf("%s", (char *)memset(f, c, d));
} */

							ft_split.c
/* 
int main(void)   //MAIN DE ft_countwords
{
    char *s = "asdg hoola c";
    char c = ' ';

    printf("%d \n", ft_limits(s, c));
    return 0;
} */
/* int	main(void) //MAIN DE ft_copywords
{
    char	*s = "hola hi";
    char	c = ' ';
	int	i = 2;

    printf(".%s.\n", ft_copywords(s, c, &i));
	printf(".%s.\n", ft_copywords(s, c, &i));
	return 0;
} */
/* int	main(void)
{
	const char	*s = "Hello world!";
	char		c = ' ';
	char		**split;
	int			i;

	split = ft_split(s, c);
	i = 0;
	while (split[i])
	{
		printf("%s \n", split[i]);
		i++;
	}
	return (0);
} */

							ft_strchr.c
/* int	main(void)
{ 
	int c = 'm';
	char s[20] = "Hola mundo moda";
	
	printf("%s \n", ft_strchr(s, c));
	printf("%s", strchr(s, c));
	return (0);
} */

							ft_strdup.c
/* int	main(void)
{
	const char	*s1;
	char		*cpy;

	s1 = "Hola Mundo!";
	cpy = ft_strdup(s1);
	printf("s1: %s\n", s1);
	printf("cpy: %s\n", cpy);
	return (0);
} */

							ft_striteri.c
/* int	main(void)
{
	char *s1;
	char *s2;
	char *f;
	
	s1 = "Hola Mundo!";
	s2 = "Ho!";
	f = ft_strtrim(s1, s2);
	printf("s1: %s\n", s1);
	printf("final: %s\n", f);
	return (0);
} */

							ft_strjoin.c
/* int	main(void)
{
	char const	*s1;
	char const	*s2;
	char		*newstr;

	s1 = "Que tal guapaaa ";
	s2 = "Muy Buenas a Todos";
	newstr = ft_strjoin(s1, s2);
	printf("s1:\n%s\ns2:\n%s\n\n", s1, s2);
	printf("newstr:\n%s", newstr);
	return (0);
} */
							ft_strlcat.c

							ft_strlcpy.c

							ft_strlen.c
/* int	main(void)
{
	char	*len;

	len = "hola";
	printf("%zu \n", ft_strlen(len));
	printf("%zu", strlen(len));
} */

							ft_strmapi.c


							ft_strncmp.c


							ft_strnstr.c

/* int	main(void)
{ 
	int c = 'm';
	char s[50] = "Hola mundo moda";
	
	printf("%s \n", ft_strrchr(s, c));
	printf("%s", strrchr(s, c));
	return (0);
} */
							ft_strrchr.c

/* int	main(void)
{ 
	int c = 'm';
	char s[50] = "Hola mundo moda";
	
	printf("%s \n", ft_strrchr(s, c));
	printf("%s", strrchr(s, c));
	return (0);
} */
							ft_strtrim.c
/* int	main(void)
{
	char const	*s1;
	char const	*set;
	char		*s2;

	s1 = "Hola Mundo";
	set = "Ho";
	s2 = ft_strtrim(s1, set);
	if (s2 == NULL)
		return (1);
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	free(s2);
	return (0);
} */

							ft_substr.c
/* int	main(void)
{
	char const		*s;
	unsigned int	start;
	size_t			len;
	char			*substr;

	s = "Hola Muy Buenas";
	start = 5;
	len = 16;
	substr = ft_substr(s, start, len);
	printf("original:\n %s\n\n", s);
	printf("substr:\n %s\n", substr);
	return(0);
} */

							ft_tolower.c
/*
int	main(void)
{
	char a = 'U';

	printf("%c \n", ft_tolower(a));
	printf("%c", tolower(a));
	return (0);
}*/

							ft_toupper.c
/*
int	main(void)
{
	char a = 'h';

	printf("%c \n", ft_toupper(a));
	printf("%c", toupper(a));
	return (0); 
}*/
