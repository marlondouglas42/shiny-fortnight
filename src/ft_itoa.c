/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madougla <madougla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 11:16:28 by madougla          #+#    #+#             */
/*   Updated: 2023/08/07 11:35:52 by madougla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

static int	get_number_size(long n, int is_negative)
{
	int		number_size;

	number_size = 1;
	while (n / 10 > 0)
	{
		n /= 10;
		number_size++;
	}
	if (is_negative)
	{
		number_size++;
	}
	return (number_size);
}

static void	change_number(char *result, long n, int n_size, int is_negative)
{
	result[n_size] = '\0';
	while (--n_size >= 0)
	{
		result[n_size] = '0' + (n % 10);
		n /= 10;
	}
	if (is_negative)
	{
		result[0] = '-';
	}
}

char	*ft_itoa(int n)
{
	long	n2;
	int		number_size;
	char	*result;
	int		is_negative;

	if (n < 0)
	{
		n2 = -(long)n;
		is_negative = 1;
	}
	else
	{
		is_negative = 0;
		n2 = n;
	}
	number_size = get_number_size(n2, is_negative);
	result = malloc(number_size + 1);
	if (!result)
	{
		return (NULL);
	}
	change_number(result, n2, number_size, is_negative);
	return (result);
}

// int main(void)
// {
// 	printf("x: %s\n", ft_itoa(-2147483645));
// 	printf("x: %s\n", ft_itoa(-2147483646));
// 	printf("x: %s\n", ft_itoa(-2147483647));
// 	printf("x: %s\n", ft_itoa(-2147483648));
// 	return (0);
// }
