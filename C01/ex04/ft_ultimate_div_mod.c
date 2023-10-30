/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-mata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:56:24 by ada-mata          #+#    #+#             */
/*   Updated: 2023/08/01 16:26:03 by ada-mata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}
/*
int	main(void)
{
	int	num1;
	int	num2;

	num1 = 10;
	num2 = 5;
	ft_ultimate_div_mod(&num1, &num2);
	printf("The div result is %d\nAnd the reuslt of the mod is %d\n", num1, num2);
	return (0);
}*/
