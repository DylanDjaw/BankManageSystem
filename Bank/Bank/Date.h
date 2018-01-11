#include "stdafx.h"




#ifndef __DATE_H__
#define __DATE_H__

class Date {
private:
	int year;
	int month;
	int day;
	int totalDays;								//该日期是从公元元年1月1日开始的第几天
public:
	Date(int year, int month, int day);

	int getYear() const { return year; }
	int getMonth() const { return month; }
	int getDay() const { return day; }
	int getMaxday() const;						//获得当月有多少天
	bool isLeapYear() const{					//是否是闰年
		return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
	}
	void show() const;							//输出日期
	int distance(const Date& date) const{		//计算两个日期之间相差多少天
		return totalDays - date.totalDays;
	}
};
#endif  //__DATE_H__