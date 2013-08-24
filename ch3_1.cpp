#include <iomanip>
#include <ios>
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::setprecision;
using std::string;
using std::streamsize;

int main()
{
	cout << "Enter your first name: ";
	string name;
	cin >> name;
	cout << "Hello, " << name << "!" << endl;

	cout << "Enter midterm and final grades: ";
	double midterm, final;
	cin >> midterm >> final;

	cout << "Enter all homework grades, followed by EOF: ";
	int count = 0;
	double sum = 0;
	double x;
	while (cin >> x) {
		count++;
		sum += x;
	}

	streamsize prec = cout.precision();
	cout << "Original precision is: " << prec << endl;
	cout << "Your final grade is " << setprecision(3)
		<< 0.2 * midterm + 0.4 * final + 0.4 * sum / count
		<< setprecision(prec) << endl;
	return 0;
}
