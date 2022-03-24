#include <iostream>
struct Date {
	int y, m;
};
bool DateInput(Date& date)
{
	char ch;
	if (std::cin >> date.y >> ch >> date.m) {
		if (ch == '/') {
			return true;
		}
		else {
			std::cout << "/‚Å‹æØ‚ç‚ê‚Ä‚¢‚Ü‚¹‚ñ‚Å‚µ‚½B\n";
			return false;
		}
	}
	else {
		std::cout << "”N‚ª³‚µ‚­“ü—Í‚³‚ê‚Ü‚¹‚ñ‚Å‚µ‚½B\n";
		return false;
	}
}

int main()
{
	Date from, to;
	if (DateInput(from) && DateInput(to))
		std::cout
		<< from.y << '/' << from.m
		<< "`"
		<< to  .y << '/' << to  .m
		<< '\n';
}
