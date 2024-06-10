/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salaoui <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 15:36:20 by salaoui           #+#    #+#             */
/*   Updated: 2024/06/10 22:33:44 by salaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(unsigned long nb)
{
	char	*base;
	int		len;

	base = "0123456789abcdef";
	len = 0;
	if (nb >= 16)
	{
		len += ft_pointer(nb / 16);
		len += ft_pointer(nb % 16);
	}
	else
	{
		write(1, &base[nb], 1);
		len++;
	}
	return (len);
}
