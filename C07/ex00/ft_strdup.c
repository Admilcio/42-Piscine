/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-mata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 10:57:46 by ada-mata          #+#    #+#             */
/*   Updated: 2023/08/15 15:23:17 by ada-mata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*copy;
	int		n;

	n = 0;
	while (src[n] != '\0')
	{
		n++;
	}
	copy = (char *) malloc((n + 1) * sizeof(char));
	if (copy == NULL)
		return (NULL);
	n = 0;
	while (src[n] != '\0')
	{
		copy[n] = src[n];
		n++;
	}
	copy[n] = '\0';
	return (copy);
}
/*
int	main(void)
{
	char source[] = "Everything everywhere.";
	printf ("%s\n", ft_strdup(source));
	return (0);
}*/
