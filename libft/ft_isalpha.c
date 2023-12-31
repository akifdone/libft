/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdone < mdone@student.42kocaeli.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 13:09:14 by mdone             #+#    #+#             */
/*   Updated: 2023/07/07 20:10:34 by mdone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int i)
{
	if (!(('a' <= i && i <= 'z') || ('A' <= i && i <= 'Z')))
		return (0);
	return (1);
}
