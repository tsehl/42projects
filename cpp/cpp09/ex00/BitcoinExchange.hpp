/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 19:02:22 by thsehl            #+#    #+#             */
/*   Updated: 2023/10/26 19:02:25 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_H
# define BITCOINEXCHANGE_H

# include <iostream>
# include <string>
# include <map>
# include <fstream>
# include <ctime>
# include <cmath>

class BitcoinExchange
{
	public:
		BitcoinExchange(void);
		~BitcoinExchange(void);
		
		float	getPrice(std::string const&) const;

	private:
		BitcoinExchange(BitcoinExchange const&);
		BitcoinExchange&	operator=(BitcoinExchange const&);
		
		void	_importDatabase(std::string const&);
		void	_processDataLine(std::string const&);
		void	_checkDateValid(std::string const& date) const;

		std::map<std::string, float>	_table;

};

#endif
