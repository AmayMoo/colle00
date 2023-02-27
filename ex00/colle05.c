void	ft_putchar(char c);

void	colle(int x, int y, char cornTopLeft, char cornTopRight, char middle, char middleLeft, char middleRight, char cornBottomLeft, char cornBottomRight, char topMiddle, char bottomMiddle)
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
				ft_putchar(cornTopLeft);
			else if (i == 1 && j == x)
				ft_putchar(cornTopRight);
			else if (i == y && j == 1)
				ft_putchar(cornBottomLeft);
			else if (i == y && j == x)
				ft_putchar(cornBottomRight);
			else if (i == 1)
			{
				ft_putchar(topMiddle);
			}
			else if (i == y)
			{
				ft_putchar(middleRight);
			}
			else if (j == 1)
			{
				ft_putchar(bottomMiddle);
			}
			else if (j == x)
			{
				ft_putchar(middleLeft);
			}
			else
				ft_putchar(middle);
		}
		ft_putchar('\n');
	}
}
