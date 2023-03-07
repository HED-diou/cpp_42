/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 10:29:41 by hed-diou          #+#    #+#             */
/*   Updated: 2022/11/17 15:18:08 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>   
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp()
{
    time_t ttime = time(0);
    tm *local_time = localtime(&ttime);

    std::cout << "[" << 1900 + local_time->tm_year;
    std::cout << 1 + local_time->tm_mon;
    std::cout << local_time->tm_mday << "_";
    std::cout << 1 + local_time->tm_hour;
    std::cout << 1 + local_time->tm_min;
    std::cout << 1 + local_time->tm_sec << "] ";
}

void Account::test(){
    
}

Account::Account(int initial_deposit)
{
    Account::_accountIndex = _nbAccounts;
    _nbAccounts++;
    _nbWithdrawals= 0;
    _nbDeposits = 0;
    _amount = initial_deposit;
    _totalAmount += initial_deposit;
    _displayTimestamp();
    std::cout << "index:" << Account::_accountIndex << ";";
	std::cout << "amount:" << Account::_amount << ";";
	std::cout << "created" << std::endl;
}

Account::~Account()
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed" << std::endl;
}

void Account::displayAccountsInfos()
{
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts() << ";";
    std::cout << "total:" << getTotalAmount() << ";";
    std::cout << "deposits:" << getNbDeposits() << ";";
    std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;
}

void Account::displayStatus() const
{
    _displayTimestamp();
    std::cout << "index:" << Account::_accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
    std::cout << "withdrawals:" << _nbWithdrawals <<  std::endl;
    
}

void Account::makeDeposit( int deposit )
{
    _displayTimestamp();
    _totalNbDeposits ++;
    _nbDeposits++;
    std::cout << "index:" << Account::_accountIndex << ";";
    std::cout << "p_amount:" << Account::_amount << ";";
    std::cout << "deposit:" << deposit << ";";
    std::cout << "amount:" << Account::_amount + deposit<< ";";
    std::cout << "nb_deposits:" << _nbDeposits << std::endl;
    _amount += deposit;
    _totalAmount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    _displayTimestamp();
    std::cout << "index:" << Account::_accountIndex << ";";
    std::cout << "p_amount:" << Account::_amount << ";";
    if(_amount - withdrawal < 0)
    {
        std::cout << "withdrawal:refused" <<  std::endl;
        return 0;
    }
    _totalNbWithdrawals++;
    _nbWithdrawals++;
    this->_amount -= withdrawal;
    _totalAmount -= withdrawal;
    std::cout << "withdrawal:" << withdrawal <<  ";";
    std::cout << "amount:" << Account::_amount << ";";
    std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;
    return 1;
}

int	Account::getNbAccounts()
{
    return _nbAccounts;
}

int		Account::getTotalAmount(void)
{
	return _totalAmount;
}

int		Account::getNbDeposits(void)
{
	return _totalNbDeposits;
}

int		Account::getNbWithdrawals(void)
{
	return _totalNbWithdrawals;
}

Account::Account() {}
