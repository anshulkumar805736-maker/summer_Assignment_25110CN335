#include <stdio.h>

int main()
{
    int arr[100], n, i, choice, sum = 0, max;

    printf("Enter size of array: ");
    scanf("%d",&n);

    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    do
    {
        printf("\n--- ARRAY MENU ---\n");
        printf("1. Display Array\n");
        printf("2. Sum of Elements\n");
        printf("3. Largest Element\n");
        printf("4. Search Element\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Array: ");
                for(i=0;i<n;i++)
                    printf("%d ",arr[i]);
                printf("\n");
                break;

            case 2:
                sum=0;
                for(i=0;i<n;i++)
                    sum+=arr[i];
                printf("Sum = %d\n",sum);
                break;

            case 3:
                max=arr[0];
                for(i=1;i<n;i++)
                    if(arr[i]>max)
                        max=arr[i];
                printf("Largest = %d\n",max);
                break;

            case 4:
            {
                int key, found=0;
                printf("Enter element to search: ");
                scanf("%d",&key);

                for(i=0;i<n;i++)
                {
                    if(arr[i]==key)
                    {
                        printf("Found at index %d\n",i);
                        found=1;
                        break;
                    }
                }

                if(!found)
                    printf("Element not found.\n");

                break;
            }

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    }while(choice!=5);

    return 0;
}