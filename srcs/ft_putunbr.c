/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lowatell <lowatell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 00:11:53 by lowatell          #+#    #+#             */
/*   Updated: 2024/10/08 16:52:51 by lowatell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putunbr(unsigned int nbr)
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
		ft_putunbr(nbr / 10);
		ft_putunbr(nbr % 10);
	}
	if (nbr < 10)
	{
		nbr += 48;
		write(1, &nbr, 1);
	}
	return (len);
}
