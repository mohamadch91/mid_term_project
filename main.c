#include <stdio.h>
#include <math.h>
//int chap(n,m){
//    int counter1,counter2;
//    for(counter1=0;counter1<n;counter1++){
//        printf("\n");
//        for(counter2=0;counter2<m;counter2++){
//            printf("_");
//        }
//
//        printf("\n");
//        int counter;
//        for(counter=0;counter<m;counter++){
//            printf("|  ");
//        }
//    }
//}
int main(){
    int n,m;
    scanf("%d %d",&n,&m);


    int arr[n][m];
    int kalantar;
    scanf("%d",&kalantar);
    int kalantari[kalantar];
    int counter;
    int xpolis[1000],ypolis[1000];
    for(counter=0;counter<kalantar;counter++){
        printf("tedad polis kalantari %d :",counter+1);
        scanf("%d",kalantari[counter]);
    }


}