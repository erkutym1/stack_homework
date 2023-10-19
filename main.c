#include <stdio.h>
#include <stdlib.h>

#define SIZE 20

int sizeControl=-1;


void push(int veri, int *stack)
{
    if(sizeControl == SIZE-1)
        printf("- stack dolu, veri eklenemedi.\n");
    else
    {
        stack[sizeControl+1] = veri;
        printf("- %d eklendi.\n", veri);
        sizeControl++;
    }
}

int pop(int *stack)
{
    if(sizeControl == -1)
        printf("- stack zaten bos.\n");
    else
    {
        int gecici = stack[sizeControl];
        sizeControl--;
        return gecici;

    }
}


void isEmpty(int *stack)
{
    if(sizeControl==-1)
        printf("- evet stack bos.\n");
    else
        printf("- stack bos degil.\n");
}


void top(int *stack)
{
    if(sizeControl==-1)
        printf("- stack bos. top yazdirilamadi.\n");
    else
        printf("- %d son eleman.\n", stack[sizeControl]);
}



void stackShow(int boyut, int *stack) //mevcut stack'i yazdirmak icin
{
    if(sizeControl==-1)
         printf("- stack bos. stack yazdirilamadi.\n");
    else
    {
        printf("- MEVCUT STACK : ");
        for(int i=0; i<=sizeControl; i++)
        {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }

}





int main()
{
    int stack[SIZE];  // bir stack dizi olusturalim

    isEmpty(stack);  // once stack bos mu bakalim

    pop(stack);      // son veriyi cikarmayi deneyelim

    stackShow(SIZE,stack);   // stack'i bastirmayi deneyelim

    push(15,stack);    // veri ekleyelim

    isEmpty(stack);    // hala bos mu gosteriyor bakalým

    stackShow(SIZE,stack);   // tekrar stack'i bastirmayi deneyelim

    push(20,stack);    // tekrar veri ekleyelim

    push(32,stack);    // tekrar veri ekleyelim

    stackShow(SIZE,stack);   // tekrar stack'i bastirmayi deneyelim

    printf("- %d cikarildi.\n", pop(stack));  // son veriyi temizlemeyi deneyelim

    printf("- %d cikarildi.\n", pop(stack));  // kalanlardaki son veriyi de temizlemeyi deneyelim


    stackShow(SIZE,stack);   // tekrar stack'i bastirmayi deneyelim,
                            // pop'lar sadece bastirmis mi yoksa gercekten
                            // son verileri stack'ten cikartmis mi kontrol edelim


    push(48,stack);    // tekrar veri ekleyelim

    push(29,stack);    // tekrar veri ekleyelim

    stackShow(SIZE,stack);   // tekrar stack'i bastirmayi deneyelim

    top(stack);     // son veriyi gostermeyi deneyelim


    stackShow(SIZE,stack);   // tekrar stack'i bastirmayi deneyelim,
                            // top'lar sadece bastirmis mi yoksa pop'taki gibi
                            // son veriyi stack'ten cikartmis mi kontrol edelim


    printf("- %d cikarildi.\n", pop(stack));    // son veriyi temizlemeyi deneyelim

    printf("- %d cikarildi.\n", pop(stack));    // kalanlardaki son veriyi de temizlemeyi deneyelim


    push(17,stack);    // tekrar veri ekleyelim

    push(23,stack);    // tekrar veri ekleyelim


    stackShow(SIZE,stack);   // stack'i bastiralim. pop'lar push'lar
                            // duzgun calismis mi kontrol edelim.




    for(int i=0;i<17;i++)     // stack'i tamamen doldurmak icin veri ekleyelim...
        push(99,stack);


    stackShow(SIZE,stack);   // stack'i bastirip kontrol edelim.



    // simdi veri eklemeye calisalim...

    push(16,stack);

    push(34,stack);

    push(42,stack);


    stackShow(SIZE,stack);   // son kez stack'i bastirip kontrol edelim.





















    return 0;
}
