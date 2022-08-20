/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 12:15:14 by jcruz-da          #+#    #+#             */
/*   Updated: 2022/07/18 12:15:17 by jcruz-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_sort_int_tab(int *tab, int size)
{
	int	ponte;
	int	count;

	count = 0;
	while (count < (size - 1))
	{
		if (tab[count] > tab[count + 1])
		{
			ponte = tab[count];
			tab[count] = tab[count + 1];
			tab[count + 1] = ponte;
			count = 0;
		}
		else
			count++;
	}
}
/*
#include <stdio.h> 
int		main(void)
{
	int tab[11] = {30,40,10,3,5,2,4,8,16,20,0};
	ft_sort_int_tab(tab, 11);
	for(int i = 0; i < 11; i++)
	{
		printf("%d ", tab[i]); 
	}
}*/
