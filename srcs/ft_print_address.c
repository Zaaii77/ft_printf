/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_address.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lowatell <lowatell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 11:18:48 by lowatell          #+#    #+#             */
/*   Updated: 2024/10/19 13:11:06 by lowatell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

size_t	ft_print_address(void *ptr, char *str)
{
	size_t		len;
	size_t		n;
	size_t		base;

	if (!ptr)
		return (ft_putstr("0x0"));
	if (!str)
		return (0);
	base = ft_strlen(str);
	n = (size_t)ptr;
	len = ft_putstr("0x");
	ft_putptr(n, str);
	while (n > 0)
	{
		n /= base;
		len++;
	}
	return (len);
}
