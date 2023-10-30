#include <stdio.h>

void print_int_array(int *arr, size_t size) {
    if (size == 0) {
        printf("[]");
    } else {     
        putchar('[');
        for (int i = 0; i < size - 1; i++)
            printf("%d, ", arr[i]);
        printf("%d]", arr[size - 1]);
    }
}

int main() {
  int list[] = {1,4,7,2,9,13, 3};
  size_t length = sizeof(list) / sizeof(list[0]);
  
  for (int i = 0; i < length; i++) {
       for (int j = 0; j < length - 1 - i; j++) {
       if (list[j] >= list[j+1]) {
       int temp = list[j];
       list[j] = list[j + 1];
       list[j+1] = temp;
       }
       }
  }

  print_int_array(list, length);
}

