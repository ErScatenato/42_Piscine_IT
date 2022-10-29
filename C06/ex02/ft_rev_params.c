/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 19:51:55 by fcorvaro          #+#    #+#             */
/*   Updated: 2022/10/29 20:02:02 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int ac, char **av)
{
	int		l;
	int		k;

	k = ac - 1;
	while (k > 0)
	{
		l = 0;
		while (av[k][l])
		{
			write(1, &av[k][l], 1);
			l++;
		}
		write(1, "\n", 1);
		k--;
	}
	return (0);
}
