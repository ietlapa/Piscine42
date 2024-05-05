/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ietlapa- <ietlapa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 22:13:08 by ietlapa-          #+#    #+#             */
/*   Updated: 2024/02/25 00:18:01 by ietlapa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     ft_str_is_alpha(char *str)
{
    unsigned int    i;

    i = 0;
    while (str[i] != '\0')
    {
        if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] < 'Z'))
        {
            return (0);
        }
        i++;
    }
    return (1);
}