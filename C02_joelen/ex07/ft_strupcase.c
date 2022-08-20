/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 17:46:07 by jcruz-da          #+#    #+#             */
/*   Updated: 2022/07/20 17:46:09 by jcruz-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}	
/*
#include <string.h>
#include <stdio.h>

int main(void)
{
	char str1[] = "ALO_alo_tesTEStes!";
	printf("ANTES DA FUNCAO: %s ", str1);
	printf("DEPOIS DA FUNCAO: %s ", ft_strupcase(str1));

	return (0);
}
*/
