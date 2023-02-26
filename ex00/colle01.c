void	ft_putchar(char c);

void	colle(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	if (x <= 0 || y <= 0)
		return ;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			if ((i == 0 && j == 0) || \
				(i == y - 1 && j == x - 1 && y != 1 && x != 1))
				ft_putchar('/');
			else if ((i == 0 && j == x - 1) || (i == y - 1 && j == 0))
				ft_putchar('\\');
			else if (i == 0 || i == y - 1 || j == 0 || j == x - 1)
				ft_putchar('*');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
