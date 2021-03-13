#include <iostream>
#include "naive.h"

int main(void) { 
	std::string haystack,needle;
	std::cin >> haystack >> needle;

	std::vector<int> result ( naive_string_matcher(haystack,needle) );
	print<int>(result);
	return 0;
}

