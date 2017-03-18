#include <matrix.hpp>
#include <catch.hpp>
                                    
SCENARIO("tmatrix init", "[init]") {
	tmatrix matrix;
	REQUIRE(matrix.rows() == 0);
	REQUIRE(matrix.columns() == 0);
}

