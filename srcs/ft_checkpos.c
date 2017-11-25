/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkpos.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpinyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 23:25:14 by jpinyot           #+#    #+#             */
/*   Updated: 2017/11/25 19:29:00 by mzabalza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libtet.h"

void	ft_check_pos(char *s, int i, int tmp, int *pos)
{
	int j;
	int n;

	j = 2;
	n = 0;
	while (i < 19)
	{
		if (s[i] == '#')
		{
			if (s[i - 1] == '#')
			{
				pos[j] = pos[j - 2];
				pos[j + 1] = pos[j - 1] + 1;
				n++;
			}
			if (s[i - 1] != '#')
			{
				pos[j] = pos[j - 2] + 1;
				pos[j + 1] = i - tmp - (5 * pos[j]);
			}
			j += 2;
		}
		i++;
	}
}

int		*ft_checkpos(char *s)
{
	static int	pos[8];
	int			i;
	int			tmp;

	i = 0;
	while (s[i] != '#')
		i++;
	tmp = i;
	i++;
	ft_check_pos(s, i, tmp, pos);
	return (pos);
}