#include "Account.hpp"
#include <string>
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;
int Account::getNbAccounts( void ) {return (_nbAccounts);}
int Account::getTotalAmount( void ) {return (_totalAmount);}
int Account::getNbDeposits( void ) {return (_totalNbDeposits);}
int Account::getNbWithdrawals( void ) {return (_totalNbWithdrawals);}

void Account::_displayTimestamp(void)
{
    std::time_t now = std::time(NULL);
    std::tm *ltm = std::localtime(&now);

    char buffer[16];
    std::strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", ltm);
    std::cout << "[" << buffer << "] ";
}

void	Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

Account::Account( int initial_deposit )
{
    _accountIndex = _nbAccounts;
    _nbAccounts++;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << initial_deposit << ";created" << std::endl;
}

Account::~Account()
{
    
}