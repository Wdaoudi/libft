/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaoudi- <wdaoudi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 14:59:23 by wdaoudi-          #+#    #+#             */
/*   Updated: 2024/05/30 18:25:19 by wdaoudi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	taille(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n / 10 != 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char	*zero(void)
{
	char	*str;

	str = malloc(sizeof(char) * 2);
	str[0] = 48;
	str[1] = 0;
	return (str);
}

char	*int_min(void)
{
	char	*temp;
	char	*str;
	int		i;

	i = 0;
	temp = "-2147483648";
	str = malloc(sizeof(char) * 12);
	while (temp[i])
	{
		str[i] = temp[i];
		i++;
	}
	str[i] = 0;
	return (str);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*str;

	i = taille(n);
	if (n == 0)
		return (zero());
	if (n == -2147483648)
		return (int_min());
	str = malloc(sizeof(char) * (i + 2));
	if (!(str))
		return (NULL);
	str[i + 1] = '\0';
	if (n < 0)
	{
		n = -n;
		str[0] = '-';
	}
	while (n % 10 != 0 || n / 10 != 0)
	{
		str[i] = n % 10 + '0';
		i--;
		n = n / 10;
	}
	return (str);
}

// int	main(void)
// {
// 	int numbers[] = {0LL, -2147483648LL};
// 	size_t num_count = sizeof(numbers) / sizeof(numbers[0]);

// 	for (size_t i = 0; i < num_count; i++)
// 	{
// 		char *str = ft_itoa(numbers[i]);
// 		if (str)
// 		{
// 			printf("Integer: %d -> String: %s\n", numbers[i], str);
// 			free(str);
// 		}
// 		else
// 		{
// 			printf("Memory allocation failed for integer: %d\n", numbers[i]);
// 		}
// 	}

// 	return (0);
// }