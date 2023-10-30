/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-mata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 17:05:22 by ada-mata          #+#    #+#             */
/*   Updated: 2023/08/13 14:32:53 by ada-mata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_prime(int nb)
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

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (nb >= 2)
	{
		if (is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (0);
}
/*
int main() 
{
    printf("%d\n", ft_find_next_prime(5));
    printf("%d\n", ft_find_next_prime(10));
    printf("%d\n", ft_find_next_prime(20));
    return 0;
}*/
