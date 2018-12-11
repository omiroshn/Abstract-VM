/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 13:49:14 by omiroshn          #+#    #+#             */
/*   Updated: 2018/12/11 13:49:15 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AbstractVM.hpp"

int main(int argc, char const *argv[])
{
	try
	{
		if (argc == 1) {
			AbstractVM stdin;
		} else {
			AbstractVM file(argv[1]);
		}	
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
