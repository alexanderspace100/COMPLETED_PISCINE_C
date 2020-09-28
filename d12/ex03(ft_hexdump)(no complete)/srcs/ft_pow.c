/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgenkarlson <RTFM@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 12:33:14 by evgenkarlson      #+#    #+#             */
/*   Updated: 2020/09/28 12:59:55 by evgenkarlson     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_pow(int nb, int power)	/* Функция возведения в степень */
{
	int	result;						/* обьявляем переменную для хранения добытого результата */

	result = 1;						/* инициализируем ее единицей для начала вычислений результата возведения в степень */
	if(power < 0)					/* Проверяем соответствует ли число в степени условиям */
		return (0);					/* Если не соответствует то завершаем функцию и возвращаем ноль */
	if(power == 0)					/* Проверяем соответствует ли число в степени условиям */
		return (1);					/* Если не соответствует то завершаем функцию и возвращаем ноль */
	while (power--)					/* Запускаем цикл который умножит переменную 'result' на 'nb' столько раз сколько записано в 'power'. Возведет в 'nb' в степень 'power'. */
		result *= nb;				/* Умножая 'result' на 'nb' и сохраняя результат в той же переменной 'result' столько раз сколько записано в 'power'  
									 * мы сможем получить результат возведения в степень 'power' числа 'nb'. */
	return (result);				/* Завершаем функцию и возвращаем результат возведения в степень */
}