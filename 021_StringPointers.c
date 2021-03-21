#include <stdio.h>

int main(void) {
  char name[] = "zaid rather";

  printf("%c \n", *name);     	// Output will be I
  printf("%c \n", *(name+3));	// Output will be A
  printf("%c \n", *(name+8));   // Output will be R

  char *namePtr;

  namePtr = name;
  printf("%c \n", *namePtr);     // Output will be I
  printf("%c \n", *(namePtr+2)); // Output will be H
  printf("%c \n", *(namePtr+7)); // Output will be E
}