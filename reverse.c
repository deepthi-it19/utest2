#include <stdio.h>
int main() {
    int n,a[100];
    printf("\nenter no of elements to store in array:");
    scanf("%d",&n);
    printf("\nenter %d elements:",n);
    for(int i=0;i<n;i++)
    {
        printf("\nelement %d:",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nthe values stored in the array:");
    for(int i=0;i<n;i++)
    {
         printf("%d",a[i]);
    }
    printf("\nthe reverse order of the value stored in ther array:");
    for(int i=n-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
return 0;
}
