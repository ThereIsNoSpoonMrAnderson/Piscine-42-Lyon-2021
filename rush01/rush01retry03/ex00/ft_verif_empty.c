/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif_empty.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alheriti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 19:48:10 by alheriti          #+#    #+#             */
/*   Updated: 2021/07/18 19:48:43 by alheriti         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_empty_line(char *str)
{
	int	i;

	i = 1;
	while (i < 5)
	{
		if (str[i] != '0')
			return (0);
		i++;
	}
	return (1);
}