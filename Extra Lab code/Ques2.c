#include <stdio.h>

int findMissing(int a[], int n) {
    int i;
    int total = n * (n + 1) / 2;  
    int sum =0;
    
    for(i=0;i<n;i++){
        sum+=a[i];
    }
  return total-sum;
}

int main() {
    int n, i; 


    printf("Enter the number of elements (n): ");
    scanf("%d", &n);

    int a[n]; 

    printf("Enter %d distinct numbers from 0 to %d:\n", n, n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int missing = findMissing(a, n);
    printf("Missing number is: %d\n", missing);
return 0;
}

    return 0;
}
