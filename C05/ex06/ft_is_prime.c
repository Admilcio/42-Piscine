/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-mata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 15:40:57 by ada-mata          #+#    #+#             */
/*   Updated: 2023/08/15 11:29:15 by ada-mata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	prime;

	if (nb <= 1)
		return (0);
	prime = 2;
	while (prime <= nb / prime)
	{
		if (nb % prime == 0)
			return (0);
		else
			prime++;
	}
	return (1);
}
/*
int main() 
{
    printf("%d\n", ft_is_prime(2147483647));   // Deve retornar 1 (2 é primo)
    printf("%d\n", ft_is_prime(7));   // Deve retornar 1 (7 é primo)
    printf("%d\n", ft_is_prime(10));  // Deve retornar 0 (10 não é primo)
    printf("%d\n", ft_is_prime(15));  // Deve retornar 0 (15 não é primo)
    return 0;
}*/
