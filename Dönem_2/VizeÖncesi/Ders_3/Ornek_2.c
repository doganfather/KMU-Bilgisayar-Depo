#include <stdio.h>

main()
{
    int dizi[5] = {5, 10, 2, 3, 2}, min = dizi[0], max = dizi[0], sayi;
    
    printf("Sayi giriniz: ");
    scanf("%d", &sayi);

    for(int i = 0; i < 5; i++)
        if(sayi == dizi[i])
            printf("Sayi = %d dizi[] = %d, i = %d. index", sayi, dizi[i], i + 1);

}
