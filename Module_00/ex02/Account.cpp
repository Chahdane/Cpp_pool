#include "Account.hpp"
#include <iostream>

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;

std::string time_stamp()
{
	 time_t     now = time(0);
    struct tm  tstruct;
    char       buf[80];
    tstruct = *localtime(&now);
    strftime(buf, sizeof(buf), "[%Y%m%d_%I%M%S] ", &tstruct);

    return buf;
}

Account::Account( int initial_deposit )
{
	_amount = initial_deposit;
	_nbWithdrawals = 0;
	_nbDeposits = 0;
	_totalNbWithdrawals = 0;
	_totalAmount  += initial_deposit;
	_accountIndex = Account::_nbAccounts;
	std::cout << time_stamp() << "index:" << _accountIndex << ";amount:" << initial_deposit << ";created" <<std::endl;
	Account::_nbAccounts++;
}

Account::~Account()
{
	std::cout << time_stamp() << "index:" << _accountIndex << ";amount:" << _amount << ";closed" <<std::endl;
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
	std::cout << time_stamp() << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" <<
		_totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals<<  std::endl;
}

void	Account::makeDeposit( int deposit )
{
	int p_amount = _amount;
	_amount += deposit;
	_totalAmount += deposit;
	_totalNbDeposits++;
	_nbDeposits++;
	std::cout << time_stamp() << "index:" << _accountIndex << ";p_amount:"<< p_amount << ";deposit:" 
	<< deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits <<std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	int p_amount = _amount;
	if (p_amount < withdrawal)
	{
		std::cout << time_stamp() << "index:" << _accountIndex << ";p_amount:"<< p_amount << ";withdrawal:refused" <<std::endl;
		return false;
	}
	else
	{
		_nbWithdrawals++;
		_amount -= withdrawal;
		_totalNbWithdrawals++;
		_totalAmount-=withdrawal;
		std::cout << time_stamp() << "index:" << _accountIndex << ";p_amount:"<< p_amount << ";withdrawal:" 
		<< withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals <<std::endl;
		return true;
	}
}

int		Account::checkAmount( void ) const
{
	return _amount;
}

void	Account::displayStatus( void ) const
{
	std::cout << time_stamp() << "index:" << _accountIndex << ";amount:"<< _amount << ";deposits:" 
	<< _nbDeposits << ";withdrawals::" << _nbWithdrawals <<std::endl;
}
