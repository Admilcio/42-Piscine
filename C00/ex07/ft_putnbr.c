/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-mata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 11:35:17 by ada-mata          #+#    #+#             */
/*   Updated: 2023/08/08 15:43:39 by ada-mata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb <= 2147483647 && nb >= -2147483648)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			if (nb == -2147483648)
			{
				ft_putchar('2');
				ft_putnbr(147483648); 
			}
			else
				ft_putnbr(-nb);
		}
		if (nb >= 0)
		{
			if (nb >= 10)
			{
				ft_putnbr(nb / 10);
				ft_putnbr(nb % 10);
			}
			else
				ft_putchar(nb + 48);
		}
	}
}
/*
int	main(void)
{
	int nb = -342;

	ft_putnbr(nb);
	return (0);
}*/
