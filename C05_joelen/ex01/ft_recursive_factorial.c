/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 11:51:41 by jcruz-da          #+#    #+#             */
/*   Updated: 2022/07/26 11:51:44 by jcruz-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb > 0)
		return (nb * ft_recursive_factorial(nb - 1));
	if (nb < 0)
		return (0);
	return (result);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d", ft_recursive_factorial(12));
}
*/
