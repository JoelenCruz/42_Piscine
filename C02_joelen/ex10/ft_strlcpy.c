/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 17:46:07 by jcruz-da          #+#    #+#             */
/*   Updated: 2022/07/20 17:46:09 by jcruz-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < size)
	{
		dest[i] = '\0';
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
#include <string.h>

int main(void) {
  char dest[90] = "testando";
  char *src = "42";
  
 
  //ft_strlcpy(dest ,src, 2);
   printf("%d", ft_strlcpy(dest ,src, 2));
    printf("%s", dest);
  return 0;
}
*/
