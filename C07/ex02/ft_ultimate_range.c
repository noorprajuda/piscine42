/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoorpra <mnoorpra@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 16:55:07 by mnoorpra          #+#    #+#             */
/*   Updated: 2026/02/11 18:28:44 by mnoorpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	size = (max - min);
	if (min >= max)
	{
		*range = ((void *) 0);
		return (0);
	}
	*range = malloc(size * (sizeof(int)));
	if (*range != ((void *) 0))
	{
		i = 0;
		while (min < max)
		{
			(*range)[i] = min;
			min++;
			i++;
		}
		return (size);
	}
	else
	{
		return (-1);
	}
}
