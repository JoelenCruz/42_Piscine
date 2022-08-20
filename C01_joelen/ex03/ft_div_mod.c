/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 15:50:34 by jcruz-da          #+#    #+#             */
/*   Updated: 2022/07/17 15:50:40 by jcruz-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int		main()
{
	int a = 13;
	int b = 0;
	int div = 0;
  	int mod = 0;
  	int *pdiv = &div;
  	int *pmod = &mod;
	
	ft_div_mod(a, b, pdiv, pmod);
  
  	printf("%d %d %d %d", a, b, div, mod);
  	return 0;
}
*/

//ft_div_mod cai no exame de sexta!
