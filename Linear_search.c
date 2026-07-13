#include <stdio.h>

int main()
{
    int arr[]={10,20,30,40,50};
    int key=30;
    int i;

    for(i=0;i<5;i++)
    {
        if(arr[i]==key)
        {
            printf("Element found at position %d",i);
            return 0;
        }
    }

    printf("Element not found");

    return 0;
}
