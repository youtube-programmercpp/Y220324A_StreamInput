#include <fstream>
#include <string>
#include <iostream>
struct Date {
	int y, m, d;
};
std::istream& operator>>(std::istream& istm, char&& r)
{
	char ch;
	if (istm >> ch) {
		if (ch != r)
			istm.setstate(std::ios_base::failbit);;
	}
	return istm;
}
std::istream& operator>>(std::istream& istm, Date& date)
{
	return istm >> date.y >> '/' >> date.m >> '/' >> date.d;
}
std::ostream& operator<<(std::ostream& ostm, const Date& date)
{
	return ostm << date.y << '/' << date.m << '/' << date.d;
}

int main()
{
	std::ifstream file("sample.txt");
	Date d;
	if (file >> d) {
		std::cout << d << '\n';
	}

}
