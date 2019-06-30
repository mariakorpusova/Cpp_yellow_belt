#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void PrintVectorPart(const vector<int>& numbers);

int main(){

	  PrintVectorPart({6, 1, 8, -5, 4});
	  cout << endl;
	  PrintVectorPart({-6, 1, 8, -5, 4});  // ������ �� ���������
	  cout << endl;
	  PrintVectorPart({6, 1, 8, 5, 4});
	  cout << endl;
	  return 0;

}

void PrintVectorPart(const vector<int>& numbers){

	auto res = find_if(begin(numbers), end(numbers),
			[](const int& num){ return num < 0;});

	while( res > begin(numbers)){
		res--;
		cout << *res << " ";
	}

}
