/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-mata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 18:55:07 by ada-mata          #+#    #+#             */
/*   Updated: 2023/08/06 19:06:43 by ada-mata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		if (s1[i] == '\0' || s2[i] == '\0')
		{
			return (0);
		}
		i++;
		n--;
	}
	return (0);
}
/*
int main(void)
{
	char str1[] = "Helln";
	char str2[] = "Hellm";
	int n = 5;

	int result = ft_strncmp(str1, str2, n);
	printf("%d\n", result);
}*/
