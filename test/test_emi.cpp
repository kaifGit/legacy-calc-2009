#include <gtest/gtest.h>
#include "../src/Loan.h"
#include <cmath> 

TEST(LoanTest, CorrectEMICalculation) {
    double emi = loan.calculateMonthlyEMI();
    EXPECT_NEAR(emi, 1321.51, 0.1);
}
TEST(LoanTest, InvalidInputHandling) {
    Loan loan(-50000, 10, 5);
    double emi = loan.calculateMonthlyEMI();
    EXPECT_LT(emi, 0);
    Loan loan2(50000, 10, 0);
    double emi2 = loan2.calculateMonthlyEMI();
    EXPECT_TRUE(std::isinf(emi2) || emi2 == 0);}

TEST(LoanTest, LargeTenureEMI) {
    Loan loan(500000, 7, 40); 
    double emi = loan.calculateMonthlyEMI();
    EXPECT_GT(emi, 0);
    double total = loan.getTotalAmount();
    EXPECT_GT(total, 0);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
