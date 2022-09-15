/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahdan <achahdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 01:19:54 by achahdan          #+#    #+#             */
/*   Updated: 2022/09/15 04:32:11 by achahdan         ###   ########.fr       */
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
    _amount = initial_deposit;
    _totalAmount  += initial_deposit;
    _accountIndex = Account::_nbAccounts;
    std::cout << "index:" << _accountIndex << ";amount;" << initial_deposit << ";created" <<std::endl;
    Account::_nbAccounts++;
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
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" <<
        _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals<<  std::endl;
}

void	Account::makeDeposit( int deposit )
{
    _amount += deposit;
    _totalAmount += deposit;
    _totalNbDeposits++; 
}

bool	Account::makeWithdrawal( int withdrawal )
{
    if (withdrawal == 1)
        return true;
    return false;
}

int		Account::checkAmount( void ) const
{
    return _amount;
}

void	Account::displayStatus( void ) const
{
    std::cout << "index :" << _accountIndex << ";amount:" << checkAmount() <<  std::endl;
    
}


// display account info : [19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0

// display status : [19920104_091532] index:0;amount:42;deposits:0;withdrawals:0

// make deposit : [19920104_091532] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1

// make withdrawal : [19920104_091532] index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1
