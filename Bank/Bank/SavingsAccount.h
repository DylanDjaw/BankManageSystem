#include "stdafx.h"

#include "Date.h"
#include <string>

#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

class SavingsAccount															//�����˻���
{
public:
	SavingsAccount(const Date &date, const std::string &id, double rate);		//���캯��

	const std::string getId() const{ return id; };
	double getBalance() const{ return balance; };
	double getRate() const{ return rate; };
	void show() const;															//��ʾ�˻���Ϣ

	void deposit(const Date &date, double amount, const std::string &desc);		//�����ֽ�
	void withdraw(const Date &date, double amount, const std::string &desc);			//ȡ���ֽ�
	void settle(const Date &date);												//������Ϣ��ÿ��1��1�յ���һ�θú���

	static double getTotal(){ return total;};

private:
	std::string id;																//�˺�
	double balance;																//���
	double rate;																//����������
	Date lastDate;																//�ϴα����������
	double accumulation;														//�����ۼ�֮��

	static double total;														//�����˻����ܽ��

	void record(const Date &date, double amount, const std::string &desc);		//��¼һ���ˣ�dateΪ���ڣ�amountΪ��descΪ˵��
	void error(const std::string &msg) const;

	double accumulate(const Date &date) const{									//���ָ������λ�õĴ������ۼ�ֵ
		return accumulation + balance * date.distance(lastDate);
	}
};

#endif//__ACCOOUNT_H__