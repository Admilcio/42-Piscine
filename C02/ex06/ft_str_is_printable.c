/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-mata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 15:10:58 by ada-mata          #+#    #+#             */
/*   Updated: 2023/08/04 14:00:07 by ada-mata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
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
	char source[] = "Everything1 \n";
	char source1[] = "EVERYTHINGE ~";
	char source2[] = "everything";
	printf("%d\n", ft_str_is_printable(source));
	printf("%d\n", ft_str_is_printable(source1));
	printf("%d\n", ft_str_is_printable(source2));
	return (0);
}*/
