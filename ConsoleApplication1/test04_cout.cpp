#include <Windows.h>
#include <iostream>
#include <iomanip>//�����w��p
int main()
{
	static const char* const �j��������z��[] =
	{ "��"
	, "��"
	, "��"
	, "��"
	, "��"
	, "��"
	, "�y"
	};

	;
	SYSTEMTIME st;
	GetLocalTime(&st);
	std::cout << st.wYear
		<< std::setfill('0')
		<< '/' << std::setw(2) << st.wMonth
		<< '/' << std::setw(2) << st.wDay
		<< ' ' << '(' << �j��������z��[st.wDayOfWeek] << ")"
		<< ' ' << std::setw(2) << st.wHour
		<< ':' << std::setw(2) << st.wMinute
		<< ':' << std::setw(2) << st.wSecond
		<< '\n';
}
