#include <stdio.h>
#include <stdlib.h>
//matrislerin toplanması ve sonucun geri döndürülmesi uygulamasi

int kontrolEt( int satir1,int sutun1, int satir2, int sutun2)
{
	if(( satir1 == satir2 ) && (sutun1==sutun2))
	return 1;
	else
	return 0;
}

int *matrisleriTopla(int satir1, int sutun1,int satir2,int sutun2)//Dizinin adresini döndüren bir pointer.Dizideki verileri tutan bir pointer.
{
	int matris1[satir1][sutun1];
	int matris2[satir2][sutun2];
	int sonuc [satir1][sutun1];
	
	
	int durum= kontrolEt(satir1,sutun1, satir2, sutun2 );
	if(durum==0)
	{
		printf("Girilmis olunan satir ve sutun sayilari esit olmadigi icin matrisler toplanamaz \n");
	    exit(0);
	}
	else
	{
		printf("Matris1 in bilgilerini giriniz: \n") ;
		
		int i,j, sayi;
		for( i= 0; i<satir1; i++)
		{
			for( j=0; j<sutun1; j++ )
			{
				printf("%d. satirin %d. sutunu : ", (i+1), (j+1));
				scanf("%d",&sayi) ;
				matris1[i][j] = sayi;
			}
		}
		
		printf("Matris1 in verilerinin girilmesi tamamlandi \n\n") ;
		printf("Matris2 in bilgilerini giriniz : \n") ;
		
		
		for( i= 0; i<satir2; i++)
		{
			for( j=0; j<sutun2; j++ )
			{
				printf("%d. satirin %d. sutunu : ", (i+1), (j+1));
				scanf("%d",&sayi) ;
				matris2[i][j] = sayi;
			}
		}
		
		printf("Matris2 in verilerinin girilmesi tamamlandi \n") ;
		printf("Matrislerin toplanmasi: \n") ;
		
		for( i= 0; i<satir2; i++)
		{
			for( j=0; j<sutun2; j++ )
			{
				sonuc[i][j] = matris1[i][j] + matris2[i][j] ;
			}
		}
		printf("Matrislerin toplanmasi islemi bitti \n\n");
		
		printf("MATRIS1 in verileri: \n");
		
		for( i= 0; i<satir1; i++)
		{
			for( j=0; j<sutun1; j++)
			{
				printf("\t%d", matris1[i][j] ) ;
			}
			printf("\n");
		}
		
		printf("MATRIS2 nin verileri: \n");
		
		for( i= 0; i<satir2; i++)
		{
			for( j=0; j<sutun2; j++)
			{
				printf("\t%d", matris2[i][j] ) ;
			}
			printf("\n");
		}
		
		return sonuc;
	}
	
		return sonuc;
	
}
int main() 
{
	int satir1,sutun1,satir2,sutun2;
	printf("Matris1 in satir ve sutun bilgilerini giriniz : ");
	scanf("%d %d",&satir1,&sutun1);
	printf("Matris2 nin satir ve sutun bilgilerini giriniz : ");
	scanf("%d %d",&satir2,&sutun2);
	
	int *ptr= matrisleriTopla( satir1,sutun1, satir2, sutun2 );
	
		printf("Sonuc matrisin verileri: \n");
		
		int i,j;
		
		for( i= 0; i<satir2; i++)
		{
			for( j=0; j<sutun2; j++)
			{
				printf("\t%d", *ptr ) ;
			    ptr++;
			}
			printf("\n");
		}
		printf("Islem tamamlandi.\n\n");
	
	return 0;
}
