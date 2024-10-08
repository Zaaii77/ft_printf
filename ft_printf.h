/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lowatell <lowatell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:35:10 by lowatell          #+#    #+#             */
/*   Updated: 2024/10/08 16:53:12 by lowatell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_putnbr(long nbr);
int	ft_putunbr(unsigned int nbr);
int	ft_nbr_len(int nbr);
int	ft_print_address(void *p);
int	ft_min_hexa(long nbr);
int	ft_caps_hexa(long nbr);

#endif