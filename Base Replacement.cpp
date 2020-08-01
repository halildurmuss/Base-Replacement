#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<process.h>

void taban1(){	//10 tabanından 2lik tabana
	   
	   int sayi1,b[80];
	   int a=0;
	   printf("10 tabaninda bir sayi giriniz-->");
	   scanf("%d",&sayi1);
	   printf("10 tabaninda %d sayisi 2 tabaninda ",sayi1);
	   while(sayi1>=1){
	   	
	   	a++;
	   	b[a]=sayi1%2;
	   	sayi1=sayi1/2;
	   }

		for(a=a;a>0;a--){	
		  printf("%d",b[a]);
		}
		printf(" olur.");
		
    }

	


void taban2(){   //10 tabanından 8 lik tabana
	int sayi2,b[80];
	   int a=0;
	   printf("10 tabaninda bir sayi giriniz-->");
	   scanf("%d",&sayi2);
	   printf("10 tabaninda %d sayisi 8 tabaninda--> ",sayi2);
	   while(sayi2>=1){
	   	
	   	a++;
	   	b[a]=sayi2%8;
	   	sayi2=sayi2/8;
	   }

		for(a=a;a>0;a--){	
		  printf("%d",b[a]);
		
		}
		printf(" olur.");
	
}
void taban3(){//10 tabanından 16 tabanına

	int sayikopya,taban=16,kalan=0;
	int sayi3,deger[100];
	int a=0;
	int k;
	printf("10 tabaninda bir sayi giriniz-->");
	scanf("%d",&sayi3);
	
	sayikopya = sayi3;
	while((sayi3/taban)>=1.0)
	{
		kalan = sayi3 % taban;
		deger[a] = kalan;
		sayi3 -= kalan;
		sayi3 /= taban;
		a++;
	}
	deger[a] = sayi3;
	
  
	for(k=0;k<50;k++)
	{
		if(deger[k]==10)
		deger[k]='A';
		if(deger[k]==11)
		deger[k]='B';
		if(deger[k]==12)
		deger[k]='C';
		if(deger[k]==13)
		deger[k]='D';
		if(deger[k]==14)
		deger[k]='E';
		if(deger[k]==15)
		deger[k]='F';
	} //-----------------
	printf("\n%d tabaninda yazilimi--> ",taban);
	while(a!=(-1))
	{
		if(deger[a]<10)
		printf("%d",deger[a]);
		if(deger[a]>=10)
		printf("%c",deger[a]);
		a--;
	}	
	}
void taban4(){	//2 lik tabandan  10 luk tabana



int a=0,s,b=0,p;//d değişkenini 10'luk tabana çevrilmiş haline eşitlemek için oluşturduk
int sayi4;

printf("2 tabaninda bir sayi giriniz-->");
scanf("%d",&sayi4) ;
while(sayi4>0)//while döngüsü içine sayi>0 olduk çünkü taban aritmetiği pozitif sayılar için geçerlidir
{
s = sayi4%10;
sayi4 = sayi4/10;
p = pow(2,b);//2'lik tabandaki sayının her basamağını 10'luk tabana çevirmek için pow kullandık
a = a + (s*p);//0.us olan d'ye r yani sayi'nın mod 10'dan kalanı ile  her basamağın 10'luk tabana 
                //çevirilmişiyle toplamının çarpımına eşitledik
b++;
}
printf("10'luk degeri--> %d",a); 	
	}
	
void taban5(){	//8lik tabandan 10kuk tabana
	
int b=0,k,a=0,s;//d değişkenini 10'luk tabana çevrilmiş haline eşitlemek için oluşturduk
int sayi5;

printf("8 tabaninda bir sayi giriniz-->");
scanf("%d",&sayi5) ;
while(sayi5>0)//while döngüsü içine sayi>0 olduk çünkü taban aritmetiği pozitif sayılar için geçerlidir
{
k = sayi5%10;
sayi5 = sayi5/10;
s = pow(8,a);//2'lik tabandaki sayının her basamağını 10'luk tabana çevirmek için pow kullandık
b = b + (k*s);//0.us olan d'ye r yani sayi'nın mod 10'dan kalanı ile  her basamağın 10'luk tabana 
                //çevirilmişiyle toplamının çarpımına eşitledik
a++;
}
printf("10'luk degeri--> %d ",b);   //tabana çevrilmiş halini yazdrdık.
 }

