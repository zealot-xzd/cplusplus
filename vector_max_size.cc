//comparing size,capacity and max_size
#include<iostream>
#include<vector>

int main()
{
	std::vector<int> v;
	std::cout << "size: " << v.size() << "\n";
	std::cout << "capacity: " << v.capacity() << "\n";
	std::cout << "size: " << v.max_size() << "\n";

	for(int i=0; i<100; i++) v.push_back(i);
	
	std::cout << "size: " << v.size() << "\n";
	std::cout << "capacity: " << v.capacity() << "\n";
	std::cout << "size: " << v.max_size() << "\n";
	
	return 0;
}
	
