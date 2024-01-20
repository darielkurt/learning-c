#include <stdio.h>
#include <string.h>

int main() {
  printf("Someone: Can i take you out on a date? \n");
  char answer[10];

  while (strcmp(answer, "yes") != 0) {
    printf("You: ");
    scanf("%s", answer);
    if (strcmp(answer, "yes") != 0) {
      printf("Someone: Can i take you out on a date? \n");
    }
  }
  printf("Someone: ok tnx \n");

  return 0;
}
