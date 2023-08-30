/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madougla <madougla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 14:21:25 by madougla          #+#    #+#             */
/*   Updated: 2023/08/03 12:16:17 by madougla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = NULL;
	while (*s)
	{
		if ((unsigned char)*s == (unsigned char)c)
			last = (char *)s;
		s++;
	}
	if ((unsigned char)*s == (unsigned char)c)
		return ((char *)s);
	return (last);
}
