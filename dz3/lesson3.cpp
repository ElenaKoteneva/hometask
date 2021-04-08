#include <iostream>

extern const int l,m,n,q;

int main(){
	
// Task 1
	
	const int a = 5;
	const int b = 6;
	const int c = 7;
	const int d = 8;
	std::cout<< a * (b + ((float)c /(float) d)) <<std::endl;
	
// Task2
	
	int x = 7;
	const int y = 21;
	std::cout<<((x > y) ? (2 * (x - y)) : (y - x))<<std::endl;
	
// Task 3
	
	std::cout<< l * (m + ((float)n /(float) q)) <<std::endl;
	
// Task 4
	
	int array[3][3][3] = {{{},{},{}},
						   {{},{2,9,6},{}},
						   {{},{},{}}};
	int *p;
	p = &array[1][1][1];
	std::cout<<*p<<std::endl;
	
	return 0;
}