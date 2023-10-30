/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-mata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 17:07:40 by ada-mata          #+#    #+#             */
/*   Updated: 2023/08/06 18:56:07 by ada-mata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	track;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	track = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[track])
		{
			track++;
		}
		else
		{
			i = i - track;
			track = 0;
		}
		i++;
		if (to_find[track] == '\0')
		{
			return (&str[i - track]);
		}
	}
	return (NULL);
}
/*
int	main(void)
{
	char haystack[] = "Everything RRReverywhere is right now";
	char needle[] = "everywhere";
	printf("%s\n", ft_strstr(haystack, needle));
}*/
