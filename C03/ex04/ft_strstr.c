#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j;

	while(haystack[i] != '\0')
	{
		j = 0;
		while(needle[j] == haystack[i + j])
		{	
			if (needle[j + 1] == '\0')
				return (haystack + i);
			j++;
		}
		i++;
	}
	return (0);
}

int main(int ac, char **av)
{
	(void)ac;
	printf("%s\n", ft_strstr(av[1], av[2]));
	printf("%s\n", strstr(av[1], av[2]));
}
