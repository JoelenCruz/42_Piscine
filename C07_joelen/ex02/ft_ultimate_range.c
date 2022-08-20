/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 21:35:54 by jcruz-da          #+#    #+#             */
/*   Updated: 2022/07/30 21:35:58 by jcruz-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	cur;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min));
	if (*range == NULL)
		return (-1);
	cur = 0;
	while (min < max)
	{
		(*range)[cur] = min;
		cur++;
		min++;
	}
	return (cur);
}
/*
#include <stdio.h>
int	main(void)
{
	int	*range;
	int	size;
	int	cur;

	size = ft_ultimate_range(&range, 8, 50);
	cur = 0;
	while (cur < size)
	{
		printf("%d => %d\n", cur, range[cur]);
		cur++;
	}
}
*/
