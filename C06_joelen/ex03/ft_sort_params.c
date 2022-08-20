/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 12:13:54 by jcruz-da          #+#    #+#             */
/*   Updated: 2022/07/21 12:13:56 by jcruz-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <string.h>

void	ft_putstr(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}

int	main(int argc, char const *argv[])
{
	int	i;
	int	j;
	int	swap;
	int	order[214960];

	i = 0;
	while (++i < argc)
		order[i] = i;
	i = 0;
	while (++i < argc)
	{
		j = i - 1;
		while (++j < argc)
		{
			if (ft_strcmp(argv[order[i]], argv[order[j]]) > 0)
			{
				swap = order[i];
				order[i] = order[j];
				order[j] = swap;
			}	
		}
		ft_putstr(argv[order[i]]);
	}
	return (0);
}
