/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-mata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:17:52 by ada-mata          #+#    #+#             */
/*   Updated: 2023/08/01 13:20:19 by ada-mata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main (void)
{
	int div;
	int mod;

	ft_div_mod(10, 5, &div, &mod);
	printf("The div result is %d\nThe mod result is %d\n", div, mod);
	return (0);
}*/
