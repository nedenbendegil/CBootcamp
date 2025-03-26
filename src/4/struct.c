#include <stdio.h>

typedef struct {
    int id;
    int grade;
    int room;
} student;

void printInfo(student* s) {
    printf("The ID for the student is: %d\n",(*s).id);
    printf("Grade of the student is: %d\n", s->grade);
}

int main() {
   student s1;
   s1.id = 3434;
   s1.grade = 4;
   s1.room = 2;
   printInfo(&s1);
   return 0;
}
