#include <stdio.h>

 void displayarry(int ii, int jj,int juzhen[ii][jj])
 {
 
 	for (int i = 0; i < ii ; i++)
 	{	
 		for (int j = 0; j < jj; ++j)
 			printf("%d\t",juzhen[i][j]);
 	printf("\n");
 }
 		
 }

 void transposematrix(int ii,int jj,int juzhen[ii][jj])
 {
 	void displayarry(int ii, int jj, int juzhen[ii][jj]);
 	


 	int juzhen2[jj][ii];


 	for(int i = 0;i < ii; i++)
 		for (int j =0;j < jj;j++)
 			juzhen2[j][i] = juzhen[i][j];


 	displayarry(jj,ii,juzhen2);
 }
 


 int main()
 {
 	void transposematrix(int ii,int jj,int juzhen[ii][jj]);
 	

 	int ii, jj;
 	int numbers = 1;
 	int i=1, j=1;

    printf("矩阵行数：");
    scanf("%d",&ii);
    printf("矩阵列数：");
    scanf("%d",&jj);
    int juzhen[ii][jj];
    while(numbers <= ii*jj) {
        printf("矩阵%d行,%d列：",i,j);
        scanf ("%d",&juzhen[i-1][j-1]);
        j++;
        if (j > jj)
           {j = 1;
            i++;}
        if (i > ii)
           break;

    }
    printf("原矩阵:\n");
    displayarry(ii,jj,juzhen);
    printf("转置后的矩阵：\n");
    transposematrix(ii,jj,juzhen);

 	return 0;
 }

