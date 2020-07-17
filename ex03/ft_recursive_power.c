/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soseroal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 12:28:28 by soseroal          #+#    #+#             */
/*   Updated: 2020/07/17 13:02:05 by soseroal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int number, int power)
{
	int		a;

	
	if(power == 0)
	{
		return (1);
	}

	else if(power <  0)
	{
	return (0);
	}
	else
	{
		a = number *ft_recursive_power(number, power -1);
	}
	return (a);
}

