#include <gtest/gtest.h>
#include <bits/stdc++.h>
#include <numeric>
#include <vector>
#include <string>
#include <thread>
#include <mutex>
#include <boost/array.hpp>
#include <boost/signals2/signal.hpp>
#include "my.hpp"


using namespace std;


constexpr int len_foo_aa(){
	return 10;

}


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

TEST(MyTest, st){

	std::string s("hello world!");
	EXPECT_EQ(s.find("xxxx"), s.npos);
	EXPECT_EQ(s.find("he"), 0);
}

TEST(MyTest, tarr){
	int a[3] = {1,2,3};
	EXPECT_EQ(12, sizeof(a));
	
}

TEST(MyTest, sleep){
	std::this_thread::sleep_for(std::chrono::milliseconds(100));
}

TEST(MyTest, Cat){
	Cat::run();
}

TEST(MyTest, myMax){

	EXPECT_EQ(myMax(1, 23), 23);

}

TEST(MyTest, mySum){
	EXPECT_EQ(mySum(1, 25), 26);
}

TEST(MyTest, TestArray){
	std::array<int, 5> ar1{1,2,3,4,5};
	EXPECT_EQ(ar1.size(), 5);
}


TEST(MyTest, TestArray2){
	boost::array<int ,5> arr = {1,2,3,4,5};
	EXPECT_EQ(arr.size(), 5);
}

struct HelloWorld
{

void operator()() const{
	std::cout << "Hello, World!" << std::endl;
}
};

TEST(MyTest, Hello23){
	boost::signals2::signal<void ()> sig;
	HelloWorld hello;
    sig.connect(hello);
	sig();
}

TEST(MyTest, Hello24){
	int num = 0x00636261;
	int * pnum = &num;
	char * pstr = reinterpret_cast<char *>(pnum);
}


TEST(MyTest, Hello25){
	char *p = NULL;
	char *p1 = nullptr;

}

TEST(MyTest, Hello26){
	
	int a[len_foo_aa()];

}

TEST(MyTest, Hello27){
if(int a=100){

}
}

TEST(MyTest, Hello28){
	Func({1,2.1});
}


TEST(MyTest, Hello29){

	Fish f("a1");
	f.swim();
	Fish *p = new AFish("afish!");
	p->swim();
}

TEST(MyTest, Hello30){

	Mon m=1;
//	Mon m1 = m;
}


TEST(MyTest, Hello31){
	int i = 100;
	float j = (int)i;
	cout << j << endl;
	j = static_cast<float>(i);
	cout << j << endl;
}

TEST(MyTest, Hello32){
	
vector<int> v{1,2,3,4,5};

std::for_each(v.begin(), v.end(), [](int i){
	std::cout << i << " ";
});
}

TEST(MyTest, Hello33){
	Add1 a(1,2);
	std::cout << a() << std::endl;

}

int main(int argc, char *argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
