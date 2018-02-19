/* Copyright (C) 2018 Interactive Brokers LLC. All rights reserved. This code is subject to the terms
 * and conditions of the IB API Non-Commercial License or the IB API Commercial License, as applicable. */

#pragma once
#ifndef DEPTHMKTDATADESCRIPTION_H
#define DEPTHMKTDATADESCRIPTION_H

#include <limits.h>
#define UNSET_INTEGER INT_MAX

struct DepthMktDataDescription
{
	DepthMktDataDescription()
		: exchange("")
		, secType("")
		, listingExch("")
		, serviceDataType("")
		, aggGroup(UNSET_INTEGER)
	{
	}

	std::string exchange;
	std::string secType;
	std::string listingExch;
	std::string serviceDataType;
	int aggGroup;
};

#endif /* DEPTHMKTDATADESCRIPTION_H */
