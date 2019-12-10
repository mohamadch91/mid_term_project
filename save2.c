#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

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
int chap(int n, int m, int arr[n][m]) {
    int counter, counter1;
    for (counter = 0; counter < n; counter++) {
        for (counter1 = 0; counter1 < m; counter1++) {
//            printf("| ");
            printf("%d ", arr[counter][counter1]);
//            printf(" |");
        }
//        printf("\n");
//        int counter2;
//        for(counter2;counter<m;counter++){
//            printf("_ ");
//        }
        printf("\n");
//        printf("\7");
    }
    return 0;
}

/*int makan(int kalantari,int kalantar[kalantari],int n, int m, int *arr[n][m]){
    int x, y;
    int counter1;
    int kolp = 0;
    int counter;
    int xpolis[1000], ypolis[1000];
    for (counter = 0; counter < kalantari; counter++) {
        for (counter1 = 0; counter1 < kalantar[counter]; counter1++) {
            xpolis[kolp] = rand() % n;
            ypolis[kolp] = rand() % m;
            x = xpolis[kolp];
            y = ypolis[kolp];
            if(arr[x][y]!=0){
                xpolis[kolp] = rand() % n;
                ypolis[kolp] = rand() % m;
                x = xpolis[kolp];
                y = ypolis[kolp];
            }
}
        return *arr[n][m];*/
int chek(int m, int n) {
    if (n == 0) {
        m -= n;
    } else {
        m += n;
    }
    return m;
}

int main() {
    srand(time(0));
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[n][m];
    int counter4, counter5;
    for (counter4 = 0; counter4 < n; counter4++) {
        for (counter5 = 0; counter5 < m; counter5++) {
            arr[counter4][counter5] = 0;
        }
    }

    int kalantari;
    printf("tedad kalantari ra vared konid:");
    scanf("%d", &kalantari);
    int kalantar[kalantari];
    int xt = (rand() % n);
    int yt = (rand() % m);
    arr[xt][yt] = -1;
    int time1 = 0;
    int counter1;
    int kolp = 0;
    int counter;
    int xpolis[1000], ypolis[1000];
    int xpolis1, ypolis1;
    for (counter = 0; counter < kalantari; counter++) {
        printf("tedad polis kalantari %d :", counter + 1);
        scanf("%d", &kalantar[counter]);
    }
//    makan(kalantari,kalantar,n,m,arr);

    int x, y;
    int xt1, yt1;
    for (counter = 0; counter < kalantari; counter++) {
        for (counter1 = 0; counter1 < kalantar[counter]; counter1++) {
            xpolis[kolp] = rand() % n;
            ypolis[kolp] = rand() % m;
            x = xpolis[kolp];
            y = ypolis[kolp];
//                if(arr[x][y]==-1){
//                    chap(n, m, arr);
//                    return 0;
//                }
            if (arr[x][y] != 0) {
                xpolis[kolp] = rand() % n;
                ypolis[kolp] = rand() % m;
                x = xpolis[kolp];
                y = ypolis[kolp];
            }
            if (arr[x][y] == -1) {
                chap(n, m, arr);
                return 0;
            }
//                if (x == xt && y == yt) {
//                    xpolis[kolp] = rand() % n;
//                    ypolis[kolp] = rand() % m;
//                    x = xpolis[kolp];
//                    y = ypolis[kolp];
//                }
            arr[x][y] = counter + 1;
            kolp++;
        }
    }
    chap(n, m, arr);

    printf("hi\n");
    while (arr[xt][yt] == -1) {

        xt1 = rand() % 2;
        yt1 = rand() % 2;
        arr[xt][yt] = 0;
        xt = chek(xt, xt1);
        yt = chek(yt, yt1);
        while (xt > n || yt > m) {
            xt1 = rand() % 2;
            yt1 = rand() % 2;
            xt = chek(xt, xt1);
            yt = chek(yt, yt1);

        }
        if (arr[xt][yt] != 0) {
            chap(n, m, arr);
            return 0;
        }
//        for (counter4 = 0; counter4 < n; counter4++) {
//            for (counter5 = 0; counter5 < m; counter5++) {
//                arr[counter4][counter5] = 0;
//            }
//        }
        arr[xt][yt] = -1;
        kolp = 0;
        for (counter = 0; counter < kalantari; counter++) {
            for (counter1 = 0; counter1 < kalantar[counter]; counter1++) {
                xpolis1 = rand() % 2;
                ypolis1 = rand() % 2;
                arr[x][y] = 0;
                xpolis[kolp] = chek(xpolis[kolp], xpolis1);
                ypolis[kolp] = chek(ypolis[kolp], ypolis1);
                while (xt > n || yt > m) {
                    xpolis1 = rand() % 2;
                    ypolis1 = rand() % 2;
                    xpolis[kolp] = chek(xpolis[kolp], xpolis1);
                    ypolis[kolp] = chek(ypolis[kolp], ypolis1);

                }
                x = xpolis[kolp];
                y = ypolis[kolp];
//                if(arr[x][y]==-1){
//                    chap(n, m, arr);
//                    return 0;
//                }
                if (arr[x][y] != 0) {
                    xpolis1 = rand() % 2;
                    ypolis1 = rand() % 2;
                    xpolis[kolp] = chek(xpolis[kolp], xpolis1);
                    ypolis[kolp] = chek(ypolis[kolp], ypolis1);
                    x = xpolis[kolp];
                    y = ypolis[kolp];
                }
                if (arr[x][y] == -1) {
                    chap(n, m, arr);
                    return 0;
                }
//                if (x == xt && y == yt) {
//                    xpolis[kolp] = rand() % n;
//                    ypolis[kolp] = rand() % m;
//                    x = xpolis[kolp];
//                    y = ypolis[kolp];
//                }
                arr[x][y] = counter + 1;
                kolp++;
            }
        }
        chap(n, m, arr);
        printf("\n");

        time1++;
        printf("time is %d\n", time1);
    }
    return 0;


}