//
// 2016-08-21:geg
//
// Programming project 8 on page 35.
//
// Text: "C Programming : A Modern Approach"
// Edition: 2nd (August 2008)
// Author: K. N. King
//
// Copyright (c) 2016 G Geiger
//
// Show the end of month value on a loan given a annual interest rate
// and a constant monthly payment.
//
// http://knking.com/books/c2/answers/index.html
//
#include <stdio.h>

int main (void)
{
  float loan_value,interest_rate,monthly_payment;

  printf ("Enter amount of loan: ");

  scanf ("%f",&loan_value);


  printf ("Enter the annual interest rate (in percent): ");

  scanf ("%f",&interest_rate);
  interest_rate = (interest_rate / 100) / 12;
  
  printf ("Monthly interest rate is: %.2f percent\n",interest_rate * 100);

  printf ("Enter the monthly payment: ");

  scanf ("%f",&monthly_payment);
  //
  // First month
  //
  // Loan value increased at month end
  //
  loan_value = loan_value * (1 + interest_rate);
  //
  // Loan value then decreased by payment
  //
  loan_value = loan_value - monthly_payment;
  printf ("Balance remaining after first payment: $%.2f\n",loan_value);  


  // Second month
  loan_value = loan_value * (1 + interest_rate);
  loan_value = loan_value - monthly_payment;
  printf ("Balance remaining after second payment: $%.2f\n",loan_value);  


  // Third month
  loan_value = loan_value * (1 + interest_rate);
  loan_value = loan_value - monthly_payment;
  printf ("Balance remaining after third payment: $%.2f\n",loan_value);  


  

  return (0);
}
