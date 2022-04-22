/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpires-n <lpires-n@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 18:24:51 by lpires-n          #+#    #+#             */
/*   Updated: 2022/04/21 19:19:25 by lpires-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
	int		counter;

	counter = 0;
	while (str[counter] != '\0')
		counter ++;
	return (counter);
}

#include <std