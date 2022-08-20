/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 14:19:39 by jcruz-da          #+#    #+#             */
/*   Updated: 2022/07/27 14:19:42 by jcruz-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
		return (0);
	while (i * i < nb && i <= 46340)
		i++;
	if (i * i == nb)
		return (i);
	else
		return (0);
}
/*
#include <unistd.h>
#include <stdio.h>

int	main()
{
	int nb = 2147395600;
	printf("a raiz quadrade de %d eh %d",nb, ft_sqrt(nb));
}
*/