void taban7(){		//2 lik tabandan 8 lik tabana
int a=0,b,c=0,p;//d değişkenini 10'luk tabana çevrilmiş haline eşitlemek için oluşturduk
int sayi7;

printf("2 tabaninda bir sayi giriniz-->");
scanf("%d",&sayi7) ;
while(sayi7>0)//while döngüsü içine sayi>0 olduk çünkü taban aritmetiği pozitif sayılar için geçerlidir
{
b = sayi7%8;
sayi7 = sayi7/8;
p = pow(2,c);//2'lik tabandaki sayının her basamağını 10'luk tabana çevirmek için pow kullandık
a = a + (b*p);//0.us olan d'ye r yani sayi'nın mod 10'dan kalanı ile  her basamağın 10'luk tabana 
                //çevirilmişiyle toplamının çarpımına eşitledik
c++;
}
printf("8'luk degeri--> %d",a); 
                                            //tabana çevrilmiş halini yazdrdık.
 

}
void taban6(){	//16lik tabandan 10 luk tabana
	char dizi[100];
	int onluk=0,basamak=0,a=0,toplam=0;
	 char sayi6[]="0123456789ABCDEF";
	
	printf("16 Tabaninda bir sayi girin -->");
	scanf("%s",&sayi6);
	
	while(sayi6[a]){
		basamak++;
		a++;
		}
	basamak-=1;
	a=0;
	while(sayi6[a]){
				
	                	if(sayi6[a]=='A')
	                	onluk+=10*pow(16,basamak);
	                	else if(sayi6[a]=='B')
	                	onluk+=11*pow(16,basamak);
						else if(sayi6[a]=='C')
                    	onluk+=12*pow(16,basamak);
                        else if(sayi6[a]=='D')
						onluk+=13*pow(16,basamak);
						else if(sayi6[a]=='E')
						onluk+=14*pow(16,basamak);        
                        else if(sayi6[a]=='F')
                        onluk+=15*pow(16,basamak);
	                	else if(sayi6[a]=='0')
	                	onluk+=0*pow(16,basamak);
	                	else if(sayi6[a]=='1')
	                	onluk+=1*pow(16,basamak);
	                	else if(sayi6[a]=='2')
	                	onluk+=2*pow(16,basamak);
	                	else if(sayi6[a]=='3')
	                	onluk+=3*pow(16,basamak);
	                	else if(sayi6[a]=='4')
	                	onluk+=4*pow(16,basamak);
	                	else if(sayi6[a]=='5')
	                	onluk+=5*pow(16,basamak);
	                	else if(sayi6[a]=='6')
	                	onluk+=6*pow(16,basamak);
	                	else if(sayi6[a]=='7')
	                	onluk+=7*pow(16,basamak);
	                	else if(sayi6[a]=='8')
	                	onluk+=8*pow(16,basamak);
	                	else if(sayi6[a]=='9')
	                	onluk+=9*pow(16,basamak);	
	                basamak--;	
	                a++;	
            }
					printf("\n16 Tabaninda %s sayisi 10 tabaninda -->%d ",sayi6,onluk);
   
}
void taban8(){		// 2 tabanından 16 lık tabana
	
	
int d=0,r,c=0,p;//d değişkenini 10'luk tabana çevrilmiş haline eşitlemek için oluşturduk
int sayi;	
int sayikopya,taban=16,kalan=0;
char deger[50];
int i=0;
int j;
	
printf("2 tabaninda bir sayi giriniz-->");
scanf("%d",&sayi) ;
while(sayi>0)//while döngüsü içine sayi>0 olduk çünkü taban aritmetiği pozitif sayılar için geçerlidir
{
r = sayi%10;
sayi = sayi/10;
p = pow(2,c);//2'lik tabandaki sayının her basamağını 10'luk tabana çevirmek için pow kullandık
d = d + (r*p);//0.us olan d'ye r yani sayi'nın mod 10'dan kalanı ile  her basamağın 10'luk tabana 
                //çevirilmişiyle toplamının çarpımına eşitledik
c++;
}
	sayikopya = d;
	while((d/taban)>=1.0)
	{
		kalan = d % taban;
		deger[i] = kalan;
		d -= kalan;
		d /= taban;
		i++;
	}
	deger[i] = d;
	
  
	for(j=0;j<50;j++)
	{
		if(deger[j]==10)
		deger[j]='A';
		if(deger[j]==11)
		deger[j]='B';
		if(deger[j]==12)
		deger[j]='C';
		if(deger[j]==13)
		deger[j]='D';
		if(deger[j]==14)
		deger[j]='E';
		if(deger[j]==15)
		deger[j]='F';
	} 
	printf("16'lik degeri--> %d ",taban);
	while(i!=(-1))
	{
		if(deger[i]<10)
		printf("%d",deger[i]);
		if(deger[i]>=10)
		printf("%c",deger[i]);
		i--;
	}
	
	
	printf("");
}
void taban9(){		//8 tabanından 2 lik tabana
	int d=0,r,c=0,p;//d değişkenini 10'luk tabana çevrilmiş haline eşitlemek için oluşturduk
int sayi9;

printf("8 tabaninda bir sayi giriniz-->");
scanf("%d",&sayi9) ;
while(sayi9>0)//while döngüsü içine sayi>0 olduk çünkü taban aritmetiği pozitif sayılar için geçerlidir
{
r = sayi9%10;
sayi9 = sayi9/10;
p = pow(8,c);//2'lik tabandaki sayının her basamağını 10'luk tabana çevirmek için pow kullandık
d = d + (r*p);//0.us olan d'ye r yani sayi'nın mod 10'dan kalanı ile  her basamağın 10'luk tabana 
                //çevirilmişiyle toplamının çarpımına eşitledik
c++;
}
 
		int k[40];
	   int i=0;
	  
	   printf("2'lik degeri-->",d);
	   while(d>=1){
	   	
	   	i++;
	   	k[i]=d%2;
	   	d=d/2;
	   }

		for(i=i;i>0;i--){	
		  printf("%d",k[i]);
		
		}
		printf(" olur.");
		
    
}
void taban10()
	
