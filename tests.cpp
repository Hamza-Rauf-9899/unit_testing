#include "totest.cpp"
#include <limits.h>
#include <gtest/gtest.h>
using namespace std;

class BankAccountTest : public testing::Test{
        protected:
        BankAccount *account;
        void SetUp()
        {
                account = new BankAccount;
                 cout <<"Alive\n";}
        void TearDown()
        {
                delete account;
                cout <<"Dead\n";
        }
};
TEST_F(BankAccountTest, test3){
       account->deposite(200);
       EXPECT_EQ(100,account->balance);}

TEST (BankAccount, test1){
       BankAccount instance;
       instance.deposite(100);
       EXPECT_EQ(100,instance.balance);}

TEST (BankAccount, test2){
       BankAccount instance;
       instance.deposite(100);
      //  ASSERT_EQ(100,instance.balance);
       ASSERT_EQ(500,instance.balance);
       instance.deduction(50);
       EXPECT_EQ(100,instance.balance);}
 
TEST(SquareRootTest, PositiveNos) { 
    ASSERT_EQ(6, squareRoot(36.0));
    ASSERT_EQ(18.0, squareRoot(324.0));
    ASSERT_EQ(25.4, squareRoot(645.16));
    ASSERT_EQ(0, squareRoot(0.0));
}
 
TEST(SquareRootTest, NegativeNos) {
    ASSERT_EQ(-1.0, squareRoot(-15.0));
    ASSERT_EQ(-1.0, squareRoot(-0.2));
}

// Tests factorial of 0.
TEST(FactorialTest, HandlesZeroInput) {
  EXPECT_EQ(Factorial(0), 1);
}
// Tests factorial of positive numbers.
TEST(FactorialTest, HandlesPositiveInput) {
  EXPECT_EQ(Factorial(1), 1);
  EXPECT_EQ(Factorial(2), 2);
  EXPECT_EQ(Factorial(3), 6);
  EXPECT_EQ(Factorial(8), 40320);
}
// Tests IsPrime()

// Tests negative input.
TEST(IsPrimeTest, Negative) {
  // This test belongs to the IsPrimeTest test case.

  EXPECT_FALSE(IsPrime(-1));
  EXPECT_FALSE(IsPrime(-2));
  EXPECT_FALSE(IsPrime(INT_MIN));
}

// Tests some trivial cases.
TEST(IsPrimeTest, Trivial) {
  EXPECT_FALSE(IsPrime(0));
  EXPECT_FALSE(IsPrime(1));
  EXPECT_TRUE(IsPrime(2));
  EXPECT_TRUE(IsPrime(3));
}

// Tests positive input.
TEST(IsPrimeTest, Positive) {
  EXPECT_FALSE(IsPrime(4));
  EXPECT_TRUE(IsPrime(5));
  EXPECT_FALSE(IsPrime(6));
  EXPECT_TRUE(IsPrime(23));
}


TEST(AdditionTest, test2) { 
    ASSERT_EQ(2, addition(1,1));  
    ASSERT_EQ(0, addition(0,0));

}

TEST(equality_test, test3) { 
    ASSERT_EQ(true, equal(1,1));  
    ASSERT_EQ(false, equal(0,1));

}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}