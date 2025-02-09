/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 15:20:54 by radib             #+#    #+#             */
/*   Updated: 2025/02/08 16:48:20 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	lettrenum;
	lettrenum = 0;

	while (lettrenum < n)
	{
		if ('\0' != *src)
			*dest++ = *src++;
		else
		{
			*dest = *src;
			dest++;
		}
		lettrenum++;
	}
	return 0;
}
/*
int	main(void)
{
	char	src[10] = "bonjour";
	char	dest[10];
	ft_strncpy(dest, src,10);
	printf("%s",dest);
}
*/
