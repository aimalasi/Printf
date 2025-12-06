/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimalasi <aimalasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 12:57:35 by aimalasi          #+#    #+#             */
/*   Updated: 2025/12/06 16:53:44 by aimalasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int	i;
	int	count;

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	i = 0;
	count = 0;
	va_start(ap, format);
	while (format[i])
	{
		while (format[i] == '%' && format[i +1])
			if
	}
	va_end (ap);
	return (count);
}