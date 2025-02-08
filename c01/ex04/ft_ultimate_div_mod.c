/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 10:21:39 by radib             #+#    #+#             */
/*   Updated: 2025/02/06 10:41:45 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int*b)
{
	int	i;
	int	j;

	i = *a;
	j = *b;
	*a = i / j;
	*b = i % j;
}
/*
int	main(void)
{
	int a;
	int b;
	a = 12;
	b = 4;
	ft_ultimate_div_mod(&a, &b);
	printf("%d", a);
	printf("%d", b);
}
*/
