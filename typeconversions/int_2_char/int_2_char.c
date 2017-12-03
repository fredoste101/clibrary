
char int_2_char(int num)
{
	if(0 < num && num < 10)
	{
		return (char) num + '0';
	}
	else
	{
		return 'E';
	}
}


