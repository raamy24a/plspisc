/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 14:30:55 by radib             #+#    #+#             */
/*   Updated: 2025/02/07 10:04:29 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	compteur;

	temp = 0;
	compteur = 0;
	while (compteur - 1 < size / 2)
	{
		temp = tab [compteur];
		tab [compteur] = tab [size - 1];
		tab [size - 1] = temp;
		size--;
		compteur++;
	}
}
/*
int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 5, 6,7 ,8 ,9 ,10};
	int	size = 10;
	ft_rev_int_tab(tab, size);
}
*/
