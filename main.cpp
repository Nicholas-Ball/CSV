#include <iostream>
#include "csv.hpp"

int main()
{
	CSV csv;

	csv.loadfromFile("United_States_COVID-19_Cases_and_Deaths_by_State_over_Time.csv", &csv);

	std::cout<<csv.String(csv)<<std::endl;;
	return 0;
}