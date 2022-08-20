/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 12:42:04 by jcruz-da          #+#    #+#             */
/*   Updated: 2022/07/26 12:42:06 by jcruz-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0 || nb >= 13)
		return (0);
	while (nb != 0)
	{
		result = result * nb;
		nb --;
	}
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
	int a = 3;
	printf("%d", ft_iterative_factorial(a));
	return (0);
}
*/
