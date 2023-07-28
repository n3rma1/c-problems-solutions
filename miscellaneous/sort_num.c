//sorting array
#include <stdio.h>


void sort(int test[],int n){
    int temp;
    for (int i = 0; i < n -1; i++)
    {
        
        for (int j = i+1; j < n; j++)
        {
            if (test[i]>test[j])
            {
                temp = test[i];
                test[i] = test[j];
                test[j] = temp;
            }
            
        }
        
    }
    
}
int main(int argc, char const *argv[])
{
    int n;
    printf("HOw many numbers: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    sort(arr,n);
    printf("After sorting: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
