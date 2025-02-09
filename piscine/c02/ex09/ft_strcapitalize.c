/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 11:10:15 by radib             #+#    #+#             */
/*   Updated: 2025/02/09 14:17:50 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	ft_strlowcase(char *str)
{
	while (*str != '\0')
	{
		if (*str <='Z' && *str >= 'A')
			*str += 32;
		str++;
	}
	return (*str);
}

char *ft_strcapitalize(char *str)
{
	ft_strlowcase(str);
	while (*str != '\0')
	{
		if ((*str <='z' && *str >= 'a')||(*str <='Z' && *str >= 'A'))
		{
			if (*str--!=((*str <='z' && *str >= 'a')||(*str <='Z' && *str >= 'A')))
			{
				str++;
				str -= 32;
			}
		}
		*str++;
	}
	return (str);
}
int	main(void)
{
	char 	mot[] ="bonjour tout Va Bien J'AI MES DIX+DOIGTS+mes dix mains1  :kikj !42hgdf 42rzg";
	printf("%s", ft_strcapitalize(mot));
	return (0);
}
