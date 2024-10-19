/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lowatell <lowatell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 18:54:24 by lowatell          #+#    #+#             */
/*   Updated: 2024/10/19 13:11:14 by lowatell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

void	ft_putptr(size_t nbr, char *str)
{
	size_t	size;

	size = ft_strlen(str);
	if (nbr < 0)
	{
		nbr = nbr * -1;
		ft_putchar('-');
	}
	if (nbr >= size)
	{
		ft_putptr(nbr / size, str);
		ft_putptr(nbr % size, str);
	}
	if (nbr < size)
		ft_putchar(str[nbr % size]);
}
