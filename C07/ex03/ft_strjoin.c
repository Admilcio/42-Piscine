/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-mata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 15:05:53 by ada-mata          #+#    #+#             */
/*   Updated: 2023/08/15 18:25:31 by ada-mata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	full_len(int size, char **strs, char *sep)
{
	int	total_len;
	int	i;

	total_len = 0;
	i = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		if (i < size - 1)
			total_len += ft_strlen(sep);
		i++;
	}
	return (total_len + 1);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest + i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_len;
	char	*result;
	char	*pos;
	int		i;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	total_len = full_len(size, strs, sep);
	result = (char *)malloc(sizeof(char) * total_len);
	if (!result)
		return (NULL);
	pos = result;
	i = 0;
	while (i < size)
	{
		pos = ft_strcpy(pos, strs[i]);
		if (i < size - 1)
			pos = ft_strcpy(pos, sep);
		i++;
	}
	*pos = '\0';
	return (result);
}
/*
int main(void)
{
        char *strs[] = {"all", "are", "the", "same"};
        int size = 4;
        char *sep = "|| ";
        char *result;
        result = ft_strjoin(size, strs, sep);
        printf("%s\n", result);
        free(result);
        return 0;
}*/
