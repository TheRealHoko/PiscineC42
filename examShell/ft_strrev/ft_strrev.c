#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	return (str);
}

char	*ft_strrev(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	int j = 0;
	char tmp;
	while (str[j])
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i--;
		j++;
	}
	return (str);	
}

int main(int ac, char **av)
{
	(void)ac;
	ft_putstr(ft_strrev(av[1]));
	ft_putchar('\n');
	return (0);
}
