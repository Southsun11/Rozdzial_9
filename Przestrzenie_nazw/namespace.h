#include <string>

namespace pers
{
	struct Person
	{
		std::string fname;
		std::string lname;
	};
	void showPerson(const Person&);
	void getPerson(Person&);
}

namespace debt
{
	using namespace pers;
	struct Debt
	{
		Person name;
		double amount;
	};
	void getDebt(Debt &);
	void showDebt(const Debt&);
	double sumDebts(const Debt [], int n);
}