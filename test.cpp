#include <gtest/gtest.h>
#include <numeric>
#include <vector>
#include <string>
#include <thread>
#include "my.hpp"


using namespace std;


TEST(MyTest, Sum)
{
    std::vector<int> vec{1, 2, 3, 4, 5};
    int sum = std::accumulate(vec.begin(), vec.end(), 0);
    EXPECT_EQ(sum, 15);
}

TEST(MyTest, Abs)
{
    int v = std::abs(-3);
    EXPECT_EQ(v, 3);
}


TEST(MyTest, sizeof)
{

	EXPECT_EQ(sizeof('c'), 1);
}

TEST(MyTest, add)
{
    EXPECT_EQ(add(), 10);
}

TEST(MyTest, Second)
{
    int a = Second::add(1,3);
    EXPECT_EQ(a, 4);
    a = Second::add(1,2, 3);
    EXPECT_EQ(a, 6);
}

TEST(MyTest, String)
{
    string x = "1";
    string y = "1";
    string s = x + y;
    EXPECT_EQ(s, "11");
    s.append("ab");
    EXPECT_EQ(s, "11ab");
}

TEST(MyTest, Ref)
{
    string foo = "hi";
    string& bar = foo;
    EXPECT_EQ(foo, bar);
}

TEST(MyTest, Ref1)
{
    int i = 123;
    ::to100(i);
    EXPECT_EQ(i, 100);
}

TEST(MyTest, ECar)
{
    EXPECT_NE(ECar::SUV, ECar::Sedan);
    EXPECT_EQ(GetMyCarType(), ECar::SUV);
}

TEST(MyTest, Thread)
{
    std::thread t(f1);
    t.join();
}

TEST(MyTest, Filesystem)
{
}

TEST(MyTest, Dog)
{
    Dog d("suv");
    EXPECT_EQ(d.getName(), "suv");
}

TEST(MyTest, Auto){
    EXPECT_EQ(getValue() , 100);
}

TEST(MyTest, Init){
    int i{1};
    EXPECT_EQ(i, 1);
}

int main(int argc, char *argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
