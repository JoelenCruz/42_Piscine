/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:47:12 by jcruz-da          #+#    #+#             */
/*   Updated: 2022/07/19 17:47:14 by jcruz-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
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

    result = ft_str_is_alpha("asdf");
    printf("Result: %d\n", result);

    result = ft_str_is_alpha("QWERTY");
    printf("Result: %d\n", result);

    result = ft_str_is_alpha("&&asdf1234");
    printf("Result: %d\n", result);

    result = ft_str_is_alpha("999234@@");
    printf("Result: %d\n", result);

    result = ft_str_is_alpha("");
    printf("Result: %d\n", result);
    
    return 0;
}
*/
