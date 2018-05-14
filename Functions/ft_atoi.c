int	ft_atoi(const char *str)
{
	int res;
	int i;

	i = 0;
	res = 0;

	while (str[i])
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res);
}
