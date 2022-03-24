#include <iostream>
int main()
{
	int y, m, d;
	if (std::cin >> y >> m >> d)
		std::cout << y << '/' << m << '/' << d << '\n';
	else
		std::cout << "Ž¸”s\n";
}
