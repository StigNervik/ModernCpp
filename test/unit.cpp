#include <catch2/catch.hpp>
#include "unit.h"

TEST_CASE( "Test unit functions" ) {

    Data::Unit unit;
    unit.setName("Name1");

    REQUIRE( unit.name() == "Name1");
}

