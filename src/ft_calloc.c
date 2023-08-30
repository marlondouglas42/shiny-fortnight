/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madougla <madougla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 14:41:18 by madougla          #+#    #+#             */
/*   Updated: 2023/08/11 11:36:07 by madougla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

	// printf("total_size: %zu\n", count);
	// if (count == '\0' || size == '\0' || total_size / size != count)
void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	void	*ptr;

	total_size = count * size;
	if (!size || !count || total_size <= 0)
	{
		return (malloc(0));
	}
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total_size);
	return (ptr);
}

// int main(void)
// {
// 	void *ptr;
// 	// ptr = ft_calloc(0, 0);
// 	// ptr = ft_calloc(1, 0);
// 	// ptr = ft_calloc(0, 1);
// 	// ptr = ft_calloc(-1, 0);
// 	// ptr = ft_calloc(0, -1);
// 	// ptr = ft_calloc(1, 1);
// 	ptr = ft_calloc(-5, -5);
// }
