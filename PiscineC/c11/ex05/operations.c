/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 17:28:02 by thsehl            #+#    #+#             */
/*   Updated: 2022/02/24 17:28:25 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int	addition(int nb1, int nb2)
{
	return (nb1 + nb2);
}

int	soustraction(int nb1, int nb2)
{
	return (nb1 - nb2);
}

int	multiplication(int nb1, int nb2)
{
	return (nb1 * nb2);
}

int	division(int nb1, int nb2)
{
	return (nb1 / nb2);
}

int	modulo(int nb1, int nb2)
{
	return (nb1 % nb2);
}
