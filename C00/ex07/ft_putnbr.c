/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jportuen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 09:45:26 by jportuen          #+#    #+#             */
/*   Updated: 2019/11/28 18:03:00 by jportuen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int x;

	x = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		x *= -1;
	}
	if (nb / 10 != 0)
	{
		ft_putnbr(x / 10);
	}
	ft_putchar(x % 10 + '0');
}
