/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 14:23:01 by radib             #+#    #+#             */
/*   Updated: 2025/02/05 17:07:31 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	loop(char a, char b, char c)
{
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b;
			while (c < '9')
			{
				c++;
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				if (a != '7')
				{
					write(1, ", ", 2);
				}
			}
			b++;
		}
		a++;
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '0';
	c = '0';
	loop(a, b, c);
}
/*
int	main(void)
{
	ft_print_comb();
}
*/
