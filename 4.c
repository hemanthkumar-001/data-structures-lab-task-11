#include <stdio.h>
int main() {
int n, a[10], b[10], result[20];
printf("Enter number of elements: ");
scanf("%d", &n);
printf("Enter first array (Ascending): ");
for(int i = 0; i < n; i++)
scanf("%d", &a[i]);
printf("Enter second array (Descending): ");
for(int i = 0; i < n; i++)
scanf("%d", &b[i]);
for(int i = 0; i < n / 2; i++) {
int temp = b[i];
b[i] = b[n - i - 1];
b[n - i - 1] = temp;
}
int i = 0, j = 0, k = 0;
while(i < n && j < n) {
if(a[i] < b[j])
result[k++] = a[i++];
else
result[k++] = b[j++];
}
while(i < n)
result[k++] = a[i++];
while(j < n)
result[k++] = b[j++];
printf("Merged sorted array: ");
for(int i = 0; i < 2 * n; i++)
printf("%d ", result[i]);
return 0;
}
