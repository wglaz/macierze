
#include <stdio.h>


int main()
{
    int macierzA[20][30];
    int macierzB[20][30];
    int wynik[20][30];
    int n, m, j, k; //deklaracja wymiarów macierzy

    printf("Podaj wymiary dwóch macierzy: "); //tylko 3 wymiary bo liczba kolumn 1 ma byc rwna ilości wierszy drugiej macierzy
    scanf(" %d %d %d", &n, &m, &k);

    j = m;
    printf("pierwsza macierz: n = %d, m = %d\n", n , m);
    printf("druga macierz: j = %d, k = %d\n", j, k);

    printf("\n");
    printf("pierwsza macierz; \n");

    int i, p,u; // deklaracja liczników

    for (i=0;i<n; i++) //wpisywanie wartosci do macierzy
    {
        for (p = 0; p < m; p++) {
            printf("podaj wartosc komórki [%d],[%d] ", i, p);
            scanf(" %d", &macierzA[i][p]);
        }
    }
    for (i=0;i<n; i++)
    {
        printf("\n");
        for(p=0; p<m; p++)
            printf(" %d\t", macierzA[i][p]);
    }
   printf("\n\n");
    printf("druga macierz; \n");

    for (i=0;i<j; i++) //wpisywanie wartosci do macierzy
    {
        for (p = 0; p < k; p++)
        {
            printf("podaj wartosc komórki [%d],[%d] ", i, p);
            scanf(" %d", &macierzB[i][p]);
        }

    }
    for (i=0;i<j; i++) {
        printf("\n");
        for (p = 0; p < k; p++) {
            printf("% d\t", macierzB[i][p]);// wyswietlanie macierzy wierszami
        }
    }
    printf("\n");
    printf("pierwsza macierz; \n");
    for (i=0;i<n; i++)
    {
        printf("\n");
        for(p=0; p<m; p++)
            printf(" %d\t", macierzA[i][p]);
    }
    printf("\n");

    printf("druga macierz; \n");
    for (i=0;i<j; i++) {
        printf("\n");
        for (p = 0; p < k; p++) {
            printf("% d\t", macierzB[i][p]);// wyswietlanie macierzy wierszami
        }
    }

    printf("\n\n");

    for (i=0;i<n; i++) //mnożenie macierzy
        for(p=0; p<k; p++)
        {wynik[i][j] = 0; //przygotowanie maciezy wynikowej
        for (u=0;u<j;u++)
            wynik[i][p] = wynik[i][p]+macierzA[i][u] * macierzB[u][p]; //mnozenie poszczegolnych komorek
            }
            printf("macierz wynikowa: \n");
        for(i=0;i<n; i++)
        {printf("\n");
        for(p=0;p<k; p++)
        printf("%d\t", wynik[i][p]);
        }

        return 0;

}
