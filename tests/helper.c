#include "../include/libftTester.h"

void writeStringFd(char *s, int fd)
{
	write(fd, s, strlen(s));
}

void writeCharFd(char c, int fd)
{
	write(fd, &c, 1);
}

int	ft_putchar(va_list ap, char c, int inputplace)
{
	char	ch;

	if (inputplace == 1)
	{
		if (c == 'c')
		{
			ch = va_arg(ap, int);
			writeCharFd(ch, 1);
			return (1);
		}
		else
		{
			writeCharFd('%', 1);
			return (1);
		}
	}
	else
	{
		writeCharFd(c, 1);
		return (1);
	}
}

int	ft_putstring(va_list ap)
{
	char	*str;

	str = NULL;
	str = va_arg(ap, char *);
	if (str == NULL)
		str = "(null)";
	writeStringFd (str, 1);
	return (strlen(str));
}

int	ft_put_ptr_to_str(va_list ap)
{
	char	*str;
	void	*ptr;
	int		length;

	ptr = va_arg(ap, void *);
	str = ptr_to_hex(ptr);
	if (str != NULL)
	{
		if (*str == '0' && strlen(str) == 1)
		{
			free(str);
			str = "(nil)";
			writeStringFd (str, 1);
			return (5);
		}
		else
		{
			length = strlen(str);
			write(1, "0x", 2);
			writeStringFd (str, 1);
			free(str);
			return (length + 2);
		}
	}
	return (0);
}

void writeNumberFd(int num, int fd)
{
	int		sign;
	char	c;

	sign = 1;
	if (num < 0)
	{
		writeCharFd('-', 1);
		sign = -1;
	}
	if (num / 10)
		writeNumberFd(num / 10 * sign, fd);
	c = '0' + num % 10 * sign;
	writeCharFd(c, fd);
}

void writeZUFd(size_t num, int fd)
{
	char c;

	if (num / 10)
		writeZUFd(num / 10, fd);
	c = '0' + num % 10;
	writeCharFd(c, fd);
}

int	ft_putnumber(va_list ap)
{
	int		num;
	
	num = va_arg(ap, int);
	writeNumberFd(num, 1);
	return (0);
}

int ft_ul_to_str(va_list ap)
{
	size_t num;

	num = va_arg(ap, size_t);
	writeZUFd(num, 1);
	return (0);
}

int	ft_uint_to_str(va_list ap, char c)
{
	unsigned int	un_num;
	char			*str;
	int				length;

	str = NULL;
	if (c == 'u')
	{
		un_num = va_arg(ap, unsigned int);
		str = uitostr(un_num);
	}
	else if (c == 'x' || c == 'X')
	{
		un_num = va_arg(ap, unsigned int);
		str = uint_to_hex_uplow(un_num, c == 'x');
	}
	if (str != NULL)
	{
		length = strlen(str);
		writeStringFd (str, 1);
		free(str);
		return (length);
	}
	return (0);
}

int	ft_data_sort(va_list ap, const char *string, int i)
{
	int	amound_of_conv;

	amound_of_conv = 0;
	while (string[i])
	{
		if (string[i] == '%')
		{
			i++;
			if (string[i] == 'c' || string[i] == '%')
				amound_of_conv += ft_putchar(ap, string[i], 1);
			if (string[i] == 's')
				amound_of_conv += ft_putstring(ap);
			if (string[i] == 'p')
				amound_of_conv += ft_put_ptr_to_str(ap);
			if (string[i] == 'd' || string[i] == 'i')
				amound_of_conv += ft_putnumber(ap);
			if (string[i] == 'u' || string[i] == 'x' || string[i] == 'X')
				amound_of_conv += ft_uint_to_str(ap, string[i]);
			if (string[i] == 'z' && string[i + 1] == 'u')
			{
				amound_of_conv += ft_ul_to_str(ap);
				i++;
			}
		}
		else
			amound_of_conv += ft_putchar(ap, string[i], 0);
		i++;
	}
	return (amound_of_conv);
}

int	ft_printf(const char *string, ...)
{
	va_list	ap;
	int		lenght;
	int		index;

	va_start(ap, string);
	index = 0;
	lenght = 0;
	lenght = ft_data_sort(ap, string, index);
	va_end(ap);
	return (lenght);
}

int	count_hex_digits(void *ptr)
{
	unsigned long long	intptr;
	int					count;

	intptr = (unsigned long long)ptr;
	count = 0;
	while (intptr > 0)
	{
		intptr >>= 4;
		count++;
	}
	if (count > 0)
		return (count);
	else
		return (1);
}

char	*reverse(char *str, int size)
{
	int		i;
	int		length;
	char	temp;

	i = 0;
	length = size / 2;
	while (i < length)
	{
		temp = str[i];
		str[i] = str[size - i - 1];
		str[size - i - 1] = temp;
		i++;
	}
	return (str);
}

char	*ptr_to_hex(void *ptr)
{
	int					buffer_size;
	char				*hex_buffer;
	int					i;
	unsigned long long	digit;

	buffer_size = count_hex_digits(ptr) + 1;
	hex_buffer = (char *)malloc(buffer_size);
	i = 0;
	while (1)
	{
		digit = (unsigned long long)ptr & 0xF;
		ptr = (void *)((unsigned long long)ptr >> 4);
		if (digit < 10)
			hex_buffer[i++] = '0' + digit;
		else
			hex_buffer[i++] = 'a' + (digit - 10);
		if ((unsigned long long)ptr == 0)
			break ;
	}
	hex_buffer[i] = '\0';
	hex_buffer = reverse(hex_buffer, i);
	return (hex_buffer);
}

int	get_length(unsigned int n)
{
	int	length;
	int	num;

	if (n == 0)
		length = 1;
	else
		length = 0;
	num = n;
	while (n > 0)
	{
		n >>= 4;
		length++;
	}
	return (length);
}

char	get_char(int nibble, int uplow)
{
	if (nibble < 10)
		return ('0' + nibble);
	else
	{
		if (uplow == 1)
			return ('a' + nibble - 10);
		else
			return ('A' + nibble - 10);
	}
}

char	*uint_to_hex_uplow(unsigned int num, int uplow)
{
	unsigned int	length;
	unsigned int	n;
	char			*hex_str;
	int				index;
	int				nibble;

	if (uplow > 1)
		return (NULL);
	length = get_length(num);
	hex_str = (char *)malloc(length + 1);
	if (hex_str == NULL)
		return (NULL);
	hex_str = memset(hex_str, 0, length + 1);
	index = length - 1;
	n = num;
	if (n == 0)
		hex_str[0] = '0';
	while (n > 0)
	{
		nibble = n & 0xF;
		hex_str[index] = get_char(nibble, uplow);
		n >>= 4;
		index--;
	}
	return (hex_str);
}


int	get_lengthStr(unsigned int number)
{
	int	length;

	if (number == 0)
		length = 1;
	else
		length = 0;
	while (number > 0)
	{
		number /= 10;
		length++;
	}
	return (length);
}

char	*uitostr(unsigned int num)
{
	int				num_digit;
	char			*str;
	int				i;

	num_digit = get_lengthStr(num);
	str = (char *)malloc((num_digit + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	if (num == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	i = num_digit - 1;
	while (i >= 0)
	{
		str[i] = '0' + (num % 10);
		num /= 10;
		i--;
	}
	str[num_digit] = '\0';
	return (str);
}