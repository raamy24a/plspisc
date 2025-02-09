/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 10:16:44 by radib             #+#    #+#             */
/*   Updated: 2025/02/09 16:49:41 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_printable(char *str)
{
	int i;
	i = 1;
	while (str[i] != '\0')
	{
		if (str[i] <= 126 && str[i] >= 32)
			i++;
		else
		{
			printf("0");
			return 0;
		}
	}
	printf("1");
	return 1;
}
/*
int	main(void)
{
	char str[]="b\nonjor";
	ft_str_is_printable(str);
}
*/
