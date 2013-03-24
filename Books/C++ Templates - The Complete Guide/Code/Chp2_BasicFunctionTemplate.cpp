#include <iostream>

template <typename T, typename T2>
T max( T arg1,  T2 arg2) 
{
	std::cout << arg1 << std::endl;
	std::cout << arg2 << std::endl;
	
	return arg1 > arg2 ? arg1 : arg2;
}

inline char const* const& max(char const* const& a, char const* const& b) {
		
}
 
int main(int argc, char* argv) {
	std::cout << max(44, 55) << std::endl;
}