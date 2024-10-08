/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lowatell <lowatell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:12:48 by lowatell          #+#    #+#             */
/*   Updated: 2024/10/08 16:53:51 by lowatell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putnbr(long nbr)
{
	int	len;
	
	len = ft_nbr_len(nbr);
	if (nbr < 0)
	{
		nbr = nbr * -1;
		write(1, "-", 1);
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	if (nbr < 10)
	{
		nbr += 48;
		write(1, &nbr, 1);
	}
	return (len);
}
