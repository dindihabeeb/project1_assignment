#include <stdio.h>

int main() {
  int choice;
  float a, b;

  while (1) {
    printf("\nSimple Calculator\n");
    printf("1. Add\n2. Subtract\n3. Exit\n");
    printf("Enter choice (1-3): ");
    scanf("%d", &choice);

    if (choice == 3) {
      printf("Exiting program. Goodbye!\n");
      break;
    }

    if (choice < 1 || choice > 3) {
      printf("Invalid choice. Please try again.\n");
      continue;
    }

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch (choice) {
    case 1:
      printf("Result: %.2f + %.2f = %.2f\n", a, b, a + b);
      break;
    case 2:
      printf("Result: %.2f - %.2f = %.2f\n", a, b, a - b);
      break;
    }
  }

  return 0;
}
