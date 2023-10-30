/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-mata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 18:14:43 by ada-mata          #+#    #+#             */
/*   Updated: 2023/08/13 20:00:32 by ada-mata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_combination(char *combination, int length)
{
	write (1, combination, length);
	if (combination[0] != '9' - length + 1)
		write (1, ", ", 2);
}

void	generate_combinations(int prev, int n, int length, char *combination)
{
	int	i;

	if (n == length)
	{
		print_combination(combination, length);
		return ;
	}
	i = prev;
	while (++i <= 9)
	{
		combination[n] = '0' + i;
		generate_combinations(i, n + 1, length, combination);
	}
}

void	ft_print_combn(int n)
{
	char	combination[10];
	int		i;

	if (n < 1 || n > 10)
		return ;
	i = 0;
	while (i <= 10 - n)
	{
		combination[0] = '0' + i;
		generate_combinations(i, 1, n, combination);
		++i;
	}
}
/*
int main(void)
{
    ft_print_combn(2);
    return (0);
}*/
