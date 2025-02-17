/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 10:13:16 by radib             #+#    #+#             */
/*   Updated: 2025/02/09 10:15:22 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (*str <='Z' && *str >= 'A')
			str++;
		else
			return 0;
	}
	return 1;
}
