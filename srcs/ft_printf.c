/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lowatell <lowatell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 11:57:37 by lowatell          #+#    #+#             */
/*   Updated: 2024/10/08 18:02:34 by lowatell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include <stdio.h>

int	ft_type(char c, va_list *args)
{
	if (c == 's')
		return ft_putstr(va_arg(*args, char *));
	else if (c == 'c')
		return (ft_putchar(va_arg(*args, int)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(*args, int)));
	else if (c == 'u')
		return (ft_putunbr(va_arg(*args, unsigned int)));
	else if (c == '%')
		return (ft_putchar('%'));
	else if (c == 'p')
		return (ft_print_address(va_arg(*args, void *)));
	else if (c == 'X')
		return (ft_caps_hexa(va_arg(*args, long)));
	else if (c == 'x')
		return (ft_min_hexa(va_arg(*args, long)));
	else
		return (ft_putchar(c));
	return (-1);
}

int	ft_printf(const char *str, ...)
{
	int	count;
	int	i;
	va_list	args;

	i = 0;
	count = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			count += ft_type(str[i + 1], &args);
			i++;
		}
		else
			count += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (count);
}

