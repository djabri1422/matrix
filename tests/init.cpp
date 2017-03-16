#include <matrix.hpp>
#include <catch.hpp>

SCENARIO("matrix init", "[init]") {
	matrix_t matrix;
	REQUIRE(matrix.rows() == 0);
	REQUIRE(matrix.columns() == 0);
}

SCENARIO("matrix init", "[init]") {
	vector_t vector;
	REQUIRE(vector.size()==0);
	REQUIRE(vector.capacity() ==0);
	for(int i=0;i<vector.size();i++){
		REQUIRE(matrix[i][j]==0)
	}
}
