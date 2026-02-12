/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoorpra <mnoorpra@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 20:11:25 by mnoorpra          #+#    #+#             */
/*   Updated: 2026/02/10 21:02:01 by mnoorpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_program_name(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i])
	{
		c = str[i];
		write(1, &c, 1);
		i++;
	}
	c = '\n';
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	if (argc < 1)
	{
		return (0);
	}
	else
	{
		ft_print_program_name(argv[0]);
	}
	return (0);
}
