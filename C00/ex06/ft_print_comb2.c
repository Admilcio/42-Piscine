/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-mata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 17:23:24 by ada-mata          #+#    #+#             */
/*   Updated: 2023/08/13 20:08:23 by ada-mata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_write_comb(int a, int b, bool last)
{
	ft_putchar (48 + a / 10);
	ft_putchar (48 + a % 10);
	ft_putchar (' ');
	ft_putchar (48 + b / 10);
	ft_putchar (48 + b % 10);
	if (last)
	{
		ft_putchar (',');
		ft_putchar (' ');
	}
}

void	ft_print_comb2(void)
{
	bool	last;
	int		a;
	int		b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			last = !(a == 98 && b == 99);
			ft_write_comb (a, b, last);
			b++;
		}
		a++;
	}
}
/*
int main (void)
{
	ft_print_comb2();
	return (0);
}*/
