//
// 2016-11-20:geg
//
// Programming project 8 on page 179.
//
// Text: "C Programming : A Modern Approach"
// Edition: 2nd (August 2008)
// Author: K. N. King
//
// Copyright (c) 2016 G Geiger
//
// Prompt for test scores for five students.
// There are five tests.
// Show total and average for the students.
// Show the average, high grade and low grade for each test.
//
//
// http://knking.com/books/c2/answers/index.html
//
#include <stdbool.h>
#include <stdio.h>
//
// 
#define NUM_STUDENTS 5
#define NUM_TESTS 5

int main (void)
{
  //
  // The first index will be the student
  // The second index will be the test
  //
  int array[5][5];
  int test_num, student_num,i;
  //
  // Students will need total and average
  //
  int sum_student[NUM_STUDENTS]={0};
  float avg_student[NUM_STUDENTS]={0.0};
  //
  // Tests will need average,high and low scores
  //
  int sum_test[NUM_TESTS]={0};
  float avg_test[NUM_TESTS]={0.0};
  int high_test[NUM_TESTS]={0};
  //
  // Note that low test will be compared to lowest student grade to initialize it to higher than possible grade
  //
  int low_test[NUM_TESTS]={200,200,200,200,200};

  //
  // For each student ask for the test scores
  //
  for (student_num=0; student_num < NUM_STUDENTS; student_num++) {

    printf("Enter student %d test scores: ",student_num);
    //
    // Get test scores for this student
    //
    scanf("%d %d %d %d %d",&array[student_num][0],
	                   &array[student_num][1],
	                   &array[student_num][2],
	                   &array[student_num][3],
	                   &array[student_num][4]);
    //
    // calculate sum for this student
    //
    for (i=0; i<NUM_TESTS; i++) {sum_student[student_num] += array[student_num][i];}
    //
    // calculate average for this student
    //
    avg_student[student_num] = (float) sum_student[student_num] / NUM_TESTS;

    printf("For student %d the total was %d and the average was %.2f\n",student_num,sum_student[student_num],avg_student[student_num]);
    
  }

  //
  // Calculate test statistics
  //

  for (test_num=0; test_num<NUM_TESTS; test_num++) {
    
    for (student_num=0; student_num<NUM_STUDENTS; student_num++) {
      //
      // Sum for this test
      //
      sum_test[test_num] += array[student_num][test_num];
      //
      // High score for this test
      //
      if (array[student_num][test_num] > high_test[test_num]) {high_test[test_num] = array[student_num][test_num];}
      //
      // Low score for this test
      //
      if (array[student_num][test_num] < low_test[test_num]) {low_test[test_num] = array[student_num][test_num];}
    }
    
    avg_test[test_num] = (float) sum_test[test_num] / NUM_TESTS;

    printf("For test number %d the sum was %d\n",test_num,sum_test[test_num]);
    
    printf("For test number %d the average score was %.2f, the high score was %d and the low score was %d\n",test_num,avg_test[test_num],high_test[test_num],low_test[test_num]);

  }
  printf("\n");

  return (0);

}
