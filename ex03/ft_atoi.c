/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 18:45:12 by casampai          #+#    #+#             */
/*   Updated: 2026/04/29 16:10:15 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_atoi(char *str)
{
   int sign;

   sign = 1;
    while (*str == ' ' || (*str >= 9 && *str <= 13))
        str++;
    
    while (*str == '-' || *str == '+')
    {
        if (*str == '-')
            sign *= -1;
        str++;
    }

    int result = 0;
    while (*str >= 48 && *str <= 57)
    {
        result = result * 10 + (*str - '0');
        str++;
    }
 
    return (result * sign);
}
