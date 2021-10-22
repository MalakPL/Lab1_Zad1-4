﻿#include <iostream>

using namespace std;

const char* IntCastExceptionMessage = "Podana wartosc nie mogla zostac zrzutowana do typu int.";

/* Wspólna funckja do wyświetlania zadań */
auto WyswietlZadanie(string Header, void Func()) -> void
{
	cout << "+---------------------------------+" << endl;
	cout << Header << endl;
	cout << "+---------------------------------+" << endl;

	Func();

	cout << endl;
}

#pragma region Zadania
auto Zad1() -> void
{
	cout << "Karol" << endl;
	cout << "24574" << endl;
	cout << "Polsko Japonska Akademia Technik Komputerowych" << endl;
}

auto Zad2() -> void
{
	int Number;

	cout << "Podaj liczbe: ";
	cin >> Number;

	if (cin.fail())
	{
		throw exception{ IntCastExceptionMessage };
	}

	if (Number > 0)
	{
		cout << "Liczba jest wieksza od 0" << endl;
	}
	else if (Number == 0)
	{
		cout << "Liczba jest rowna od 0" << endl;
	}
	else
	{
		cout << "Liczba jest mniejsza od 0" << endl;
	}
}

auto Zad3() -> void
{
	int Number;

	cout << "Podaj liczbe: ";
	cin >> Number;

	if (cin.fail())
	{
		throw exception{ IntCastExceptionMessage };
	}

	if (Number % 2 == 0)
	{
		cout << "Liczba jest parzysta" << endl;
	}
	else
	{
		cout << "Liczba jest nieparzysta" << endl;
	}
}

auto Zad4() -> void
{
	int L1, L2, L3;

	cout << "Podaj pierwsza liczbe: ";
	cin >> L1;

	if (cin.fail())
	{
		throw exception{ IntCastExceptionMessage };
	}

	cout << "Podaj druga liczbe: ";
	cin >> L2;

	if (cin.fail())
	{
		throw exception{ IntCastExceptionMessage };
	}

	cout << "Podaj trzecia liczbe: ";
	cin >> L3;

	if (cin.fail())
	{
		throw exception{ IntCastExceptionMessage };
	}

	int Max;
	Max = (L1 > L2) ? L1 : L2;
	Max = (Max > L3) ? Max : L3;

	cout << "Najwieksza liczba to " << Max << endl;
}
#pragma endregion

auto main() -> int
{
	/* Obsługa wyjątków */
	try
	{
		WyswietlZadanie("Zadanie 1", Zad1);
		WyswietlZadanie("Zadanie 2", Zad2);
		WyswietlZadanie("Zadanie 3", Zad3);
		WyswietlZadanie("Zadanie 4", Zad4);
	}
	catch (exception ex)
	{
		cout << ex.what() << endl;

		return 1; /* Zwracamy błąd */
	}

	return 0;
}