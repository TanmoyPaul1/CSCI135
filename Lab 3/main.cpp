#include <iostream>

#include "reservoir.h"
#include "reverseorder.h"

int main()
{
	std::cout << "\nTask A: " << std::endl;
	double a = get_east_storage("01/01/2018");
	double b = get_east_storage("03/15/2018");
	double c = get_east_storage("05/20/2018");
	double d = get_east_storage("09/25/2018");
	double e = get_east_storage("12/31/2018");

	std::cout << "\nTask B: " << std::endl;
	double min = get_min_east();
	double max = get_max_east();

	std::cout << "\nTask C: " << std::endl;
	std::string f = compare_basins("01/01/2018");
	std::string g = compare_basins("01/06/2018");
	std::string h = compare_basins("09/13/2018");
	std::string i = compare_basins("09/15/2018");
	std::string j = compare_basins("09/17/2018");
	std::string k = compare_basins("12/31/2018");

	std::cout << "\nTask D: " << std::endl;
	reverse_order("01/01/2018", "01/05/2018");
	std::cout << std::endl;
	reverse_order("05/29/2018", "06/02/2018");
	std::cout << std::endl;
	reverse_order("08/20/2018", "08/24/2018");
	std::cout << std::endl;
	reverse_order("12/25/2018", "12/31/2018");
  return 0;
}
