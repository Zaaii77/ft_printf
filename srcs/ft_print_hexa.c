/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lowatell <lowatell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 14:56:00 by lowatell          #+#    #+#             */
/*   Updated: 2024/10/08 16:52:19 by lowatell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_print_min_hexa(long nb)
{
	char		*base;
	
	base = "0123456789abcdef";
	if (nb >= 16)
		ft_print_min_hexa(nb / 16);
	write(1, &base[nb % 16], 1);
}

int	ft_min_hexa(long nbr)
{
	int	count;

	count = 0;
	ft_print_min_hexa(nbr);
	if (nbr < 0)
	{
		nbr = -nbr;
		count++;
	}
	if (nbr == 0)
		return (1);
	while (nbr > 0)
	{
		nbr /= 16;
		count++;
	}
	return (count);
}
void	ft_print_caps_hexa(long nb)
{
	char		*base;
	
	base = "0123456789ABCDEF";
	if (nb >= 16)
		ft_print_caps_hexa(nb / 16);
	write(1, &base[nb % 16], 1);
}

int	ft_caps_hexa(long nbr)
{
	int	count;

	count = 0;
	ft_print_caps_hexa(nbr);
	if (nbr < 0)
	{
		nbr = -nbr;
		count++;
	}
	if (nbr == 0)
		return (1);
	while (nbr > 0)
	{
		nbr /= 16;
		count++;
	}
	return (count);
}