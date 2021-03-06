/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlewis-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 09:54:11 by mlewis-l          #+#    #+#             */
/*   Updated: 2018/03/27 10:09:12 by mlewis-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int c;

	c = 0;
	while (*tab != 0)
		if (f(*tab++))
			c++;
	return (c);
}
