#pragma once

//����淶:ʹ�ô�д�ַ�����������Щ����

//err array size 
constexpr int ERR_SIZE = 256;
//result array size 1024*1024
constexpr int RESULT_SIZE = 1048576;

//definition for DLL_NAME 
//const static char * DLL_NAME = "Trade.dll";

//constants definitions for SendOrde::category
enum SendOrder_Category
{
	//����
	BUY = 0,
	//����
	SELL,
	//��������
	LEVERAGE_BUY,
	//��ȯ����
	RENT_COUPONS_TO_SELL,
	//��ȯ��ȯ
	BUY_COUPONS_TO_RETURN_COUPONS,
	//��ȯ����
	SELL_COUPONS_TO_RETURN_MONEY,
	//��ȯ��ȯ
	USE_COUPONS_TO_RETURN_COUPONS,
};

//constants definitions for SendOrder PriceType 
enum SendOrder_PriceType
{
	//�����޼�ί��
	LIMIT_CHARGE = 0,
	//(�м�ί��) ���ڶԷ����ż۸�
	SZ_OTHER_OPTIMAL,
	//(�м�ί��) ���ڱ������ż۸�
	SZ_SELF_OPTIMAL,
	//���ڼ�ʱ�ɽ�ʣ�೷��
	SZ_MARKET_ORDER,
	//(�м�ί��)�Ϻ��嵵��ʱ�ɽ�ʣ�೷���������嵵��ʱ�ɽ�ʣ�೷��
	FIVE_LEVEL_MARKET_ORDER,
	//����ȫ��ɽ����߳���
	SZ_DEAL_ALL_OR_CANCEL,
	//(�м�ί��)�Ϻ��嵵��ʱ�ɽ�ת�޼� 
	SH_REAL_DEAL_TO_LIMIT,
};


//constants definitions for QueryData::Category
enum QueryData_Category
{
	//�ʽ�
	BALANCE = 0,
	//�ɷ�
	SHARES,
	//����ί��
	TODAY_ENTRUSTMENT,
	//���ճɽ�
	TODAY_TRANSACTION,
	//�ɳ���
	CAN_CANCEL,
	//�ɶ�����
	GDDM,
	//�������
	MARGIN_DEBT,
	//��ȯ���
	MARGIN_BALANCE,
	//����֤ȯ
	FINANCING_STOCKS,
};


//constants definitions for QueryHistoryData
enum QueryHistoryData_Category
{
	//��ʷί��
	HISTORY_ENTRUST,
	//��ʷ�ɽ�
	HISTORY_TRANSACTION,
	//���
	DELIVERY_ORDER,
};
