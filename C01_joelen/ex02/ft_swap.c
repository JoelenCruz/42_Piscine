/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 14:49:53 by jcruz-da          #+#    #+#             */
/*   Updated: 2022/07/17 14:51:59 by jcruz-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	i;	

	i = *a;
	*a = *b;
	*b = i;
}
/*
int main()
{
	int	jo;
	int	elen;
	
	jo = 15;
	elen = 10;
	printf("Antes da funcao ft_swap, JO tem:%d e em ELEN tem:%d.\n", jo, elen);
	ft_swap(&jo,&elen);
	printf("Depois da funcao ft_swap JO tem:%d e em ELEN tem:%d.", jo, elen);
}*/

//obs: swap cai nos exames de sexta!
