#include <bits/stdc++.h>
using namespace std;


void fibonacci(int n, int igual) {
    int primeiro = 0, segundo = 1, proximo;

    printf("Sequencia de Fibonacci até o %dº termo:\n", n);
    printf("%d, %d, ", primeiro, segundo);

    for (int i = 3; i <= n; ++i) {
        proximo = primeiro + segundo;
        printf("%d, ", proximo);
        primeiro = segundo;
        segundo = proximo;
    }
    printf("\n");
    if(proximo == igual || primeiro == igual || segundo == igual){
        printf("Pertence!");
        return;
    }

    else{
        printf("Nao Pertence");
    }

}

int main() {
    int termos, igual;

    printf("Digite o número de termos da sequência de Fibonacci: ");
    scanf("%d", &termos);

    printf("Digite o termo de interesse: ");
    scanf("%d", &igual);

    fibonacci(termos, igual);

    return 0;
}