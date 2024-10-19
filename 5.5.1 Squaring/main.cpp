#include<iostream>
#include<vector>

template <class T>
void sqr(T& a)
{
	a *= a;
}

template<class T>
void sqr(std::vector<T>& a)
{
	for (int i = 0; i < a.size(); ++i)
	{
		sqr(a[i]);
	}
}

int main()
{
	int b = 4;
	std::cout << "[IN] " << b << std::endl;
	sqr(b);
	std::cout << "[OUT] " << b << std::endl;

	std::vector<int> vec {-1, 4, 8};
	std::cout << "[IN] ";
	for (const auto & i : vec)
	{
		std::cout << i;
		if (i != vec[vec.size() - 1])
		{
			std::cout << ", ";
		}
	}
	std::cout << std::endl;
	sqr(vec);
	std::cout << "[OUT] ";
	for (const auto& i : vec)
	{
		std::cout << i;
		if (i != vec[vec.size() - 1])
		{
			std::cout << ", ";
		}
	}

	return 0;
}