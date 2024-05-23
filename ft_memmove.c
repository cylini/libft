/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cylini <cylini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 18:11:04 by cylini            #+#    #+#             */
/*   Updated: 2024/05/23 15:05:26 by carzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*destt;
	const unsigned char	*srcc;

	destt = (unsigned char *) dest;
	srcc = (const unsigned char *) src;
	if (!dest && !src)
		return (0);
	if (src < dest)
	{
		destt = destt + (n - 1);
		srcc = srcc + (n - 1);
		while (n-- > 0)
		{
			*destt-- = *srcc--;
		}
		return (dest);
	}
	else
	{
		while (n-- > 0)
		{
			*destt++ = *srcc++;
		}
		return (dest);
	}
}
/*
int	main(void)
{
	char	dest[10] = "abcdefghi";

	ft_memmove(dest + 5, dest + 3, 3);
	printf("%s\n", dest);
	return (0);
}*/
