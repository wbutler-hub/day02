/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbutler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 14:51:01 by wbutler           #+#    #+#             */
/*   Updated: 2020/06/19 13:43:08 by wbutler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar (char c) 
{
	write(1, &c, 1);
}
void ft_is_negative (int n)
{
	if (n<0)

	{
		
		ft_putchar('N');
	} 
	else 

	{

		ft_putchar('P');
	}
}
int main()
{ 
	ft_is_negative(-3);
}

