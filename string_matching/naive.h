#include <string>

std::vector<int> naive_string_matcher(std::string& T, std::string& P) { 
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

