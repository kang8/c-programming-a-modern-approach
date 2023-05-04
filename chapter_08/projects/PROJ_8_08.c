/**
 * Modify Programming Project 7(./PROJ_8_07.c) so that it prompts for five quiz
 * grades for each of five students, then computes the total score and average
 * score for each student, and the average score, high score, and low score for
 * each quiz.
 */

#include <stdio.h>

#define NUM_QUIZZES 5
#define NUM_STUDENTS 5

int main(void) {
  int grades[NUM_STUDENTS][NUM_QUIZZES] = {0};
  int total, high, low;

  for (int student = 0; student < NUM_STUDENTS; student++) {
    printf("Enter grades for student %d: ", student + 1);

    for (int quiz = 0; quiz < NUM_QUIZZES; quiz++) {
      scanf("%d", &grades[student][quiz]);
    }
  }

  printf("\nStudent\tTotal\tAverage\n");

  for (int student = 0; student < NUM_STUDENTS; student++) {
    printf("%4d\t", student + 1);
    total = 0;

    for (int quiz = 0; quiz < NUM_QUIZZES; quiz++) {
      total += grades[student][quiz];
    }

    printf("%3d\t%3d\n", total, total / NUM_QUIZZES);
  }

  printf("\nQuiz\tAverage\tHigh\tLow\n");

  for (int quiz = 0; quiz < NUM_QUIZZES; quiz++) {
    printf("%3d\t", quiz + 1);
    total = 0;
    high = 0;
    low = 100;

    for (int student = 0; student < NUM_STUDENTS; student++) {
      total += grades[student][quiz];

      if (grades[student][quiz] > high) {
        high = grades[student][quiz];
      }

      if (grades[student][quiz] < low) {
        low = grades[student][quiz];
      }
    }
    printf("%3d\t%3d\t%3d\n", total / NUM_STUDENTS, high, low);
  }

  printf("\n");

  return 0;
}
