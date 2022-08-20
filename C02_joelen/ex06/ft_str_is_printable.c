/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 16:56:54 by jcruz-da          #+#    #+#             */
/*   Updated: 2022/07/20 16:56:58 by jcruz-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32)
		{
			return (0);
		}
		else if (str[0] == '\0')
		{
			return (1);
		}
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	s[10] = "";
	char	*str = s;

	ft_str_is_printable(str);
	printf("%d", ft_str_is_printable(str));
	return (0);
}
*/

