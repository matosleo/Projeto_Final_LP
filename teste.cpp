#include <iostream>
#include <tuple>

std::tuple<int, int> testando( int a )
{

	return std::make_tuple( a, a);

}

int main(int argc, char const *argv[])
{
	std::tuple< int, int > temp = testando( 10 );

	std::cout << std::get<0>(temp) <<" " << std::get<1>(temp) << std::endl;
	return 0;
}