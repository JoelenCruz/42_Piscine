/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 14:06:51 by jcruz-da          #+#    #+#             */
/*   Updated: 2022/07/16 14:07:23 by jcruz-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void    ft_putchar(char c)
{
    write(STDOUT_FILENO, &c, 1);
}

void    comb(int start, int n)
{
    int i;

    if (n == 0)
    {
        ft_putchar(',');
        ft_putchar(' ');
        return ;
    }
    i = start + 1;
    while (i < 10)
    {
        ft_putchar(start + '0');
        ft_putchar(i + '0');
        comb(i, n - 1);
        i++;
    }
}

void	ft_print_combn(int n)
{
    comb(0, n);
}
/*
int	main()
{
	ft_print_combn(2);
}
*/
