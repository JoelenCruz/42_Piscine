/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 16:56:33 by jcruz-da          #+#    #+#             */
/*   Updated: 2022/07/17 16:56:35 by jcruz-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}
/*
#include <stdio.h>

int		ft_strlen(char *str);

int		main(void)
{
	char *str;

	str = "Joelen";
	printf("numero de letras em marco: %d\n",ft_strlen(str));
}*/
