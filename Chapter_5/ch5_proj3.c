//
// 2016-10-02:geg
//
// Programming project 3 on page 96.
//
// Text: "C Programming : A Modern Approach"
// Edition: 2nd (August 2008)
// Author: K. N. King
//
// Copyright (c) 2016 G Geiger
//
// Modify the program broker.c from page 81
//    1. Ask the user to enter the number of shares and the price per share
//    2. Show a rival broker's commission
//
//
// http://knking.com/books/c2/answers/index.html
//
#include <stdio.h>

int main (void)
{
  int num_shares;
  float price_shares, total_sale, broker_comm, competition_comm;

  printf("Enter the number of shares : ");
  scanf ("%d",&num_shares);
  

  printf("Enter the price per share : ");
  scanf ("%f",&price_shares);

  total_sale = num_shares * price_shares;
  
  printf("The total value is %.2f \n",total_sale);
  //
  // Commission Scale
  //
  // Under $2500         : $30  + 1.7 %
  // $2500 - $6250       : $56  + 0.66 % 
  // $6250 - $20000      : $76  + 0.34 %
  // $20000 - $50,000    : $100 + 0.22 %
  // $50,000 - $500,000  : $155 + 0.11 %
  // Over $500,000       : $255 + 0.09 %
  //
  if (total_sale < 2500.00f)
    {
      broker_comm = 30 + 0.017 * total_sale;
    }
  else if (total_sale < 6250.00f)
    {
      broker_comm = 56 + 0.0066 * total_sale;
    }
  else if (total_sale < 20000.00f)
    {
      broker_comm = 76 + 0.0034 * total_sale;
    }
  else if (total_sale < 50000.00f)
    {
      broker_comm = 100 + 0.0022 * total_sale;
    }
  else if (total_sale < 500000.00f)
    {
      broker_comm = 155 + 0.0011 * total_sale;
    }
  else 
    {
      broker_comm = 255 + 0.0009 * total_sale;
    }

  printf ("The broker's commission is $%.2f\n",broker_comm);
  

  //
  // The competitor's commission scale is based on the number of shares
  //
  // Under 2000 shares : commission is $33 + $0.03 per share
  // >= 2000 shares : commission is $33 + $0.02 per share
  //
  if (num_shares < 2000)
    {
      competition_comm = 33 + 0.03 * num_shares;
    }
  else 
    {
      competition_comm = 33 + 0.02 * num_shares;
    }
  
  printf ("The competition's commission is $%.2f\n",competition_comm);
  
  




  
  return (0);
}
