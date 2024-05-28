#include <stdio.h>

int main()
{
    /* code */

    int arr[14] = {304, 37, 12, 45, 6, 2, 11, 1, 3, 5, 7, 42, 31, 88};

    for (int i = 0; i < 14; i++)
    {
        printf("%d ", arr[i]);
    }

    for (int i = 0; i < 14; i++)
    {
        int clave = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > clave)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = clave;
    }
    printf("\n");
    for (int i = 0; i < 14; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
