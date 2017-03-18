#include <matrix.hpp>
#include <catch.hpp>
                                    
SCENARIO("tmatrix init", "[init]") {
	tmatrix matrix;
	REQUIRE(matrix.rows() == 0);
	REQUIRE(matrix.columns() == 0);
}

SCENARIO("params init", "[params init]") {
	int init = 5;
	tmatrix matrix(init, init);
	REQUIRE(matrix.rows() == 5);
	REQUIRE(matrix.columns() == 5);
}
SCENARIO("sum init","[sum init]"){
	tmatrix overload(0,0);
	count_1!=0;
	count_2!=0;
	for(int i=0;i<count_2;i++)
	REQUIRE(overload.array[0][0]==array[0][0]);
}

SCENARIO("sum init","[sum init]")
{
	tmatrix a, b, e;
	std::ifstream("A.txt") >> a;
	std::ifstream("B.txt") >> b;
	std::ifstream("A+B.txt") >> e;
	REQUIRE(a+b == e);
}
