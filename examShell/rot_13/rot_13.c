#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_putstr(char *str)
{
	int i;

	i = 0;
		while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	return (*str);
}

char	*rot_13(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'M')
			|| (str[i] >= 'a' && str[i] <= 'm'))
		{
			str[i] += 13;
			i++;
		}
		else if ((str[i] >= 'N' && str[i] <= 'Z')
                        || (str[i] >= 'n' && str[i] <= 'z'))
		{
			str[i] -= 13;
			i++;
		}
		else
		i++;
	}
	return (str);
}

int main(int ac, char **av)
{
	(void)ac;
	ft_putstr(rot_13(av[1]));
	ft_putchar('\n');
}
