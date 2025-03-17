#include <iostream>
using namespace std;

int main()
{
	// Task 1
	double usd = 0.0240126;
	double eur = 0.0220489;
	double bitcoin = 0.000000284689;
	float uah;

	cout << "Enter UAH: ";
	cin >> uah;
	cout << "USD: " << uah * usd << "\n";
	cout << "EUR: " << uah * eur << "\n";
	cout << "Bitcoin: " << uah * bitcoin << "\n\n";

	// Task 2
	const double mile = 0.6213712;
	const double nauticalMile = 0.5399565;
	float km;

	cout << "Enter kilometers: ";
	cin >> km;
	cout << "Miles: " << km * mile << "\n";
	cout << "Nautical miles: " << km * nauticalMile << "\n\n";

	// Task 3.1
	int a1, b1, temp;

	cout << "Enter a: ";
	cin >> a1;
	cout << "Enter b: ";
	cin >> b1;

	temp = a1;
	a1 = b1;
	b1 = temp;
	cout << "Swap: a = " << a1 << ", b = " << b1 << "\n\n";

	// Task 3.2
	int a2, b2;

	cout << "Enter a: ";
	cin >> a2;
	cout << "Enter b: ";
	cin >> b2;

	a2 = a2 + b2;
	b2 = a2 - b2;
	a2 = a2 - b2;
	cout << "Swap: a = " << a2 << ", b = " << b2 << "\n\n";

	// Task 4
	int num1, num2;

	cout << "Enter first 3-digit num: ";
	cin >> num1;
	cout << "Enter second 3-digit num: ";
	cin >> num2;

	int hundreds1 = num1 / 100;
	int tens1 = (num1 % 100) / 10;
	int units1 = num1 % 10;

	int hundreds2 = num2 / 100;
	int tens2 = (num2 % 100) / 10;
	int units2 = num2 % 10;

	num1 = hundreds1 * 100 + tens2 * 10 + units1;
	num2 = hundreds2 * 100 + tens1 * 10 + units2;
	cout << "New numbers: " << num1 << " " << num2 << "\n\n";

	// Task 5
	int number4digit;

	cout << "Enter thousands: ";
	cin >> number4digit;

	int thousands = number4digit / 1000;
	int hundreds = (number4digit % 1000) / 100;
	int tens = (number4digit % 100) / 10;
	int units = number4digit % 10;

	cout << "Sum of 1st and 3rd digit: " << thousands + tens << "\n";
	cout << "Sub of 2nd and 4th digit: " << hundreds - units << "\n\n";

	// Task 6
	int number3digit;

	cout << "Enter hundreds: ";
	cin >> number3digit;

	int lastNum = number3digit % 10;
	cout << "New number: " << number3digit / 100 * 10 + lastNum << "\n\n";
	
	// Task 7
	float deposit;
	int annualRate;

	cout << "Enter the deposit: ";
	cin >> deposit;
	cout << "Enter the percent: ";
	cin >> annualRate;

	float monthlyRate = float(annualRate) / 12;
	float profit = deposit * monthlyRate / 100; 
	cout << "Profit: " << profit << "\n\n";

	// Task 8
	float lbs;
	float kg;

	cout << "Enter pounds: ";
	cin >> lbs;
	kg = lbs * 0.4059;
	cout << "Kilograms: " << kg << "\n\n";

	cout << "Enter kilograms: ";
	cin >> kg;
	lbs = kg * 2.4637;
	cout << "Pounds: " << lbs << "\n\n";

	// Task 9
	int number;

	cout << "Enter 3-digit number: ";
	cin >> number;

	int reversed = (number % 10) * 100 + (number % 100) / 10 * 10 + number / 100;
	cout << "Reversed number: " << reversed << "\n\n";

	// Task 10
	const double mercury = 3.3011e23;
	const double venus = 4.8675e24;
	const double earth = 5.97237e24;
	const double mars = 6.4171e23;
	const double jupiter = 1.89813e27;
	const double saturn = 5.68319e26;
	const double uranus = 8.68103e25;
	const double neptune = 1.02413e26;

	double sumMass = mercury + venus + earth + mars + jupiter + saturn + uranus + neptune;
	cout << "Sum: " << sumMass << "\n";
	cout << "Average: " << sumMass / 8 << "\n";
	cout << "Mass percentage of Mercury relative to sum: " << mercury / sumMass * 100 << "%\n";
	cout << "Mass percentage of Venus relative to sum: " << venus / sumMass * 100 << "%\n";
	cout << "Mass percentage of Earth relative to sum: " << earth / sumMass * 100 << "%\n";
	cout << "Mass percentage of Mars relative to sum: " << mars / sumMass * 100 << "%\n";
	cout << "Mass percentage of Jupiter relative to sum: " << jupiter / sumMass * 100 << "%\n";
	cout << "Mass percentage of Saturn relative to sum: " << saturn / sumMass * 100 << "%\n";
	cout << "Mass percentage of Uranus relative to sum: " << uranus / sumMass * 100 << "%\n";
	cout << "Mass percentage of Neptune relative to sum: " << neptune / sumMass * 100 << "%\n";
	cout << "Jupiter is " << jupiter / (sumMass) << " times heavier than sum\n\n";
	
	// Task 11
	float length, width, height, N, M, R;

	cout << "Enter the length of the room: ";
	cin >> length;
	cout << "Enter the width of the room: ";
	cin >> width;
	cout << "Enter the height of the room: ";
	cin >> height;
	cout << "Enter the amount of paint needed per square meter: ";
	cin >> N;
	cout << "Enter the percentage of wall surface occupied by windows and doors: ";
	cin >> M;
	cout << "Enter the cost of one liter of paint: ";
	cin >> R;

	double walls = 2 * height * (length + width);
	double paintArea = walls * (1 - M / 100);
	double paintNeed = paintArea * N;
	double totalCost = paintNeed * R;

	cout << "Total paint needed: " << paintNeed << " liters\n";
	cout << "Total cost of paint: " << totalCost << " UAH\n";

	return 0;
}