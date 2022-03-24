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
	Date from, to;
	if (std::cin >> from >> to) {
		std::cout << from << "`" << to << '\n';
	}
	else
		std::cout << "³‚µ‚­“ü—Í‚³‚ê‚Ü‚¹‚ñ‚Å‚µ‚½B\n";
}
