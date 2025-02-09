/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 11:37:16 by radib             #+#    #+#             */
/*   Updated: 2025/02/04 15:01:49 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	write (1,"abcdefghijklmnopqrstuvwxyz", 26);
}
int	main(void)
{
	        ft_print_alphabet();
		return(0);
}

