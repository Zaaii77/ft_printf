/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lowatell <lowatell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:12:48 by lowatell          #+#    #+#             */
/*   Updated: 2024/10/09 01:07:33 by lowatell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putnbase(long nbr, char *str)
{
	int	len;
	int	size;
	
	size = ft_strlen(str);
	len = ft_nbr_len(nbr);
	if (nbr < 0)
	{
		nbr = nbr * -1;
		len += ft_putchar('-');
	}
	if (nbr > size)
	{
		ft_putnbase(nbr / size, str);
		ft_putnbase(nbr % size, str);
	}
	if (nbr < size)
		ft_putchar(str[nbr % size]);
	return (len);
}
