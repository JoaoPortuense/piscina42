/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jportuen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 12:03:24 by jportuen          #+#    #+#             */
/*   Updated: 2019/12/01 12:21:53 by jportuen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_str_is_alpha(char *str)
{
	int a;

	a = 0;
	if (str[a] == '\0')
	{
		return (1);
	}
	else
	{
		while (str[a] != '\0')
		{
			if ((str[a] >= 'a' && str[a] <= 'z'))
				a++;
			else if (str[a] >= 'A' && str[a] <= 'Z')
				a++;
			else
				return (0);
		}
	}
	return (1);
}
