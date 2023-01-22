#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int ucuzasalkontrol,i,a,sayi;
	
	printf("lutfen bir sayi degeri girin :");                             //kulanýcýdan bir sayi degeri girmesini istiyoruz
	scanf("%d",&a);
	
	
	
	ucuzasalkontrol = 0;
	i=2;
	if(a>2)                                                       //eger sayi 2 den büyükse for döngüsüne girer
	{
		for(i;i<a/2;i++)                                          //girilen sayinin yarýsýna kadar i bir bir artýrýlýr
		{
			if(a % i == 0 || a+2 % i == 0 || a+6 % i == 0)        //eger sayý,sayi+ ve sayi+6 yarýsýndan küçük sayýlardan sadece 1 e bölünüyorsa ucuz asaldýr
			{
				ucuzasalkontrol = 1;
		    }
	    }
	
	if(ucuzasalkontrol==0)                                        //eger sayý,sayi+ ve sayi+6 yarýsýndan küçük sayýlardan sadece 1 e bölünüyorsa ucuz asal deðildir
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
