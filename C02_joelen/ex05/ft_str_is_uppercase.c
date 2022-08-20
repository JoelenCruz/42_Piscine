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

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 65 || str[i] > 90)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int main()
{
    int result;

    result = ft_str_is_uppercase("1232465432");
    printf("Result: %d\n", result);

    result = ft_str_is_uppercase("QWERTY");
    printf("Result: %d\n", result);

    result = ft_str_is_uppercase("&&asdf1234");
    printf("Result: %d\n", result);

    result = ft_str_is_uppercase("SSaaaaanbgkkS");
    printf("Result: %d\n", result);

    result = ft_str_is_uppercase("");
    printf("Result: %d\n", result);
    
    return 0;
}*/
