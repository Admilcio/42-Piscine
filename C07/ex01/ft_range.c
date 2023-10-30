/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-mata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 11:51:52 by ada-mata          #+#    #+#             */
/*   Updated: 2023/08/15 18:08:58 by ada-mata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;
	int	n;

	if (min >= max)
		return (NULL);
	n = max - min;
	range = (int *) malloc(n * sizeof(int));
	if (range == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}
/*
int main(void)
{
	int *result = ft_range(10,30);
	int i = 0;
	while (i < 20)
	{
		printf("%d, ", result[i]);
		i++;
	}
	free(result);
	return (0);
}*/
