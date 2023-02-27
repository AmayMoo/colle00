void	ft_putchar(char c);

void	colle(int x, int y)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	if (x <= 0 || y <= 0)
		return ;
	while (a < y)
	{
		while (b < x)
		{
			if ((a == 0 || a == y - 1) && (b == 0 || b == x - 1))
			{
				ft_putchar('o');
			}
			else if (a == 0 || a == y - 1)
			{
				ft_putchar('-');
			}
			else if (b == 0 || b == x - 1)
			{
				ft_putchar('|');
			}
			else
			{
				ft_putchar(' ');
			}
			b = b + 1;
		}
		ft_putchar('\n');
		b = 0;
		a = a + 1;
	}
}
