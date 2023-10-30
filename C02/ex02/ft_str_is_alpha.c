/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-mata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 11:24:43 by ada-mata          #+#    #+#             */
/*   Updated: 2023/08/05 11:58:39 by ada-mata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] < 65 || str[i] > 90) && 
			(str[i] < 97 || str[i] > 122))
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
	char source[] = "Everything";
	char source1[] = "Everywhere12409";
	char source2[] = "653*9^%$#123456";
	char source3[] = "";
	printf("%d\n", ft_str_is_alpha(source));
	printf("%d\n", ft_str_is_alpha(source1));
	printf("%d\n", ft_str_is_alpha(source2));
	printf("%d\n", ft_str_is_alpha(source3));
	return (0);
}*/
