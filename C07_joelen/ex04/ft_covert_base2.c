/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_covert_base2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 22:15:02 by jcruz-da          #+#    #+#             */
/*   Updated: 2022/07/30 22:15:05 by jcruz-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

char	*rev_str(char *str)
{
	int		size;
	int		i;
	char	tmp;

	size = ft_strlen(str) - 1;
	i = 0;
	while (i < size - i)
	{
		tmp = str[i];
		str[i] = str[size - i];
		str[size - i] = tmp;
		i++;
	}
	return (str);
}

int	pos_in_str(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}
