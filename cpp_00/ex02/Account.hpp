// ************************************************************************** //
//                                                                            //
//                Account.hpp for GlobalBanksters United                //
//                Created on  : Thu Nov 20 19:43:15 1989                      //
//                Last update : Wed Jan 04 14:54:06 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //


#pragma once
#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

// ************************************************************************** //
//                               Account Class                                //
// ************************************************************************** //

class Account {


public:

	typedef Account		t;

	static int	getNbAccounts( void );
	static int	getTotalAmount( void );
	static int	getNbDeposits( void );
	static int	getNbWithdrawals( void );
	static void	displayAccountsInfos( void );

	Account( int initial_deposit );
	~Account( void );

	void	makeDeposit( int deposit );
	bool	makeWithdrawal( int withdrawal );
	int		checkAmount( void ) const;
	void	displayStatus( void ) const;


private:

	static int	_nbAccounts;
	static int	_totalAmount;
	static int	_totalNbDeposits;
	static int	_totalNbWithdrawals;

	static void	_displayTimestamp( void );
	 static void test();

    int				_accountIndex;
	int				_amount;
	int				_nbDeposits;
	int				_nbWithdrawals;

	Account( void );

};



// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// ************************************************************************** //


#endif /* __ACCOUNT_H__ */
























/*



[19920104_091532] index:0;amount:42;created
[19920104_091532] index:1;amount:54;created
[19920104_091532] index:2;amount:957;created
[19920104_091532] index:3;amount:432;created
[19920104_091532] index:4;amount:1234;created
[19920104_091532] index:5;amount:0;created
[19920104_091532] index:6;amount:754;created
[19920104_091532] index:7;amount:16576;created
[19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0
[19920104_091532] index:0;amount:42;deposits:0;withdrawals:0
[19920104_091532] index:1;amount:54;deposits:0;withdrawals:0
[19920104_091532] index:2;amount:957;deposits:0;withdrawals:0
[19920104_091532] index:3;amount:432;deposits:0;withdrawals:0
[19920104_091532] index:4;amount:1234;deposits:0;withdrawals:0
[19920104_091532] index:5;amount:0;deposits:0;withdrawals:0
[19920104_091532] index:6;amount:754;deposits:0;withdrawals:0
[19920104_091532] index:7;amount:16576;deposits:0;withdrawals:0
[19920104_091532] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
[19920104_091532] index:1;p_amount:54;deposit:765;amount:819;nb_deposits:1
[19920104_091532] index:2;p_amount:957;deposit:564;amount:1521;nb_deposits:1
[19920104_091532] index:3;p_amount:432;deposit:2;amount:434;nb_deposits:1
[19920104_091532] index:4;p_amount:1234;deposit:87;amount:1321;nb_deposits:1
[19920104_091532] index:5;p_amount:0;deposit:23;amount:23;nb_deposits:1
[19920104_091532] index:6;p_amount:754;deposit:9;amount:763;nb_deposits:1
[19920104_091532] index:7;p_amount:16576;deposit:20;amount:16596;nb_deposits:1
[19920104_091532] accounts:8;total:21524;deposits:8;withdrawals:0
[19920104_091532] index:0;amount:47;deposits:1;withdrawals:0
[19920104_091532] index:1;amount:819;deposits:1;withdrawals:0
[19920104_091532] index:2;amount:1521;deposits:1;withdrawals:0
[19920104_091532] index:3;amount:434;deposits:1;withdrawals:0
[19920104_091532] index:4;amount:1321;deposits:1;withdrawals:0
[19920104_091532] index:5;amount:23;deposits:1;withdrawals:0
[19920104_091532] index:6;amount:763;deposits:1;withdrawals:0
[19920104_091532] index:7;amount:16596;deposits:1;withdrawals:0
[19920104_091532] index:0;p_amount:47;withdrawal:refused
[19920104_091532] index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1
[19920104_091532] index:2;p_amount:1521;withdrawal:657;amount:864;nb_withdrawals:1
[19920104_091532] index:3;p_amount:434;withdrawal:4;amount:430;nb_withdrawals:1
[19920104_091532] index:4;p_amount:1321;withdrawal:76;amount:1245;nb_withdrawals:1
[19920104_091532] index:5;p_amount:23;withdrawal:refused
[19920104_091532] index:6;p_amount:763;withdrawal:657;amount:106;nb_withdrawals:1
[19920104_091532] index:7;p_amount:16596;withdrawal:7654;amount:8942;nb_withdrawals:1
[19920104_091532] accounts:8;total:12442;deposits:8;withdrawals:6
[19920104_091532] index:0;amount:47;deposits:1;withdrawals:0
[19920104_091532] index:1;amount:785;deposits:1;withdrawals:1
[19920104_091532] index:2;amount:864;deposits:1;withdrawals:1
[19920104_091532] index:3;amount:430;deposits:1;withdrawals:1
[19920104_091532] index:4;amount:1245;deposits:1;withdrawals:1
[19920104_091532] index:5;amount:23;deposits:1;withdrawals:0
[19920104_091532] index:6;amount:106;deposits:1;withdrawals:1
[19920104_091532] index:7;amount:8942;deposits:1;withdrawals:1
[19920104_091532] index:0;amount:47;closed
[19920104_091532] index:1;amount:785;closed
[19920104_091532] index:2;amount:864;closed
[19920104_091532] index:3;amount:430;closed
[19920104_091532] index:4;amount:1245;closed
[19920104_091532] index:5;amount:23;closed
[19920104_091532] index:6;amount:106;closed
[19920104_091532] index:7;amount:8942;closed




*/