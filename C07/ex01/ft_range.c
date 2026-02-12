/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoorpra <mnoorpra@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 16:31:34 by mnoorpra          #+#    #+#             */
/*   Updated: 2026/02/11 16:37:29 by mnoorpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr;

	i = 0;
	arr = (int *)malloc((sizeof(int)) * (max - min));
	if (min >= max)
	{
		return ((void *) 0);
	}
	while (min < max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}
