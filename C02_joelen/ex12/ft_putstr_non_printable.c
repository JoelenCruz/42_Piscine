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
void	ft_putstr_non_printable(char *str)
{
	int	i;
	unsigned char	a;
	char	c;

	i = 0;
	a = 0x0;
	while (str[i] != '\0')
	{
		if (str[i] <= 31 || str[i] == 127)
	{
		a = str[i];
		write(1, &a, 1);
	}
	else
	{
		c = str[i];
		write(1, &c, 1);
        }
	i++;
	}
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
    char a[] = "\n au revoir\a";
    char b[] = "omellette du fromage\b";
    char c[] = "jojo@ca6va\e fef";
    char d[] = " Batata \x7F rfg";
    char e[] = "roquefort`[e{forte-e_tem,bolor \n feff";
    char f[] = " we 9are 78familly \x1F rgfenf";

    ft_putstr_non_printable(a);
    ft_putstr_non_printable(b);
    ft_putstr_non_printable(c);
    ft_putstr_non_printable(d);
    ft_putstr_non_printable(e);
    ft_putstr_non_printable(f);
}
*/
