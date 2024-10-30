#include<iostream>
#include<vector>

template <class T>
T my_sqrt(T a)
{
	a *= a;
	return a;
}

template<class T>
std::vector<T> my_sqrt(std::vector<T> a)
{
	for (int i = 0; i < a.size(); ++i)
	{
		a[i] = my_sqrt(a[i]);
	}
	return a;
}

int main()
{
	int a = 5;
	int b = my_sqrt(a);
	std::vector<int> v1 = { 2,3,4,5,6,7 };
	std::vector<int> v2 = my_sqrt(v1);


	std::cout << "[IN]: " << a << std::endl;
	std::cout << "[OUT]: " << b << std::endl;
	std::cout << "[IN]: ";

	for (const auto& i : v1)
	{
		std::cout << i;
		if (i != v1[v1.size() - 1])
		{
			std::cout << ", ";
		}
	}
	std::cout << std::endl;
	std::cout << "[OUT]: ";
	for (const auto& i : v2)
	{
		std::cout << i;
		if (i != v2[v2.size() - 1])
		{
			std::cout << ", ";
		}
	}

	return 0;
}