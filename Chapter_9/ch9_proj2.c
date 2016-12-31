//
// 2016-12-11:geg
//
// Programming project 2 on page 217.
//
// Text: "C Programming : A Modern Approach"
// Edition: 2nd (August 2008)
// Author: K. N. King
//
// Copyright (c) 2016 G Geiger
//
//
// This is an updated version of ch5_proj5
//
// Income Tax
//
// State income tax is calculated as follows
//
// Income                 Tax
// Not over $750          1% of income
// $750    $2250          7.50   plus 2% of income over $750
// $2250   $3750          37.50  plus 3% of income over $2250
// $3750   $5250          82.50  plus 4% of income over $3750
// $5250   $7000          142.50 plus 5% of income over $5250
// Over    $7000          230.00 plus 6% of income over $7000
//
// Prompt for the income and display the tax
//
// Use a function to calculate the tax.
//
// http://knking.com/books/c2/answers/index.html
//
#include <stdbool.h>
#include <stdio.h>

float calculate_tax( float income );


		   
int main (void)
{

  float income;
  float tax;


  //
  // Prompt for income
  //
  printf("What is your taxable income? ");
  scanf("%f",&income);


  tax = calculate_tax(income);
  
  //
  // Display the tax
  //
  printf("Total income tax: %.2f \n",tax);

  return (0);

}


float calculate_tax( float income ) {

  float tax;
  //
  // Find the bracket
  //
  if      (                     income <=  750.00) {tax =          0.01 * income             ;}
  else if (income >  750.00  && income <= 2250.00) {tax =   7.50 + 0.02 * (income -  750.00) ;}
  else if (income > 2250.00  && income <= 3750.00) {tax =  37.50 + 0.03 * (income - 2250.00) ;}
  else if (income > 3750.00  && income <= 5250.00) {tax =  82.50 + 0.04 * (income - 3750.00) ;}
  else if (income > 5250.00  && income <= 7000.00) {tax = 142.50 + 0.05 * (income - 5250.00) ;}
  else                                             {tax = 230.00 + 0.06 * (income - 7000.00) ;}

  return(tax);

}

