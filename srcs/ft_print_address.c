/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_address.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lowatell <lowatell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 11:18:48 by lowatell          #+#    #+#             */
/*   Updated: 2024/10/08 16:55:16 by lowatell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include <stdio.h>

void	ft_write_hexa(long nb)
{
	char	*base;

	base = "0123456789abcdef";
	if (nb >= 16)
		ft_write_hexa(nb / 16);
	write(1, &base[nb % 16], 1);
}

int	ft_print_address(void *p)
{
	write(1, "0x", 2);
	ft_write_hexa((long)p);
	return (ft_nbr_len((long)p) + 1);
}
