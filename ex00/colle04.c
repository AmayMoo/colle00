void	ft_putchar(char c);

void	colle(int x, int y)
{
	int	i;
	int	j;

		i = 0;
	while (++i <= y && x > 0 && y > 0)
	{
		j = 0;
		while (++j <= x)
		{
			if (i == 1 && j == 1)
				ft_putchar('A');
			else if (i == 1 && j == x)
				ft_putchar('C');
			else if (i == y && j == 1)
				ft_putchar('C');
			else if (i == y && j == x)
				ft_putchar('A');
			else if (i == 1 || i == y || j == 1 || j == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
