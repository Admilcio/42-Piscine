/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedalexa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 19:59:04 by pedalexa          #+#    #+#             */
/*   Updated: 2023/08/09 11:05:08 by ada-mata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	dest_len;
	unsigned int	s;
	unsigned int	i;

	src_len = 0;
	dest_len = 0;
	s = 0;
	i = 0;
	while (src[src_len])
		src_len++;
	while (dest[dest_len])
		dest_len++;
	if (size <= dest_len)
		s = src_len + size;
	else
		s = src_len + dest_len;
	while (src[i] && dest_len + 1 < size)
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}
	dest[dest_len] = '\0';
	return (s);
}
/*
int main (void)
{
	char dest[100] = "abc";
	char src[] = "def";
	int num = 3;
	int numstr = ft_strlcat(dest, src, num);
	printf("%s \n", dest); 
	printf("%d\n", numstr);
}*/
