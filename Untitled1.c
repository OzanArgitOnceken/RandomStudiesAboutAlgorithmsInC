#include <stdio.h>
#include <stdlib.h>

void quickSort(int *,int, int);

int main(){
    int *array,i,size;
    printf("Dizinin boyutunu giriniz: "); scanf("%d",&size);
    array=(int *)malloc(size*sizeof(int));
    for(i=0;i<size;i++){
        printf("Dizinin %d. elemani :",i+1); scanf("%d",&array[i]);
    }
    printf("Dizinin baslangic durumu: ");
    for(i=0;i<size;i++){
        printf("%d ",array[i]);
    }
    quickSort(array,0,size-1);
    printf("\n\nDizinin son durumu: ");
    for(i=0;i<size;i++){
        printf("%d ",array[i]);
    }
    return 0;
}

void quickSort(int *array,int first,int last){
    int i; // Ýlk elemaný tutacak sayaç deðiþkeni
    int j; // Son elemaný tutacak sayaç deðiþkeni
    int pivot; // Pivot elemaný tutacak sayaç deðiþkeni
    int tmp; // Yer deðiþtirme iþlemi için kullanýlacak deðiþken
    pivot=first; // Pivot ilk eleman seçilir
   
    // Burada yapýlan iþlem son eleman ilk elemandan büyükse, son eleman ilk elemandan büyük olduðu sürece baþtan ve sondan pivottan büyük olan ve
    // pivottan küçük olan bir eleman seçilip yer deðiþtirilir. 
    if(last>first){
        pivot=first;
        i=first;
        j=last;
        while (i<j){
            while (array[i]<=array[pivot] && i<last && j>i){ // Baþtan pivottan büyük olan bir eleman bulunur
                i++;
            }
            while (array[j]>=array[pivot] && j>=first && j>=i){ // Sondan pivottan küçük olan bir eleman bulunur
                j--;
            }
            if (j>i){ // Swap iþlemi yapýlýr
                tmp=array[i];
                array[i]=array[j];
                array[j]=tmp;
            }
            int k;
            printf("<");
  			for(k=0;k<6;k++)
      		printf("%d ",array[k]);
            printf(">");
            printf("\n");
        }
        // Yeniden pivot seçilir ve bölünen baðlý listenin diðer parçalarý tekrar quick sort fonksiyonuna gönderilir
        tmp=array[j];
        array[j]=array[pivot];
        array[pivot]=tmp;
        quickSort(array,first,j-1);
        quickSort(array,j+1,last);
    }
}
