#include <stdio.h>
#include <math.h>
void edit(int mas[], int n);
int main()
{
        int na, nb;
        int i;
        printf("The number of elements of the set A : ");
        scanf("%d", &na);
        printf("The number of elements of the set B : ");
        scanf("%d", &nb);
        printf("Input of elements of the set A \n");
        int a[na] ;
        for( i = 0; i < na; i++ )
                scanf("%d", &a[i]);
        printf("Output of elements of the set A \n");
        for( i = 0; i < na; i++ )
                printf("%3d", a[i]);
        printf("\n");
        printf("Input of elements of the set B \n");
        int b[nb] ;
        for( i = 0; i < nb; i++ )
                scanf("%d", &b[i]);
        printf("Output of elements of the set B \n");
        for( i = 0; i < nb; i++ )
                printf("%3d", b[i]);
        printf("\n");
        printf("Add/Delete an element for a set A ");
        printf("\n");
        edit( a, na );
        printf("Add/Delete an element for a set B ");
        printf("\n");
        edit( b, nb );
        return 0;
}
void edit(int mas[], int n)
{
        int i;
        char en;
        printf("Enable to add ( y / n ): ");
        scanf("%s", &en);
        if ( en == 'y' )
        {
                printf(" add an element: ");
                scanf("%d", &mas[n]);
                n = n + 1 ;
                printf(" output of elements of the set after adding \n");
                for( i = 0; i < n; i++ ) printf("%3d", mas[i]);
                printf("\n");
        }
        char en_;
        printf("Enable to delete ( y / n ): ");
        scanf("%s", &en_);
        if ( en_ == 'y' )
        {
                printf(" deleting an element by pointer: ");
                int k, j = 0 ;
                scanf("%d", &k);
                for( i = 0; i < n; i++ )
                        if ( i != k)
                        {
                                 mas[j] = mas[i];
                                 j++;
                        }
                n = n - 1 ;
                printf(" output of elements of the set after deleting \n");
                for( j = 0; j < n; j++ )
                        printf("%3d", mas[j]);
                printf("\n");
        }
}
