#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int myage =30;
	int *ptr =&myage ;  // bir pointer kullanilmadan �nce mutlaka bellek  adresine atanmasi gerekir.
	                    // ��nk� pointerlar bellek adresleri ile islem yapar .
	                    // pointerlara adres atama islemi & isareti ile yapilir.
	                    // pointer ile pointera atanan degisken veri t�r� ayni olmali
	                    
    printf("a is : %d\n",*ptr);
    
    printf ("adress in the memory is: %x\n ",ptr);
    ptr++;
    printf("new adress is : %x ",ptr);   //Burada ptr int tuttugunda +1 arttirinca +4 artiyor.
                                         // ��nk� int 4 byte yer kaplar.
                                         // eger char tutarsa +1 artar, char bellekte 1 byte yer kaplar
    
    
    
	return 0;
}
