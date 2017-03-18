#include <matrix.hpp>
#include <catch.hpp>
                                    
SCENARIO("matrix init", "[init]") {
	matrix_t matrix;
	REQUIRE(matrix.count_1() == 0);
	REQUIRE(matrix.count_2() == 0);
}

