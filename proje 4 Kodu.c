#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int ucuzasalkontrol,i,a,sayi;
	
	printf("lutfen bir sayi degeri girin :");                             //kulan�c�dan bir sayi degeri girmesini istiyoruz
	scanf("%d",&a);
	
	
	
	ucuzasalkontrol = 0;
	i=2;
	if(a>2)                                                       //eger sayi 2 den b�y�kse for d�ng�s�ne girer
	{
		for(i;i<a/2;i++)                                          //girilen sayinin yar�s�na kadar i bir bir art�r�l�r
		{
			if(a % i == 0 || a+2 % i == 0 || a+6 % i == 0)        //eger say�,sayi+ ve sayi+6 yar�s�ndan k���k say�lardan sadece 1 e b�l�n�yorsa ucuz asald�r
			{
				ucuzasalkontrol = 1;
		    }
	    }
	
	if(ucuzasalkontrol==0)                                        //eger say�,sayi+ ve sayi+6 yar�s�ndan k���k say�lardan sadece 1 e b�l�n�yorsa ucuz asal de�ildir
	    {
		    printf("girilen sayi ucuz asal sayidir: (%d %d %d)",a,a+2,a+6);
		}

	else
	    {
		    printf("girilen sayi ucuz asal sayi degildir: (%d %d %d)",a,a+2,a+6);
	    }
    }

	
    else if(sayi=2)
    {
         printf("girilen sayi asla ucuz degildir: (%d %d %d)",a,a+2,a+6);
	}
 

	}
