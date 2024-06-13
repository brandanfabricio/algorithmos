#include <stdio.h>

int main()
{
    int arr[10] = {2, 5, 6, 3, 87, 3, 53, 23, 44, 10};
    int aux;
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                aux = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = aux;
            }
        }
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
// // printf("\n");

// for (int i = 0; i < 10; i++)
// {
//     printf("%d", arr[i]);
// }

// }
