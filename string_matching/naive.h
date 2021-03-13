#include <string>
#include <vector>

std::vector<int> naive_string_matcher(const std::string& T, const std::string& P) { 
	std::vector<int> valid_shifts; 
		
	for (int s = 0; s <= T.size() - P.size(); ++s) {  		
		int i;
		for (i = 0; i < P.size(); ++i) { 
			if (P[i] == T[s + i])
				continue;
			break;
		}
		if (P.size() == i)
			valid_shifts.push_back(s);	
	}

	return valid_shifts;
}


template<typename T>
void print(const std::vector<T>& v) { 
	for (auto& i : v) 
		std::cout << i << "\n";
}
 
