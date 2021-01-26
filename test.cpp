#include <gtest/gtest.h>
#include <numeric>
#include <vector>
#include <string>
#include <thread>
#include <mutex>
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
TEST(MyTest, aaa){
    EXPECT_EQ(nullptr, nullptr);
}

TEST(MyTest, ref){
	int i = 100;
	int &j = i;
	EXPECT_EQ(i, j);
}

TEST(MyTest, fff){
	int i = 100;
	int && k = std::move(i);
	EXPECT_EQ(i, k);
}

TEST(MyTest, swap){
    int i;
    int j;
    i = 0;
    j = 1;
    std::swap(i, j);
    std::cout << i << endl;
    std::cout << j << endl;
}

// 测试初始化
TEST(MyTest, init){
	int i(200);
	EXPECT_EQ(i, 200);
}

TEST(MyTest, rvalue){
	int &&i = 19;
	EXPECT_EQ(i, 19);
	int j = i;
	EXPECT_EQ(19, j);
}

TEST(MyTest, lock){
	std::mutex m;
	std::lock_guard<std::mutex> lk(m);
}

// 利用变量退出作用时解锁!
TEST(MyTest, lock2){
	std::mutex m;
	std::scoped_lock lock(m);
}

int main(int argc, char *argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
