#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

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

/*int makan(int kalantari,int kalantar[kalantari],int n, int m, int arr){
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
int chek1(int xt,int n) {
    while (xt >= n) {
//            printf("xhi");
        xt -= 1;
//            yt -=1;
    }

    while (xt < 0) {
//            printf("xhi");
        xt += 1;
//            yt -=1;
    }
   return xt;
}
int chek(int m, int n) {
    if (n == 0) {
        return m;
    } else if (n == 1) {
        m--;
        return m;
    } else {
        m++;
        return m;
    }

}
//int did(m,n) {
//
//
//}
int main() {
    int didx,didy;
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
    int sherif[kalantari];
    for (counter4 = 0; counter4 < kalantari; counter4++) {
        sherif[counter4] = 0;

    }

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
//            sleep(1);
//            didx=xpolis[kolp]-xt;
//            didy=ypolis[kolp-yt];

            xpolis[kolp] = rand() % n;
            ypolis[kolp] = rand() % m;
            x = xpolis[kolp];
            y = ypolis[kolp];
//                if(arr[x][y]==-1){
//                    chap(n, m, arr);
//                    return 0;
//                }
            while (arr[x][y] != 0 && arr[x][y] == -1) {
//                sleep(1);
                xpolis[kolp] = rand() % n;
                ypolis[kolp] = rand() % m;
                x = xpolis[kolp];
                y = ypolis[kolp];
            }
//            if (arr[x][y] == -1) {
//                chap(n, m, arr);
//                return 0;
//            }
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
//    fuck all of the world
    while (arr[xt][yt] == -1) {
//        sleep(1);
        xt1 = rand() % 3;
        yt1 = rand() % 3;
        arr[xt][yt] = 0;
        xt = chek(xt, xt1);
        yt = chek(yt, yt1);
        xt=chek1(xt,n);
        yt=chek1(yt,m);
//        while (xt >= n) {
////            printf("xhi");
//            xt -= 1;
////            yt -=1;
//        }
//        while (yt >= m) {
////            printf("xhi");
////            xt-=1;
//            yt -= 1;
//        }
//        while (xt < 0) {
////            printf("xhi");
//            xt += 1;
////            yt -=1;
//        }
//        while (yt < 0) {
////            printf("xhi");
////            xt+=1;
//            yt += 1;
//        }
        if (arr[xt][yt] != 0) {
            chap(n, m, arr);
//            printf("yhi");
            return 0;
        }
//        for (counter4 = 0; counter4 < n; counter4++) {
//            for (counter5 = 0; counter5 < m; counter5++) {
//                arr[counter4][counter5] = 0;
//            }
//        }
        arr[xt][yt] = -1;
        kolp = 0;

//
        for (counter = 0; counter < kalantari; counter++) {
            for (counter1 = 0; counter1 < kalantar[counter]; counter1++) {
//               sleep(1);
                xpolis1 = rand() % 3;
                ypolis1 = rand() % 3;
//                printf("%d %d sara0\n",x,y);

                arr[xpolis[kolp]][ypolis[kolp]] = 0;
                xpolis[kolp] = chek(xpolis[kolp], xpolis1);
                ypolis[kolp] = chek(ypolis[kolp], ypolis1);
                xpolis[kolp]=chek1(xpolis[kolp],n);
                ypolis[kolp]=chek1(ypolis[kolp],m);
//                while (xpolis[kolp] >= n) {
//                    xpolis[kolp] -= 1;
////                    ypolis[kolp] -=1;
//                }
//                while (ypolis[kolp] >= m) {
////                    xpolis[kolp] -=1;
//                    ypolis[kolp] -= 1;
//                }
//                while (xpolis[kolp] < 0) {
//                    xpolis[kolp] += 1;
////                    ypolis[kolp] +=1;
//                }
//                while (ypolis[kolp] < 0) {
////                    xpolis[kolp] +=1;
//                    ypolis[kolp] += 1;
//                }
                x = xpolis[kolp];
                y = ypolis[kolp];
//                printf("%d %d sara1\n",x,y);
//                if(arr[x][y]==-1){
//                    chap(n, m, arr);
//                    return 0;
//                }
                while (arr[x][y] >0) {
//                    sleep(1);
                    xpolis1 = rand() % 3;
                    ypolis1 = rand() % 3;
                    xpolis[kolp] = chek(xpolis[kolp], xpolis1);
                    ypolis[kolp] = chek(ypolis[kolp], ypolis1);
                    xpolis[kolp]=chek1(xpolis[kolp],n);
                    ypolis[kolp]=chek1(ypolis[kolp],m);
//                    while (xpolis[kolp] >= n) {/*
//                        xpolis[kolp] -= 1;
////                    ypolis[kolp] -=1;
//                    }
//                    while (ypolis[kolp] >= m) {
////                    xpolis[kolp] -=1;
//                        ypolis[kolp] -= 1;
//                    }
//                    while (xpolis[kolp] < 0) {
//                        xpolis[kolp] += 1;
////                    ypolis[kolp] +=1;
//                    }
//                    while (ypolis[kolp] < 0) {
////                    xpolis[kolp] +=1;
//                        ypolis[kolp] += 1;
//                    }*/
                    x = xpolis[kolp];
                    y = ypolis[kolp];
//                    printf("%d %d sara2\n",x,y);
                }
                if (arr[x][y] == -1) {
                    arr[x][y] = -2;
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
//        _sleep(1);
        chap(n, m, arr);
        printf("\n");
        time1++;
        printf("time is %d\n", time1);
    }

    }
    return 0;
}