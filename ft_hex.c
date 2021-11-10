int ft_hex(int x)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
    while (x % 16 != 0)
		{
			a = x / 16;
			b = x % 16;
			if (b < 9 && b >= 0)
				write(1, &b, 1);
			else 
				ft_hex(a);
		}
}

int main ()
{
	int i = 12345;

	printf("")
}