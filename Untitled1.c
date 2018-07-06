#include<stdio.h>
void quicksort(int v[25],int first,int last){
   int i, j, pivot, aux;

   if(first<last){
      pivot=first;
      i=first;
      j=last;

      while(i<j){
         while(v[i]<=v[pivot]&&i<last)
            i++;
         while(v[j]>v[pivot])
            j--;
         if(i<j){
            aux=v[i];
            v[i]=v[j];
            v[j]=aux;
         }
      }

      aux=v[pivot];
      v[pivot]=v[j];
      v[j]=aux;
      quicksort(v,first,j-1);
      quicksort(v,j+1,last);

   }
}

int main(){
   int i, n, v[25];

   printf("Cate elemente doriti sa aibe vectorul?: ");
   scanf("%d",&n);

   printf("Introduceti %d elemente: ", n);
   for(i=0;i<n;i++)
      scanf("%d",&v[i]);

   quicksort(v,0,n-1);

   printf("Vectorul sortat: ");
   for(i=0;i<n;i++)
      printf(" %d",v[i]);

   return 0;
}
