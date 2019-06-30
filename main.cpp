#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

vector<string> SplitIntoWords(const string& s);

int main(){

	  string s = "C Cpp Java Python";

	  vector<string> words = SplitIntoWords(s);
	  cout << words.size() << " ";
	  for (auto it = begin(words); it != end(words); ++it) {
	    if (it != begin(words)) {
	      cout << "/";
	    }
	    cout << *it;
	  }
	  cout << endl;

	  return 0;

}

vector<string> SplitIntoWords(const string& s){

	vector<string> res_v;
	auto res = find_if (begin(s), end(s), [](char c){return c == ' ';});
	string word(begin(s), res);
	res_v.push_back(word);

	while( res < end(s)) {
		auto start = res + 1;
		res = find_if (start, end(s), [](char c){return c == ' ';});
		string word(start, res);
		res_v.push_back(word);
	}

	return res_v;

}