{
	
	char dizi[100];
	int k[10],onluk=0,basamak=0,a=0,toplam=0;
	 char sayikopya[]="0123456789ABCDEF";
	
	printf("16 Tabaninda bir sayi girin -->");
	scanf("%s",&sayikopya);
	
	while(sayikopya[a]){
		basamak++;
		a++;
		}
	basamak-=1;
	a=0;
	while(sayikopya[a]){
				
	                	if(sayikopya[a]=='A')
	                	onluk+=10*pow(16,basamak);
	                	else if(sayikopya[a]=='B')
	                	onluk+=11*pow(16,basamak);
						else if(sayikopya[a]=='C')
                    	onluk+=12*pow(16,basamak);
                        else if(sayikopya[a]=='D')
						onluk+=13*pow(16,basamak);
						else if(sayikopya[a]=='E')
						onluk+=14*pow(16,basamak);        
                        else if(sayikopya[a]=='F')
                        onluk+=15*pow(16,basamak);
	                	else if(sayikopya[a]=='0')
	                	onluk+=0*pow(16,basamak);
	                	else if(sayikopya[a]=='1')
	                	onluk+=1*pow(16,basamak);
	                	else if(sayikopya[a]=='2')
	                	onluk+=2*pow(16,basamak);
	                	else if(sayikopya[a]=='3')
	                	onluk+=3*pow(16,basamak);
	                	else if(sayikopya[a]=='4')
	                	onluk+=4*pow(16,basamak);
	                	else if(sayikopya[a]=='5')
	                	onluk+=5*pow(16,basamak);
	                	else if(sayikopya[a]=='6')
	                	onluk+=6*pow(16,basamak);
	                	else if(sayikopya[a]=='7')
	                	onluk+=7*pow(16,basamak);
	                	else if(sayikopya[a]=='8')
	                	onluk+=8*pow(16,basamak);
	                	else if(sayikopya[a]=='9')
	                	onluk+=9*pow(16,basamak);	
	                basamak--;	
	               a++;	
            }
					
		a=a-3;			
		printf("16 Tabaninda %s sayisi 2 tabaninda--> ",sayikopya);
        while(onluk>=1){
        a++;
        	k[a]=onluk%2;
        	onluk=onluk/2;
		}
		for(a=a;a>0;a--){
			printf("%d",k[a]);
		}
		printf("");
	
}
void taban11(){
int x;
printf("Programdan Cikis....\n");

}



int main(void)
{
int menu;


printf("1. 10 tabanindan 2'lik tabana\n");
printf("2. 10 tabanindan 8'lik tabana\n");
printf("3. 10 tabanindan 16'lik tabana\n");
printf("4. 2 tabanindan 10'lik tabana\n");
printf("5. 8 tabanindan 10'lik tabana\n");
printf("6. 16 tabanindan 10'lik tabana\n");
printf("7. 2 tabanindan 8'lik tabana\n");
printf("8. 2 tabanindan 16'lik tabana\n");
printf("9. 8 tabanindan 2'lik tabana\n");
printf("10. 16 tabanindan 2'lik tabana\n");
printf("\t0.cikis\n");

printf("Menu seciniz : ");
scanf("%d",&menu);

if(menu==1){
	system("cls");
	taban1();
}
else if(menu==2){
	system("cls");
	taban2();
}
else if(menu==3){
	system("cls");
	taban3();
}
else if(menu==4){
	system("cls");
	taban4();
}
else if(menu==5){
	system("cls");
	taban5();
}
else if(menu==6){
	system("cls");
	taban6();
}
else if(menu==7){
	system("cls");
	taban7();
}
else if(menu==8){
	system("cls");
	taban8();
}
else if(menu==9){
	system("cls");
	taban9();
}
else if(menu==10){

	system("cls");
		taban10();

}
else if(menu==0){
	system("cls");
	taban11();
}


return 0;

}

