/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-mata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 13:53:09 by ada-mata          #+#    #+#             */
/*   Updated: 2023/08/15 15:21:42 by ada-mata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		n;
	int		i;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	n = max - min;
	*range = (int *) malloc(n * sizeof(int));
	if (!(*range))
	{
		*range = 0;
		return (-1);
	}
	i = 0;
	while (i < n)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (n);
}
/*
int main (void)
{
	int *num;
	int a = 10;
	int b = 30;

	int result = ft_ultimate_range(&num, a, b);
	int i = 0;
	while(i < result)
	{
		printf("%d ", num[i]);
		i++;
	}
	free(num);
	return (0);
}*/
