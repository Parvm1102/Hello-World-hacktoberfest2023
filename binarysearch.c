#include <stdio.h>
int bisearch(int arr[],int,int);
int main() {
    int arr[20],a,size,i;
    printf("enter the number of elements");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
    	printf("enter the element %d \n",i+1);
        scanf("%d",&arr[i]);
    }
    printf("enter the number to be searched\n");
    scanf("%d",&a);
    printf("%d",bisearch(arr,a,size));
    return 0;
}
int bisearch(int arr[], int a, int size) {
    int low = 0, up = size - 1, mid;

    while (low <= up) {
        mid = low + (up - low) / 2; 

        if (arr[mid] == a) {
            return mid+1; // Element found, return its index.
        } else if (arr[mid] < a) {
            low = mid + 1; // Update the lower bound.
        } else {
            up = mid - 1; // Update the upper bound.
        }
    }

    return -1; // Element not found in the array.
}
