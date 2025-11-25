#ifndef LOAN_H
#define LOAN_H

/**
 * @class Loan
 * @brief Represents a loan and provides methods to calculate EMI, total amount, and interest.
 */
class Loan{
private:
    long double loan_amount;   ///< Principal loan amount
    long double interest_rate; ///< Annual interest rate in percentage
    int number_of_years;       ///< Tenure in years

public:
    /**
     * @brief Constructs a Loan object
     * @param amount Principal loan amount
     * @param rate Annual interest rate in percentage
     * @param years Number of years
     */
    Loan(long double amount, long double rate, int years);

    /**
     * @brief Calculates the monthly EMI
     * @return Monthly EMI
     */
    double calculateMonthlyEMI();

    /**
     * @brief Calculates total amount to be paid over the loan tenure
     * @return Total payment amount
     */
    double getTotalAmount();

    /**
     * @brief Calculates total interest to be paid
     * @return Total interest
     */
    double getTotalInterest();

    // Deprecated/unused functions (optional to remove)
    double calculateTotalAmount();
    double calculateTotalInterest();
};

#endif
