#include <sstream>
#include <iostream>
#include <iomanip>
struct Date {
	int y, m, d;
};
#include <string.h>
std::istream& operator>>(std::istream& istm, const char* s)
{
	char ch;
	if (istm >> ch) {
		if (strchr(s, ch) == nullptr)
			istm.setstate(std::ios_base::failbit);;
	}
	return istm;
}
std::istream& operator>>(std::istream& istm, Date& date)
{
	static const char delim[] = "/-";

	return istm >> date.y >> delim >> date.m >> delim >> date.d;
}
std::ostream& operator<<(std::ostream& ostm, const Date& date)
{
	return ostm << date.y << std::setfill('0')
		<< '/' << std::setw(2) << date.m
		<< '/' << std::setw(2) << date.d;
}

int main()
{
	Date d;
	if (std::istringstream("2022-3-24") >> d) {
		std::cout << d << '\n';
	}

}
