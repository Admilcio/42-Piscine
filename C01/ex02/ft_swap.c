/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-mata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 12:56:35 by ada-mata          #+#    #+#             */
/*   Updated: 2023/08/01 13:17:27 by ada-mata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int	main(void)
{
	int	num1;
	int	num2;

	num1 = 10;
	num2 = 20;
	printf ("O numero a = %d e o numero b = %d\n", num1, num2);
	ft_swap (&num1, &num2);
	printf ("O numero a = %d e o numero b = %d\n", num1, num2);
	return (0);
}*/
