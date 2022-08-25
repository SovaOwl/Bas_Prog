#include <iostream>

using namespace std;

enum class month
{
	January = 1,
	February,
	March,
	April,
	May,
	June,
	July,
	August,
	September,
	October,
	November,
	December
};

string stringify_month(int month_number)
{
	switch (static_cast<month>(month_number))
	{
	case month::January: return "Январь";
	case month::February: return "Февраль";
	case month::March: return "Март";
	case month::April: return "Апрель";
	case month::May: return "Май";
	case month::June: return "Июнь";
	case month::July: return "Июль";
	case month::August: return "Август";
	case month::September: return "Сентябрь";
	case month::October: return "Октябрь";
	case month::November: return "Ноябрь";
	case month::December: return "Декабрь";

	default: return "";
	};
}

int main()
{
	setlocale(LC_ALL, "Rus");

	int input;

	do
	{
		cout << "Введите номер месяца: ";
		cin >> input;

		if (input < 0 || input > 12)
		{
			cout << "Неправильный номер!" << endl;
			continue;
		}
		if (input == 0)
		{
			cout << "До свидания" << endl;
			break;
		}
		cout << stringify_month(input) << endl;
	} while (true);

}