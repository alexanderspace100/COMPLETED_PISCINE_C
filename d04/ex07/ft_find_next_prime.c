/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgenkarlson <RTFM@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 12:33:14 by evgenkarlson      #+#    #+#             */
/*   Updated: 2020/02/15 10:51:23 by evgenkarlson     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* - Скомпилируй файл тест. В нем можно увидеть как работает эта функция вживую */

/* ************************************************************************** */
/* ************************************************************************** */
/* **************************************************************************


Create a function that returns the next prime number greater or equal to the number given as argument.
Создайте функцию, которая возвращает следующее простое число, большее или равное числу, указанному в качестве аргумента.

Your function must return its result in less than two seconds.
Ваша функция должна вернуть свой результат менее чем за две секунды.


/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */


int		ft_is_prime(int nb)
{
	int i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		else
			i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	while (nb <= 2147483647)
	{
		if (ft_is_prime(nb))
			return (nb);
		nb++;
	}
	return (2147483647);
}


/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */


static int	ft_is_prime(int nb)
{
	int i;

	if (nb < 2)
		return (0);
	i = 2;
	if (nb <= 0)
		return (0);
	while (i <= (nb / 2))
	{
		if (!(nb % i))
			return (0);
		else
			i += 1;
	}
	return (1);
}

int			ft_find_next_prime(int nb)
{
	nb += 1;
	while (!ft_is_prime(nb))
		nb += 1;
	return (nb);
}


/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */