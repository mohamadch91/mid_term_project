#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() { 
	
	int m,n;
	printf("andaze mohit shabihsazi=");
	scanf("%d %d", &m,&n);
	char matris[m][n];
	
	
	
	int tedad_kalantary;
	printf("tedad kalantary ha=" );
	scanf("%d", &tedad_kalantary);
	
	
	int police_kalantary[1000], counter1;
	for(counter1=0;counter1<tedad_kalantary;counter1++){
		printf("police haye kalantary %d =", counter1+1);
		scanf("%d", &police_kalantary[counter1]);		
	}

	time_t t= time(NULL);
	srand(t);
	
	//sefr kardan matris	
	int m1,n1;
	for(m1=0; m1<m; m1++){
		for(n1=0; n1<n; n1++){
			matris[m1][n1]=0;}}
			
	//harekat dozd 1
	int x_dozd=rand()%m;
	int y_dozd=rand()%n;
	matris[x_dozd][y_dozd]='T';
	
	
	//harekat police ha 1
	int x_police[tedad_kalantary][m*n];
	int y_police[tedad_kalantary][m*n];
	int kalantary,shomare_police;
	for(kalantary=0; kalantary<tedad_kalantary; kalantary++)
	{
		for(shomare_police=0; shomare_police<police_kalantary[kalantary]; shomare_police++)
		{	
			x_police[kalantary][shomare_police]=rand()%m;
			y_police[kalantary][shomare_police]=rand()%n;
			
			if(matris[x_police[kalantary][shomare_police]][y_police[kalantary][shomare_police]]==0)
		//	{printf("%d",x_police[kalantary][shomare_police]);
		//	printf("%d\n",y_police[kalantary][shomare_police]);
				matris[x_police[kalantary][shomare_police]][y_police[kalantary][shomare_police]]= kalantary+1;	
			//}
			else
				shomare_police--;		
	 	}
	}
		
	//print 1
	int m2,n2;
	for(m2=0 ;m2<m ;m2++)
	{
		for(n2=0 ;n2<n ;n2++)
		{
			if(matris[m2][n2]=='T')
				printf("T	");
				
			else if(matris[m2][n2]!=0)
				printf("D%d	", matris[m2][n2]); 
			
			else
				printf("0	");		
		}
		printf("\n\n\n");
	}
	printf("\n\n\n\n\n\n");
	
	
		sleep(1);
	
	//****************************

