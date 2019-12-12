/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jportuen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 02:35:52 by jportuen          #+#    #+#             */
/*   Updated: 2019/11/29 02:39:20 by jportuen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int aux;
	int x;
	int y;

	x = 0;
	y = size;
	while (x < y)
	{
		aux = tab[x];
		tab[x] = tab[y - 1];
		tab[y - 1] = aux;
		x++;
		y--;
	}
}
