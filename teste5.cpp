#include <bits/stdc++.h>
using namespace std;

int main(){

   char A[10000];
   int tam = 0;
   scanf("%s", A);
   tam = strlen(A);


   for(int i = tam; i >= 0; i--){

    printf("%c", A[i]);

   }

   return 0;

}