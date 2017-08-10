#include "stdafx.h"
#include "tdx_instance.h"
#include "consts.h"

#include <string>

using namespace std;

void TdxInstance::Open(string dll_name)
{
	module_ = LoadLibrary(dll_name.c_str());
	//��ȡapi����
	OpenTdx = (OpenTdxDelegate)GetProcAddress(module_, "OpenTdx");
	CloseTdx = (CloseTdxDelegate)GetProcAddress(module_, "CloseTdx");
	Logon = (LogonDelegate)GetProcAddress(module_, "Logon");
	Logoff = (LogoffDelegate)GetProcAddress(module_, "Logoff");
	QueryData = (QueryDataDelegate)GetProcAddress(module_, "QueryData");
	SendOrder = (SendOrderDelegate)GetProcAddress(module_, "SendOrder");
	CancelOrder = (CancelOrderDelegate)GetProcAddress(module_, "CancelOrder");
	GetQuote = (GetQuoteDelegate)GetProcAddress(module_, "GetQuote");
	Repay = (RepayDelegate)GetProcAddress(module_, "Repay");

	//��ͨ��������������
	QueryDatas = (QueryDatasDelegate)GetProcAddress(module_, "QueryDatas");
	QueryHistoryData = (QueryHistoryDataDelegate)GetProcAddress(module_, "QueryHistoryData");
	SendOrders = (SendOrdersDelegate)GetProcAddress(module_, "SendOrders");
	CancelOrders = (CancelOrdersDelegate)GetProcAddress(module_, "CancelOrders");
	GetQuotes = (GetQuotesDelegate)GetProcAddress(module_, "GetQuotes");

	//��ͨ����ʵ�� 
	OpenTdx();
}

void TdxInstance::Close() {
	CloseTdx();
	FreeLibrary(module_);
}

