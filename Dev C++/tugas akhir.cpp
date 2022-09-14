#include <iostream>

using namespace std;

void bubbleSort(int a[], int n) {
   cout<<("|")<<"i\t|"<<"j\t|"<<"a[j-1]\t|"<<"a[j]\t|"<<"array\t\t\t|\n";
   for (int i = n-1; i >= 1; i--) {
      for (int j = 1; j <= i; j++) {
         if (a[j-1] > a[j])
         swap(a[j], a[j-1]);
         cout<<("|")<<i<<"\t|"<<j<<"\t|"<<a[j-1]<<"\t|"<<a[j]<<"\t|";
         for(int k;k<20;k++){
            cout<<a[k]<<" ";
         }
         cout<<"\t|"<<endl;
      }
   }
}

int main(){
   int array[10]={20,11,18,15,13,12,17,19,16,14};
   bubbleSort(array,20);
   for(int i;i<20;i++){
      cout<<array[i]<<" ";
   }
}
