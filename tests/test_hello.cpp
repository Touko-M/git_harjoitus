#include <gtest/gtest.h>
#include "hello.h"
//testi 1(palautetaan jokin merkkijono)
TEST(HelloTest, ReturnsNonEmptyString){
Hello h;
EXPECT_FALSE(h.greet().empty());
}
//testi 2(menee läpi vastakun "Hello, CI"
TEST(HelloTest, ReturnsCorrectGreeting){
Hello h;
EXPECT_EQ(h.greet(), "Hello, CI!");
}
