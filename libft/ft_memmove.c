/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdone < mdone@student.42kocaeli.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 13:11:11 by mdone             #+#    #+#             */
/*   Updated: 2023/07/15 15:12:32 by mdone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (!dst && !src)
		return (0);
	if (dst > src)
	{
		while (len--)
		*((unsigned char *)(dst + len)) = *((unsigned char *)(src + len));
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
int main(){
	char *src = "123456789";
	char *dst = "123456789";
	ft_memmove(dst, src, 6);
	printf("%s", dst);
	return 0;
}
