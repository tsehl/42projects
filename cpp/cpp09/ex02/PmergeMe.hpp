/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 19:03:31 by thsehl            #+#    #+#             */
/*   Updated: 2023/10/26 19:03:33 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_H
# define PMERGEME_H

# include <iostream>
# include <string>
# include <vector>
# include <deque>
# include <cstdlib>
# include <algorithm>

# define VERBOSE 0

class PmergeMe
{
	public:
		PmergeMe(void);
		~PmergeMe(void);

		void	parseInputVec(char** input);
		void	sortVec(void);
		std::vector<int> const&	getVec(void) const; 
		static void	printVec(std::vector<int> const&);

		void	parseInputDeq(char** input);
		void	sortDeq(void);
		std::deque<int> const&	getDeq(void) const; 
		static void	printDeq(std::deque<int> const&);
	
	private:
		PmergeMe(PmergeMe const&);
		PmergeMe&	operator=(PmergeMe const&);

		static void	_recurSortVec(std::vector<int>& vec, std::vector<int>& indexes);
		static void	_rearrangeVec(std::vector<int>& vec, std::vector<int>& indexes);
		static void	_binaryInsertVec(std::vector<int>& vecMain, std::vector<int>& vecPend,
			std::vector<int>& indMain, std::vector<int>& indPend);
		
		static void	_recurSortDeq(std::deque<int>& deq, std::deque<int>& indexes);
		static void	_rearrangeDeq(std::deque<int>& deq, std::deque<int>& indexes);
		static void	_binaryInsertDeq(std::deque<int>& deqMain, std::deque<int>& deqPend,
			std::deque<int>& indMain, std::deque<int>& indPend);

		std::vector<int> _vec;
		std::deque<int> _deq;

};

#endif
