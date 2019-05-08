/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdudley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 19:09:01 by bdudley           #+#    #+#             */
/*   Updated: 2019/02/22 16:40:22 by bdudley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*cdst;
	unsigned char	*csrc;
	int				i;

	i = -1;
	if (dst == NULL && src == NULL)
		return (NULL);
	cdst = (unsigned char *)dst;
	csrc = (unsigned char *)src;
	while (n-- > 0)
	{
		i++;
		cdst[i] = csrc[i];
	}
	return (dst);
}
