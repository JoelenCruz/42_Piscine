/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 10:24:46 by jcruz-da          #+#    #+#             */
/*   Updated: 2022/07/18 10:24:48 by jcruz-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	c;

	index = 0;
	c = 0;
	while (index < (size / 2))
	{
		c = tab[index];
		tab[index] = tab[size - 1 - index];
		tab[size - 1 - index] = c;
		index++;
	}
}
/*
#include <unistd.h>
int main()
{
	int tab[9] = {10, 15, 20, 35, 40, 54, 06, 07, 18};
	ft_rev_int_tab(&tab[0], 9);
	for(int i =0; i < 9; i++)
	{
		printf("%d", tab[i]);
	}
}*/
