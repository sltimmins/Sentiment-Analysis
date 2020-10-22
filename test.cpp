//
// Created by Sammy Timmins on 9/2/20.
//
//#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include <cstring>
#include "DSString.h"

using namespace std;

TEST_CASE("String class", "[string")
{
    DSString s[10];
    s[0] = DSString("testString");
    s[1] = DSString("a test string");
    s[2] = DSString("");
    s[3] = DSString("THIS IS AN UPPERCASE STRING");
    s[4] = DSString("this is an uppercase string");
    s[5] = DSString("\n");
    s[6] = DSString("");
    s[7] = DSString("  split  split  split  ");
    s[8] = DSString("                          ");
    s[9] = DSString("testString");

    SECTION("Equality operators")
    {
        REQUIRE((s[0] == DSString("testString")));
        REQUIRE((s[0] == s[9]));
        REQUIRE((s[2] == ""));
        REQUIRE((s[1] == "a test string"));
        REQUIRE((!(s[3] == s[4])));
    }

    SECTION("Assignment operators")
    {
        DSString str;
        str = "a test string";
        REQUIRE((str == s[1]));
        str = DSString("testString");
        REQUIRE((str == s[0]));
        str = "";
        REQUIRE((str == s[6]));
        str = DSString("\n");
        REQUIRE((str == s[5]));
    }

    SECTION("Addition operator")
    {
        REQUIRE((DSString("testStringtestString") == s[0] + s[9]));
        REQUIRE((s[6] + s[6] == ""));
        REQUIRE((s[5] + s[6] == DSString("\n")));
        REQUIRE((s[0] + s[1] + s[2] == "testStringa test string"));
        REQUIRE((s[0] + 's' == "testStrings"));
        REQUIRE((s[0] + " testString" == "testString testString"));
    }

    SECTION("Greater than operator")
    {
        REQUIRE((s[0] > s[1]));
        REQUIRE((s[4] > s[3]));
        REQUIRE((s[9] > s[6]));
        REQUIRE((s[7] > s[6]));
    }

    SECTION("[] operator")
    {
        REQUIRE((s[0][1] == 'e'));
        REQUIRE((s[4][4] == ' '));
        REQUIRE((s[6][0] == 0));
    }

    SECTION("Substring function")
    {
        REQUIRE((s[0].substr(0, 5) == "testS"));
        REQUIRE((s[4].substr(0, 4) == "this"));
        REQUIRE((s[4].substr(1, 3) == "hi"));

    }

    SECTION("c_str function")
    {
        REQUIRE((strcmp(s[0].c_str(), "testString") == 0));
        REQUIRE((strcmp(s[9].c_str(), s[0].c_str()) == 0));
        REQUIRE((strcmp(s[2].c_str(), "") == 0));
    }

    SECTION("< operator")
    {
        REQUIRE((s[1] < s[0]));
        REQUIRE((s[3] < s[4]));
        REQUIRE((s[6] < s[9]));
        REQUIRE((s[6] < s[7]));
    }

    SECTION("getLength")
    {
        REQUIRE((s[2].getLength() == 0));
        REQUIRE((s[0].getLength() == 10));
        REQUIRE((s[5].getLength() == 1));
    }

    SECTION("getCapacity")
    {
        REQUIRE((s[2].getCapacity() == 1));
        REQUIRE((s[0].getCapacity() == 11));
        REQUIRE((s[5].getCapacity() == 2));
    }

    SECTION("getString")
    {
        REQUIRE((strcmp(s[0].getString(), "testString") == 0));
        REQUIRE((strcmp(s[2].getString(), "") == 0));
        REQUIRE((strcmp(s[3].getString(), "THIS IS AN UPPERCASE STRING") == 0));
        REQUIRE((strcmp(s[4].getString(), "this is an uppercase string") == 0));
    }
}
