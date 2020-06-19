/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabets.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbutler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 13:12:19 by wbutler           #+#    #+#             */
/*   Updated: 2020/06/19 13:23:48 by wbutler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_reverse_alphabet(void)
{
	char c;

	c ='z';
	while(c >= 'a')
	{
		ft_putchar(c);
		c--;
	}
}

