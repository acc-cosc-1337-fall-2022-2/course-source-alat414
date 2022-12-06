#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include<decisions.h>
#include<decisions.cpp>

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("Test get the grade and letter.")
{
	REQUIRE(get_letter_grade_using_if(90) = "Grade A");
	REQUIRE(get_letter_grade_using_if(80) = "Grade B");
	REQUIRE(get_letter_grade_using_if(70) = "Grade C");
	REQUIRE(get_letter_grade_using_if(60) = "Grade D");
	REQUIRE(get_letter_grade_using_if(50) = "Grade F");

}

TEST_CASE("Test get menu switch")
{
	REQUIRE(menu(1) =="Grade A");
	REQUIRE(menu(2) =="Grade A");
	REQUIRE(menu(3) =="Grade A");
	REQUIRE(menu(4) =="Grade A");
	REQUIRE(menu(5) =="Grade A");
}
