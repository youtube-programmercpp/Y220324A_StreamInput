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
			std::cout << "/で区切られていませんでした。\n";
			return false;
		}
	}
	else {
		std::cout << "年が正しく入力されませんでした。\n";
		return false;
	}
}

int main()
{
	Date from, to;
	if (DateInput(from) && DateInput(to))
		std::cout
		<< from.y << '/' << from.m
		<< "〜"
		<< to  .y << '/' << to  .m
		<< '\n';
}
