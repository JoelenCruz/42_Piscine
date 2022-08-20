/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 14:51:39 by jcruz-da          #+#    #+#             */
/*   Updated: 2022/07/27 14:51:40 by jcruz-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_prime(int nb)
{
	int	a;

	a = 2;
	if (nb <= 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (0);
	while (a <= nb / a)
	{
		if (nb % a == 0)
			return (0);
		a++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main()
{

	int b = -7;
	
	printf("%d", ft_is_prime(b));
}
*/
