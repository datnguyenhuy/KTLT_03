//#include<stdio.h>
//#pragma warning(disable:4996)
//
//
//char* nextDate(int year, int month, int day)
//{
//	if ((year < 1800) || (year > 9999) || (month <= 0) || (month >= 13) || (day <= 0) || (day >= 32))
//		return NULL;
//	if (month == 2)
//	{
//		if (day > 29)
//			return NULL;
//		else if (year % 4 != 0)
//		{
//			if (day == 28)
//			{
//				day = 1;
//				month = 3;
//			}
//			else day++;
//		}
//		else
//		{
//			if (day == 29)
//			{
//				day = 1;
//				month = 3;
//			}
//			else day++;
//		}
//	}
//	else if (day == 30)
//	{
//		if (month == 4 || month == 6 || month == 9 || month == 11)
//		{
//			day = 1;
//			month++;
//		}
//		else day = 31;
//	}
//	else if (day == 31)
//	{
//		if (month == 4 || month == 6 || month == 9 || month == 11)
//			return NULL;
//		day = 1;
//		if (month == 12)
//		{
//			month = 1;
//			year++;
//		}
//		else month++;
//	}
//	else day++;
//			// ghep ngay thang nam lai thanh chuoi
//	char *buf;
//	buf = new char [100];
//	sprintf(buf, "Next date : %d/%d/%d", day, month, year);
//	return buf;
//}
//int main()
//{
//	printf("%s", nextDate(1999, 12, 31));
//	return 0;
//}