#include <stdio.h>

int main(){

    //problema 5

    /*int v[30],n,i,j;

    do{
        printf("nr. elemente: ");
        scanf("%d",&n);
    }while((n<2)||(n>30));

    for(i=0;i<n;i++) scanf("%d",&v[i]);
    printf("\n");
    for(i=0;i<n;i++) printf("%3d ",v[i]);
    printf("\n\n");

    //metoda 1
    int aux=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(v[i]>v[j]){
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
        }
    }

    //printf("\n");
    for(i=0;i<n;i++) printf("%3d ",v[i]);

    //metoda 2

    int schimbat,trecere=0;
    int aux;

    do{
        schimbat=0;
        trecere++;
        for(i=0;i<n-trecere;i++){
            if(v[i]<v[i+1]){
                aux=v[i];
                v[i]=v[i+1];
                v[i+1]=aux;
                schimbat=1;
            }
        }
    }while(schimbat==1);

    //printf("\n");
    for(i=0;i<n;i++) printf("%3d ",v[i]);

    //problema 6

    int a[30][30],l,i,j,k,mini=a[0][0];

    do{
        printf("nr. linii/coloane(matrice patratica): ");
        scanf("%d",&l);
    }while((l<2)||(l>30));

    for(i=0;i<l;i++)
        for(j=0;j<l;j++)
            scanf("%d",&a[i][j]);
    printf("\n");

    for(i=0;i<l;i++){
        for(j=0;j<l;j++)
            printf("%3d ",a[i][j]);
    printf("\n");
    }
    printf("\n\n");

    //element minim

    for(i=0;i<l;i++){
        for(j=0;j<l;j++){
            if(a[i][j]<mini)
                mini=a[i][j];
        }
    }

    printf("elementul minim al matricei este: %d\n\n",mini);

    for(i=0;i<l;i++)    a[i][i]=mini;

    for(i=0;i<l;i++){
        for(j=0;j<l;j++)
            printf("%3d ",a[i][j]);
    printf("\n");
    }

    //diag secundara

    for(i=0;i<l;i++)    a[i][l-i-1]=mini;

    for(i=0;i<l;i++){
        for(j=0;j<l;j++)
            printf("%3d ",a[i][j]);
    printf("\n");
    }

    //analog si pentru elementul maxim

    //problema 7

    int a[30][30],m,n,i,j,k,aux;

     do{
        printf("nr. linii: ");
        scanf("%d",&m);
    }while((m<2)||(m>30));

    do{
        printf("nr. coloane: ");
        scanf("%d",&n);
    }while((n<2)||(n>30));


    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    printf("\n");

    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            printf("%3d ",a[i][j]);
    printf("\n");
    }
    printf("\n\n");

    //ordonare elemente

    i=0;
    while(i<m){
        if(i%2==0){
            //printf("%d\n",i);
        for(j=0;j<n;j++){
                if(a[i][j]%2==0){
                    for(k=0;k<n;k++){
                        if((a[i][k]%2==0)&&(a[i][j]<a[i][k])){
                            aux=a[i][j];
                            a[i][j]=a[i][k];
                            a[i][k]=aux;
                        }
                    }
                }
        }
        i++;
        }
        else
        {
            i++;
        }
    }

    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            printf("%3d ",a[i][j]);
    printf("\n");
    }


    //problema 8

    int v[30],n,i,j,k,mini,maxi;

    do{
        printf("nr. elemente: ");
        scanf("%d",&n);
    }while((n<2)||(n>30));

    for(i=0;i<n;i++) scanf("%d",&v[i]);
    printf("\n");
    for(i=0;i<n;i++) printf("%3d ",v[i]);
    printf("\n\n");

    mini=v[0];maxi=v[0];
    for(i=1;i<n;i++){
        if(v[i]<mini) mini=v[i];
        else
        if(v[i]>maxi) maxi=v[i];

    }

    printf("minim: %d maxim: %d",mini,maxi);

    int aux_mini=0,aux_maxi=0;
    for(i=0;i<n;i++){
        if(v[i]==mini) aux_mini=i;
            else
        if(v[i]==maxi) aux_maxi=i;
    }

    printf("\n%d %d\n\n",aux_mini,aux_maxi);
    int intermediar;
    if(aux_mini>aux_maxi){
        intermediar=aux_mini;
        aux_mini=aux_maxi;
        aux_maxi=intermediar;
    }

    printf("\n%d %d\n\n",aux_mini,aux_maxi);

    int aux;
    if(aux_maxi-aux_mini>1){
    for(i=aux_mini+1;i<aux_maxi;i++){
        for(j=aux_mini+1;j<aux_maxi;j++){
            if(v[i]<v[j]){
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
        }
    }

    printf("\n");
    for(i=0;i<n;i++) printf("%d ",v[i]);
    printf("\n");
    }

    else

    printf("\nnu se pot ordona");


    //problema 9

    int v[30],n,i,j,k,mini,maxi;

    do{
        printf("nr. elemente: ");
        scanf("%d",&n);
    }while((n<2)||(n>30));
    i=0;
    scanf("%d",&v[i]);
    for(i=1;i<n;i++){
            scanf("%d",&v[i]);
            if(v[i-1]>v[i]){
                printf("alegeti un numar mai amre decat cel precedent\n");
                i--;
                }
    }

    printf("\n");
    for(i=0;i<n;i++) printf("%3d ",v[i]);
    printf("\n\n");

    int val;
    printf("val= ");
    scanf("%d",&val);

    j=0;
    for(i=0;i<n-1;i++){
        if((v[i]<=val) && (val<=v[i+1])){
            n++;
            j=n;
            while(j>=i+1){
                v[j+1]=v[j];
                j--;
            }
            v[i+1]=val;
            break;
        }
    }

    printf("\n\n");
    for(i=0;i<n;i++) printf("%3d ",v[i]);
    printf("\n\n");
    */

    return 0;

}
