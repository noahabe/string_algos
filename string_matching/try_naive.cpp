#include "naive.h"

int main(void) { 
	std::vector<int> result ( naive_string_matcher("acaabc","aab") );
	print<int>(result);
	return 0;
}

