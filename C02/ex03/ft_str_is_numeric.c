/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-mata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 11:24:43 by ada-mata          #+#    #+#             */
/*   Updated: 2023/08/04 13:29:28 by ada-mata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] < 48) || (str[i] > 57))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char source[] = "12345";
	char source1[] = "Everywhere12409";
	char source2[] = "653*9^%$#123456";
	char source3[] = "";
	printf("%d\n", ft_str_is_numeric(source));
	printf("%d\n", ft_str_is_numeric(source1));
	printf("%d\n", ft_str_is_numeric(source2));
	printf("%d\n", ft_str_is_numeric(source3));
	return (0);
}*/
