/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 10:17:13 by radib             #+#    #+#             */
/*   Updated: 2025/02/08 15:14:52 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	lettrenum;
	lettrenum = 0;
	while (*str != '\0')
	{
		str++; 
		lettrenum++;
	}
	return lettrenum;
}

char	*ft_strcpy(char *dest, char *src)
{
	int	lettrenum;
	lettrenum = ft_strlen(src);

	while (lettrenum >= 0)
	{
		*dest++ = *src++;
		lettrenum--;
	}
	return 0;
}

int	main(void)
{
	char	src[8] = "bonjour";
	char	dest[8];
	ft_strcpy(dest, src);
}
