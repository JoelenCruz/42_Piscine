/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 22:02:08 by jcruz-da          #+#    #+#             */
/*   Updated: 2022/07/23 22:02:10 by jcruz-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strstr(char *str, char *to_find)
{
	int	len;
	int	i;
	int	j;

	len = 0;
	while (to_find[len])
	{
		len++;
	}
	if (len == 0)
		return (str);
	i = 0;
	j = 0;
	while (str[i])
	{
		while (to_find[j] == str[i + j])
		{
			if (j + 1 == len)
				return (str + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main()
{
	char str[] = "oioitudoaaaaaaaaaaaaaaaaa";
	//char fnd[] = "";
	char fnd[] = "tudo";
	printf("%s", ft_strstr(str, fnd));
	return (0);
}
*/

