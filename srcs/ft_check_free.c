/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_free.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpinyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 01:09:41 by jpinyot           #+#    #+#             */
/*   Updated: 2017/11/25 19:06:47 by mzabalza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_free(const char *s, char c)
{
	int i;
	int cnt;

	i = 0;
	cnt = 0;
	while (s[i])
	{
		if (s[i] == '.')
			cnt++;
		if (cnt == 4)
			return (1);
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}
