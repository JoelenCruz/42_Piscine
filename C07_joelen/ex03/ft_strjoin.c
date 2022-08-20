/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 21:52:27 by jcruz-da          #+#    #+#             */
/*   Updated: 2022/07/30 21:52:29 by jcruz-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	destcur;

	i = 0;
	destcur = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[destcur] = src[i];
		i++;
		destcur++;
	}
	dest[destcur] = '\0';
	return (dest);
}

int	get_size_of_future_str(int size, char **strs, char *sep)
{
	int	joined_size;
	int	cur;

	joined_size = 0;
	cur = -1;
	while (cur++, cur < size)
		joined_size += ft_strlen(strs[cur]);
	joined_size += (size - 1) * ft_strlen(sep);
	return (joined_size);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*joined;
	int		cur;
	int		joined_size;

	if (size <= 0)
	{
		joined = (char *)malloc(0);
		return (joined);
	}
	joined_size = get_size_of_future_str(size, strs, sep);
	joined = (char *)malloc(sizeof(char) * (joined_size + 1));
	while (joined_size-- >= 0)
		joined[joined_size] = '\0';
	cur = -1;
	while (cur++, cur < size)
	{
		joined = ft_strcat(joined, strs[cur]);
		if (cur != size - 1)
			joined = ft_strcat(joined, sep);
	}
	return (joined);
}
/*
#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int main(void)
{
	char	**strs;

	strs = (char **)malloc(sizeof(char *) * 3);
	strs[0] = (char *)malloc(sizeof(char) * 6);
	strs[0] = "Hello";
	strs[1] = (char *)malloc(sizeof(char) * 6);
	strs[1] = "World";
	strs[2] = (char *)malloc(sizeof(char) * 3);
	strs[2] = "!!";
	printf("%s", ft_strjoin(3, strs, "/bin/sh."));
}
*/
