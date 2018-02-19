/* Copyright (C) 2018 Interactive Brokers LLC. All rights reserved. This code is subject to the terms
 * and conditions of the IB API Non-Commercial License or the IB API Commercial License, as applicable. */

#pragma once
#ifndef ORDERSTATE_H
#define ORDERSTATE_H

#include "Order.h"

struct OrderState {

	explicit OrderState()
		:
		commission(UNSET_DOUBLE),
		minCommission(UNSET_DOUBLE),
		maxCommission(UNSET_DOUBLE)
	{}

	std::string status;

	std::string initMargin;
	std::string maintMargin;
	std::string equityWithLoan;

	double  commission;
	double  minCommission;
	double  maxCommission;
	std::string commissionCurrency;

	std::string warningText;
};

#endif /* ORDERSTATE_H */
