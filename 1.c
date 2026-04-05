#include <stdio.h>
int main() {
int n, arr[100];
printf("Enter number of lockers: ");
scanf("%d", &n);
printf("Enter locker numbers: ");
for(int i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}
for(int i = 1; i < n; i++) {
int key = arr[i];
int j = i - 1;
while(j >= 0 && arr[j] < key) {
arr[j + 1] = arr[j];
j--;
}
arr[j + 1] = key;
}
printf("Sorted locker numbers (Descending): ");
for(int i = 0; i < n; i++) {
printf("%d ", arr[i]);
}
return 0;
}
