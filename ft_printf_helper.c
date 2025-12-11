/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_helper.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimalasi <aimalasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 16:28:21 by aimalasi          #+#    #+#             */
/*   Updated: 2025/12/11 16:38:07 by aimalasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putchar(char c)
{
	unsigned char   uc;
	
	uc = (unsigned char)c;
	write(1, &uc, 1);
	return (1);
}

int ft_putstr(char *str)
{
	int	count;
	
	count = 0;
	if (!str)
		return (ft_putstr("(null)"));
	while (str[count])
		ft_putchar(str[count++]);
	return (count);
}
int ft_putnbr_base