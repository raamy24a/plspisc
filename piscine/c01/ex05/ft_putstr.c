/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 10:43:14 by radib             #+#    #+#             */
/*   Updated: 2025/02/06 14:26:33 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	char lettre;
	lettre = *str;
	while (lettre != '\0')
	{
		write(1,&lettre,1);
		str++;
		lettre = *str;
	}
}
int	main(void)
{
	ft_putstr("bonjour");
}
