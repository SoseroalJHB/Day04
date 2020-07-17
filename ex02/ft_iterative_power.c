/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soseroal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 12:13:16 by soseroal          #+#    #+#             */
/*   Updated: 2020/07/17 12:27:13 by soseroal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_iterative_power(int nb, int power)
{
	int result;

	if(power <= 0)
	{
		return 0;
	}
	while(power != 0)
	{
		result = result * nb;
		-- power;
	}

	return result;
}

