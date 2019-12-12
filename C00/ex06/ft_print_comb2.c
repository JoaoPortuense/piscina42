/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jportuen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 00:58:56 by jportuen          #+#    #+#             */
/*   Updated: 2019/11/27 09:20:35 by jportuen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b)
{
	write(1, &a, 1);
	write(1, &b, 1);
}

void	ft_putchar2(char a, char b, char c, char d)
{
	if ((10 * a + b) < (10 * c + d))
	{
		ft_putchar(a, b);
		write(1, " ", 1);
		ft_putchar(c, d);
		if ((a != '9') || (b != '8') || (c != '9') || (d != '9'))
		{
			write(1, ",", 1);
			write(1, " ", 1);
		}
	}
}

void	ft_loop(char a, char b, char c, char d)
{
	while (a <= '9')
	{
		while (b <= '9')
		{
			while (c <= '9')
			{
				while (d <= '9')
				{
					if ((a != c || b != d) || (a != d || b != c))
						ft_putchar2(a, b, c, d);
					d++;
				}
				d = '0';
				c++;
			}
			c = '0';
			d = '0';
			b++;
		}
		a++;
		b = '0';
		c = '0';
		d = '0';
	}
}

void	ft_print_comb2(void)
{
	char a;
	char b;
	char c;
	char d;

	a = '0';
	b = '0';
	c = '0';
	d = '1';
	ft_loop(a, b, c, d);
}
