/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madougla <madougla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 14:43:46 by madougla          #+#    #+#             */
/*   Updated: 2023/08/03 12:32:24 by madougla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n);

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dst_ptr;
	const unsigned char	*src_ptr;

	dst_ptr = (unsigned char *)dst;
	src_ptr = (const unsigned char *)src;
	if (dst_ptr < src_ptr)
		while (len--)
			*dst_ptr++ = *src_ptr++;
	else if (dst_ptr > src_ptr)
	{
		dst_ptr += len;
		src_ptr += len;
		while (len--)
			*--dst_ptr = *--src_ptr;
	}
	return (dst);
}
