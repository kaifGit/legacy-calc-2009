#include "Loan.h"
#include "Utils.h"

/**
 * @brief Constructs a Loan object with given amount, rate, and tenure
 * @param amount Principal loan amount
 * @param rate Annual interest rate in percentage
 * @param years Number of years
 */
Loan::Loan(long double amount, long double rate, int years) {
    loan_amount = amount;
    interest_rate = rate;
    number_of_years = years;
}

/**
 * @brief Calculates monthly EMI using standard formula
 * @return EMI value
 */
double Loan::calculateMonthlyEMI() {
    double monthly_rate = interest_rate / 1200.0; // convert annual % to monthly decimal
    int total_months = number_of_years * 12;

    if(monthly_rate == 0){
        return loan_amount / total_months;
    }

    long double factor = power(1 + monthly_rate, total_months);
    double emi = (loan_amount * monthly_rate * factor) / (factor - 1);
    return emi;
}

/**
 * @brief Returns total amount to be paid over the loan tenure
 * @return Total amount
 */
double Loan::getTotalAmount() {
    return calculateMonthlyEMI() * number_of_years * 12;
}

/**
 * @brief Returns total interest to be paid
 * @return Total interest
 */
double Loan::getTotalInterest() {
    return getTotalAmount() - loan_amount;
}
