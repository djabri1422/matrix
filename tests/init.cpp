#include <matrix.hpp>
#include <catch.hpp>
                                    
SCENARIO("matrix init", "[init]") {
	matrix_t matrix;
	REQUIRE(matrix.rows() == 0);
	REQUIRE(matrix.columns() == 0);
}
                                   
SCENARIO("matrix init", "[init]") {
	matrix_t matrix;
	REQUIRE(matrix.size()==0);
	REQUIRE(matrix.capacity() ==0);
	for(int i=0;i<matrix.size();i++){
		REQUIRE(matrix[i][j]==0)
	}
}

SCENARIO("matrix sum","[inti]"){
	matrix_t a, b, e;
	std::ifstream("A.txt") >> a;
	std::ifstream("B.txt") >> b;
	std::ifstream("A+B.txt") >> e;
	REQUIRE(a+b == e);
}
