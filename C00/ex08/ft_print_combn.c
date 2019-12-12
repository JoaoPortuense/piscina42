/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jportuen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 04:29:04 by jportuen          #+#    #+#             */
/*   Updated: 2019/11/26 18:53:22 by jportuen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_ordena(int k)
{
	k++;
	while (k % 10 != 0)
	{
		ft_ordena(k);
		ft_putchar(k % 10 + '0');
	}
}

void	ft_print_combn(int n)
{
	if (n > 0 && n < 9)
	{
	int c = 0;
	int k;

	k = n;
	while(c < n-1)
	{
		k *= 10;
		c++;
	}
	k /= n;
	printf("%d", k);
	ft_ordena(k);
	}
}

int main()
{
	ft_print_combn(2);
}
