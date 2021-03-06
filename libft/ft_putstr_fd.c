/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelinda <jbelinda@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 16:55:01 by jbelinda          #+#    #+#             */
/*   Updated: 2019/09/04 17:39:12 by jbelinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_fd(char const *s, int fd)
{
	int	i;

	if (s)
	{
		i = 0;
		while (s[i++])
			;
		if (--i)
			write(fd, s, i);
	}
}
