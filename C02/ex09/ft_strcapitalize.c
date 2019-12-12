/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jportuen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 16:59:51 by jportuen          #+#    #+#             */
/*   Updated: 2019/12/11 01:01:34 by jportuen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_isalpha(char str)
{
	if ((str >= 'a' && str <= 'z') || (str >= 'A' && str <= 'Z'))
		return (1);
	else if (str >= '0' && str <= '9')
		return (1);
	return (0);
}

char	upper(char str)
{
	if (str >= 'a' && str <= 'z')
		return (str - 32);
	return (str);
}

char	lower(char str)
{
	if (str >= 'A' && str <= 'Z')
		return (str + 32);
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int a;

	a = 1;
	str[0] = upper(str[0]);
	while (str[a] != '\0')
	{
		if (!ft_isalpha(str[a - 1]) && ft_isalpha(str[a]))
		{
			str[a] = upper(str[a]);
		}
		else
			str[a] = lower(str[a]);
		a++;
	}
	return (str);
}