while(1)
{
	//kalantary haye dardid police

	int counter2,nazdik_dozd[m*n];	
	for(counter2=0; counter2<m*n; counter2++){
			nazdik_dozd[counter2]=-1;}
			
	int kalantari, Shomare_police;
	for(kalantari=0; kalantari<tedad_kalantary; kalantari++)
	{
		for(Shomare_police=0; Shomare_police<police_kalantary[kalantari]; Shomare_police++)
		{
			if(pow(x_police[kalantari][Shomare_police]-x_dozd,2)+pow(y_police[kalantari][Shomare_police]-y_dozd,2)<=8)
	
				nazdik_dozd[kalantari]=kalantari;		
				kalantari++;
			
		}
	}
	
			
	
	//sefr kardan dobare matris
	int m3,n3;
	for(m3=0; m3<m; m3++)
	{
		for(n3=0; n3<n; n3++)
			matris[m3][n3]=0;
	}
	


	int rand_Tx, rand_Ty, rand_Dx, rand_Dy;	
	int kalantarii,Shomare_Police,Shomare_Police1,distance_old,distance_new;
	
	for(kalantarii=0; kalantarii<tedad_kalantary; kalantarii++)
	{
		if(nazdik_dozd[kalantarii]!=-1)
		{	// harekat policeha b samt dozd
			for(Shomare_Police=0; Shomare_Police<police_kalantary[kalantarii]; Shomare_Police++)
			{
				while(1)
				{
					rand_Dx=rand()%3-1;
					rand_Dy=rand()%3-1;
					distance_old=pow(x_police[kalantarii][Shomare_Police]-x_dozd,2)+pow(y_police[kalantarii][Shomare_Police]-y_dozd,2);
					distance_new=pow(x_police[kalantarii][Shomare_Police]+rand_Dx-x_dozd,2)+pow(y_police[kalantarii][Shomare_Police]+rand_Dy-y_dozd,2);
					if(distance_new<distance_old)
					{
						if(x_police[kalantarii][Shomare_Police]+rand_Dx==m)
							x_police[kalantarii][Shomare_Police]+=rand_Dx-2;
						else if(x_police[kalantarii][Shomare_Police]+rand_Dx==-1)
							x_police[kalantarii][Shomare_Police]+=rand_Dx+2;
						else
							x_police[kalantarii][Shomare_Police]+=rand_Dx;
				
		
						if(y_police[kalantarii][Shomare_Police]+rand_Dy==n)
							y_police[kalantarii][Shomare_Police]+=rand_Dy-2;
						else if(y_police[kalantarii][Shomare_Police]+rand_Dy==-1)
							y_police[kalantarii][Shomare_Police]+=rand_Dy+2;
						else
							y_police[kalantarii][Shomare_Police]+=rand_Dy;
				
				
				
						if(matris[x_police[kalantarii][Shomare_Police]][y_police[kalantarii][Shomare_Police]]==0)
						{
							matris[x_police[kalantarii][Shomare_Police]][y_police[kalantarii][Shomare_Police]]=kalantarii+1;
												
								break; 	
						}
					}
						
				}
			}
		}
		else
		{	//harekat police ha b sorat random
			for(Shomare_Police1=0; Shomare_Police1<police_kalantary[kalantarii]; Shomare_Police1++)
			{
				while(1)
				{
				rand_Dx=rand()%3-1;
				rand_Dy=rand()%3-1;
				if(x_police[kalantarii][Shomare_Police1]+rand_Dx==m)
					x_police[kalantarii][Shomare_Police1]+=rand_Dx-2;
				else if(x_police[kalantarii][Shomare_Police1]+rand_Dx==-1)
					x_police[kalantarii][Shomare_Police1]+=rand_Dx+2;
				else
					x_police[kalantarii][Shomare_Police1]+=rand_Dx;
				
					
				if(y_police[kalantarii][Shomare_Police1]+rand_Dy==n)
					y_police[kalantarii][Shomare_Police1]+=rand_Dy-2;
				else if(y_police[kalantarii][Shomare_Police1]+rand_Dy==-1)
					y_police[kalantarii][Shomare_Police1]+=rand_Dy+2;
				else
					y_police[kalantarii][Shomare_Police1]+=rand_Dy;
				

				
				if(matris[x_police[kalantarii][Shomare_Police1]][y_police[kalantarii][Shomare_Police1]]==0)
					{
					matris[x_police[kalantarii][Shomare_Police1]][y_police[kalantarii][Shomare_Police1]]=kalantarii+1;
					break;
					}
				}
			}
		}
	}
		
			
	
	while(1)
	{	//harekat dobare dozd
		rand_Tx=rand()%3-1;
	
		if(x_dozd+rand_Tx==m)
			x_dozd=x_dozd+rand_Tx-1;
		else if(x_dozd+rand_Tx==-1)
			x_dozd=x_dozd+rand_Tx+1;
		else
			x_dozd=x_dozd+rand_Tx;	
	
	
		rand_Ty=rand()%3-1;
	
		if(y_dozd+rand_Ty==n)
			y_dozd=y_dozd+rand_Ty-2;
		else if(y_dozd+rand_Ty==-1)
			y_dozd=y_dozd+rand_Ty+2;
		else
			y_dozd=y_dozd+rand_Ty;	
			
		if(matris[x_dozd][y_dozd]==0)
		{	matris[x_dozd][y_dozd]='T';
			break;
		}
	}
	
	
	
	
	//print dobare matris
	int m4,n4;
	for(m4=0 ;m4<m ;m4++)
	{
		for(n4=0 ;n4<n ;n4++)
		{
			if(matris[m4][n4]=='T')
				printf("T	");
				
			else if(matris[m4][n4]!=0)		
				printf("D%d	", matris[m4][n4]); 
			
			else
				printf("0	");		
		}
		printf("\n\n\n");
	}
	printf("\n\n\n\n\n\n");
	sleep(1);
	if(matris[x_dozd][y_dozd]==matris[x_police[kalantarii][Shomare_Police1]][y_police[kalantarii][Shomare_Police1]])
	{ printf("in");
	break;
	}

}
	
	printf("10000");
	int m5,n5;
	for(m5=0 ;m5<m ;m5++)
	{
		for(n5=0 ;n5<n ;n5++)
		{
			if(matris[m5][n5]=='T')
				printf("RIP	");
				
			else if(matris[m5][n5]!=0)		
				printf("D%d	", matris[m5][n5]); 
			
			else
				printf("0	");		
		}
		printf("\n\n\n");
	}
	
	









	
	return 0;
}
