/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-mata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 15:10:58 by ada-mata          #+#    #+#             */
/*   Updated: 2023/08/04 13:52:20 by ada-mata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 90)
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
	char source[] = "Everything1";
	char source1[] = "EVERYTHINGE";
	char source2[] = "everything";
	printf("%d\n", ft_str_is_uppercase(source));
	printf("%d\n", ft_str_is_uppercase(source1));
	printf("%d\n", ft_str_is_uppercase(source2));
	return (0);
}*/
