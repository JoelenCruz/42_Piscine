/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 19:41:29 by jcruz-da          #+#    #+#             */
/*   Updated: 2022/07/30 19:41:31 by jcruz-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	static int	*tab;
	int			i;
	int			cont_i;

	if (min >= max)
		return (0);
	tab = (int *)malloc((max - min) * sizeof(int));
	cont_i = min;
	i = 0;
	while (cont_i < max)
	{
		tab[i] = cont_i;
		i++;
		cont_i++;
	}
	return (tab);
}

/*
#include <stdio.h>
int	main(void)
{
	int	cur;

	int	*range = ft_range(2, 30);
	cur = 0;
	while (cur < 29)
	{
		printf("%d => %d\n", cur, range[cur]);
		cur++;
	}
}
*/

