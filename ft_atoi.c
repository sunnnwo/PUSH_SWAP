/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sun-wkim <sun-wkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 14:08:45 by sun-wkim          #+#    #+#             */
/*   Updated: 2023/06/16 10:44:31 by sun-wkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


static int	checkws(const char *str)
{
	int	i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	return (i);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sig;
	int	result;

	result = 0;
	sig = 1;
	i = checkws(str);
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sig *= -1;
		i++;
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	sig = result * sig;
	return (sig);
}
