/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 10:04:33 by fcorvaro          #+#    #+#             */
/*   Updated: 2022/11/01 10:38:34 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (((nb / 2) >= i))
	{
		if ((nb % i) > 0)
			return (0);
		i += 1;
	}
	return (1);
}
/*
int main (void)
{
	printf("%d", ft_is_prime(3));
}*/
