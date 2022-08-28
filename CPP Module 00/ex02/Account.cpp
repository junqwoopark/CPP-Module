#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Account::Account(int initial_deposit) {
    _amount = initial_deposit;
    _accountIndex = _nbAccounts;
    _totalAmount += initial_deposit;
    _nbAccounts += 1;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount" << _amount << ";";
    std::cout << "created" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Account::~Account() {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount" << _amount << ";";
    std::cout << "closed" << std::endl;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

int Account::getNbAccounts(void) { return (_nbAccounts); };
int Account::getTotalAmount(void) { return (_totalAmount); };
int Account::getNbDeposits(void) { return (_totalNbDeposits); };
int Account::getNbWithdrawals(void) { return (_totalNbWithdrawals); };
void Account::displayAccountsInfos(void) {
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";";
    std::cout << "total:" << _totalAmount << ";";
    std::cout << "accounts:" << _totalNbDeposits << ";";
    std::cout << "withdrawals:" << _totalNbWithdrawals << std::endl;
};

void Account::makeDeposit(int deposit) {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << _amount << ";";
    std::cout << "deposit:" << deposit << ";";
    std::cout << "amount:" << _amount + deposit << ";";
    std::cout << "nb_deposits:" << _nbDeposits + 1 << std::endl;
    _amount += deposit;
    _totalAmount += deposit;
    _nbDeposits += 1;
    _totalNbDeposits += 1;
}
bool Account::makeWithdrawal(int withdrawal) {
    _displayTimestamp();

    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << _amount << ";";
    std::cout << "withdrawal:" << withdrawal << ";";
    if (_amount < withdrawal) {
        std::cout << "refused" << std::endl;
        return (false);
    }
    std::cout << "amount:" << _amount - withdrawal << ";";
    std::cout << "nb_withdrawals:" << _nbWithdrawals + 1 << std::endl;
    _amount -= withdrawal;
    _totalAmount -= withdrawal;
    _nbWithdrawals += 1;
    _totalNbWithdrawals += 1;
    return (true);
};
// int Account::checkAmount(void) const {};

void Account::displayStatus(void) const {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "deposits:" << _nbDeposits << ";";
    std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
};

void Account::_displayTimestamp(void) {
    std::time_t now = time(NULL);
    std::tm* time = localtime(&now);

    std::cout << std::setfill('0');
    std::cout << "[";
    std::cout << time->tm_year + 1900;
    std::cout << std::setw(2) << time->tm_mon + 1;
    std::cout << std::setw(2) << time->tm_mday;
    std::cout << "_";
    std::cout << std::setw(2) << time->tm_hour;
    std::cout << std::setw(2) << time->tm_min;
    std::cout << std::setw(2) << time->tm_sec;
    std::cout << "] ";
};

/*
** --------------------------------- ACCESSOR----------------------------------
*/

/* ************************************************************************** */
