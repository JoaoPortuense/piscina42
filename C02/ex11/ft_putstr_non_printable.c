/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jportuen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 02:27:03 by jportuen          #+#    #+#             */
/*   Updated: 2019/12/11 02:31:27 by jportuen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	hexa(char *str)
{
	char *hex;

	hex = "0123456789abcdef";
	write(1, &hex[str[0]], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 0 && str[a] < 16)
		{
			write(1, "\\0", 2);
			hexa(&str[a]);
		}
		else if (str[a] >= 16 && str[a] < 32)
		{
			write(1, "\\1", 2);
			hexa(&str[a]);
		}
		else if (str[a] == 127)
			write(1, "\\7f", 3);
		else
			write(1, &str[a], 1);
		a++;
	}
}
