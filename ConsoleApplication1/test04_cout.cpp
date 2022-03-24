#include <Windows.h>
#include <iostream>
#include <iomanip>//書式指定用
int main()
{
	static const char* const 曜日文字列配列[] =
	{ "日"
	, "月"
	, "火"
	, "水"
	, "木"
	, "金"
	, "土"
	};

	;
	SYSTEMTIME st;
	GetLocalTime(&st);
	std::cout << st.wYear
		<< std::setfill('0')
		<< '/' << std::setw(2) << st.wMonth
		<< '/' << std::setw(2) << st.wDay
		<< ' ' << '(' << 曜日文字列配列[st.wDayOfWeek] << ")"
		<< ' ' << std::setw(2) << st.wHour
		<< ':' << std::setw(2) << st.wMinute
		<< ':' << std::setw(2) << st.wSecond
		<< '\n';
}
