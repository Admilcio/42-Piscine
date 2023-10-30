/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-mata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 18:10:01 by ada-mata          #+#    #+#             */
/*   Updated: 2023/08/01 12:56:10 by ada-mata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	end;

	i = 0;
	end = size - 1;
	while (i < end)
	{
		temp = tab[i];
		tab[i] = tab[end];
		tab[end] = temp;
		i++;
		end--;
	}
}
/*
int	main(void)
{
	int	num[8] = {1, 2, 3, 4, 5, 6, 7, 8};
	int 	size;
	int	i;

	i = 0;
	size = sizeof(num) / sizeof(num[0]);

	while(i < size)
{
	printf("%d",num[i]);
	i++;
}
	printf("\n");
	ft_rev_int_tab(num, size);
	i = 0;
	while(i < size)
{
	printf("%d", num[i]);
	i++;
}
	return (0);
}*/
