/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-mata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 16:08:05 by ada-mata          #+#    #+#             */
/*   Updated: 2023/08/09 15:41:37 by ada-mata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*nome;
	int		i;

	i = 0;
	nome = argv[0];
	(void)argc;
	while (nome[i] != '\0')
	{
		write (1, &nome[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
