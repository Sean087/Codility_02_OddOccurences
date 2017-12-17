#include "Solution.h"

int main(char * argv[], int argc) {
	std::vector<int> A;

	A.push_back(9);
	A.push_back(3);
	A.push_back(9);
	A.push_back(3);
	A.push_back(9);
	A.push_back(7);
	A.push_back(9);

	printf("Unpaired element is %d\n", solution(A));

	system("pause");
	return 0;
}