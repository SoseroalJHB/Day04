/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soseroal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 13:05:16 by soseroal          #+#    #+#             */
/*   Updated: 2020/07/17 13:42:30 by soseroal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index)
{
	if (index == 0)
	{
		return (0);
	}
	if (index < 0)
	{
		return (-1);
	}
	if (index == 1)
	{
		return (1);
	}

	return (ft_fibonacci(index - 1) + ft_fibonacci(index -2));
}
