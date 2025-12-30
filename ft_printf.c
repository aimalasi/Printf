/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimalasi <aimalasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 12:57:35 by aimalasi          #+#    #+#             */
/*   Updated: 2025/12/20 21:57:07 by aimalasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check(char format)
{
	if (format == 'c' || format == 's' || format == 'p' || format == 'i'
		|| format == 'd' || format == 'u' || format == 'x' || format == 'X'
		|| format == '%')
		return (1);
	return (0);
}

static int	handle_percentage(va_list ap, const char format)
{
	int	count;

	count = 0;
	if (format == 'c')
		count += ft_putchar(va_arg (ap, int));
	else if (format == 's')
		count += ft_putstr(va_arg (ap, char *));
	else if (format == 'p')
		count += ft_putadr(va_arg (ap, void *));
	else if (format == 'i' || format == 'd')
		count += ft_putnbr_base(va_arg(ap, int), 1, 10, "0123456789");
	else if (format == 'u')
		count += ft_putnbr_base(va_arg(ap, unsigned int), 0, 10,
				"0123456789");
	else if (format == 'x')
		count += ft_putnbr_base(va_arg(ap, unsigned int), 0, 16,
				"0123456789abcdef");
	else if (format == 'X')
		count += ft_putnbr_base(va_arg(ap, unsigned int), 0, 16,
				"0123456789ABCDEF");
	else if (format == '%')
		count += ft_putchar('%');
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;
	int		count;

	if (!format)
		return (-1);
	i = 0;
	count = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] && check(format[i + 1]))
		{
			count += handle_percentage(ap, format[i + 1]);
			i += 2;
		}
		else
			count += ft_putchar(format[i++]);
	}
	va_end (ap);
	return (count);
}
/* int main(void)
{
	int	i = 42;

	printf("Testing ft_printf\n\n");
	ft_printf("%%c: [%c]\n", 'A');
	printf("%%c: [%c]\n", 'A');
	ft_printf("%%s: [%s]\n", "Hello");
	printf("%%s: [%s]\n", "Hello");
	ft_printf("%%p: [%p]\n", &i);
	printf("%%p: [%p]\n", &i);
	ft_printf("%%d: [%d]\n", -427);
	printf("%%d: [%d]\n", -427);
	ft_printf("%%i: [%i]\n", 123);
	printf("%%i: [%i]\n", 123);
	ft_printf("%%u: [%u]\n", 4274946584U);
	printf("%%u: [%u]\n", 4274946584U);
	ft_printf("%%x: [%x]\n", 255);
	printf("%%x: [%x]\n", 255);
	ft_printf("%%X: [%X]\n", 255);
	printf("%%X: [%X]\n", 255);
	ft_printf("%%%%: [%%]\n");
	printf("%%%%: [%%]\n");
	return (0);
} */
