/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahdan <achahdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 01:19:54 by achahdan          #+#    #+#             */
/*   Updated: 2022/09/15 03:16:36 by achahdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
    std::cout << initial_deposit << std::endl;
}

Account::~Account()
{
    
}

int	Account::getNbAccounts( void )
{
    return _nbAccounts;
}

int	Account::getTotalAmount( void )
{
    return _totalAmount;
}

int	Account::getNbDeposits( void )
{
    return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
    return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void )
{
    std::cout << "display account" << std::endl;
}

void	Account::makeDeposit( int deposit )
{
    std::cout << "make deposit" << deposit<< std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    if (withdrawal == 1)
        return true;
    return false;
}

int		Account::checkAmount( void ) const
{
    return 555;
}

void	Account::displayStatus( void ) const
{
    std::cout << "display status" << std::endl;
}
