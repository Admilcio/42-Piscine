/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-mata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 17:55:10 by ada-mata          #+#    #+#             */
/*   Updated: 2023/08/04 14:10:09 by ada-mata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	caps;

	i = 0;
	caps = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		if (caps == 0 && (str[i] >= 97 && str[i] <= 122))
		{
			str[i] = str[i] - 32;
		}
		if ((str[i] >= 48 && str[i] <= 57) || (str[i] >= 65 && str[i] <= 90) || 
			(str[i] >= 97 && str[i] <= 122))
		{
			caps = 1;
		}
		else
			caps = 0;
		i++;
	}
	return (str);
}
/*
int main()
{
	char myString[] = "ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	printf("%s\n", ft_strcapitalize(myString));
	return 0;
}*/
