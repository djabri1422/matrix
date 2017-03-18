#include <matrix.hpp>
#include <catch.hpp>
                                    
SCENARIO("tmatrix init", "[init]") {
	tmatrix matrix;
	REQUIRE(matrix.count_1() == 0);
	REQUIRE(matrix.count_2() == 0);
}

