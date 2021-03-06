//-----------------------------------------------------------------------------
// luna2d engine
// Copyright 2014-2017 Stepan Prokofjev
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to
// deal in the Software without restriction, including without limitation the
// rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
// sell copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
// IN THE SOFTWARE.
//-----------------------------------------------------------------------------

#include "lunaservices.h"
#include "lunaads.h"
#include "lunapurchases.h"
#include "lunasharing.h"
#include "lunastore.h"
#include "lunaleaderboards.h"
#include "lunanotifications.h"
#include "lunaanalytics.h"

using namespace luna2d;

std::shared_ptr<LUNAAds> LUNAServices::GetAds()
{
	return ads;
}

std::shared_ptr<LUNAPurchases> LUNAServices::GetPurchases()
{
	return purchases;
}

std::shared_ptr<LUNASharing> LUNAServices::GetSharing()
{
	return sharing;
}

std::shared_ptr<LUNAStore> LUNAServices::GetStore()
{
	return store;
}

std::shared_ptr<LUNALeaderboards> LUNAServices::GetLeaderboards()
{
	return leaderboards;
}

std::shared_ptr<LUNANotifications> LUNAServices::GetNotifications()
{
	return notifications;
}

std::shared_ptr<LUNAAnalytics> LUNAServices::GetAnalytics()
{
	return analytics;
}

