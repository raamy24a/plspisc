/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 13:44:06 by radib             #+#    #+#             */
/*   Updated: 2025/02/06 17:05:11 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	char lettre;
	int lettrenum;

	lettrenum = '0';
	lettre = *str;
	while (lettre != '\0')
	{
		lettrenum++;
		str++;
		lettre = *str;
	}
	return lettrenum;
}
