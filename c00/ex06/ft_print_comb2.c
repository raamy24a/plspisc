/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 11:09:52 by radib             #+#    #+#             */
/*   Updated: 2025/02/05 12:27:16 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	loop(char a, char b, char c, char d)
{
	while (a <= '9')
	{
		b = '0';
		while (b < '9')
		{
			b++;
			write(1, &a,1);
			write(1, &b,1);
		}
		a++;
		while (b
	}
	
}
void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;
	a = '0';
	b = '0';
	c = '0';
	d = '0';
	loop(a, b, c, d);
}

int	main(void)
{
	ft_print_comb2();
}
