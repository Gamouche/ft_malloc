/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyfermie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 13:13:31 by cyfermie          #+#    #+#             */
/*   Updated: 2020/08/12 15:43:45 by cyfermie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

int	main(int argc, char **argv)
{
	char *ptr = malloc(42);

	strcpy(ptr, "bonjour");

	free(ptr);
	
	return (0);
}
