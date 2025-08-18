#include <stdio.h>

// Desafio Super Trunfo - Países
// Cadastro das Cartas
int main() {
    // 
    char Estado [20] = "Piauí";
    char CodigodaCarta [5] = "P1";
    char nomecidade [30] = "Teresina";
    int População = 902.644;
    int númerodepontosturísticos = 34
    double Área = 1.391,981km²;
    double PIB = R$ ;

    printf ("Digite o Estado: \n");
    scanf ("%s", Estado);

    printf ("Digite o Código da Carta: \n");
    scanf ("%s", CodigodaCarta);

    printf ("Digite o nome da cidade: \n");
    scanf ("%s", nomecidade);

    printf ("Digite o total da População: \n");
    scanf ("%d", &População);

    printf ("Digite a Área em Km² da cidade: \n");
    scanf ("%f", &Área);

    printf ("Digite o PIB da cidade: \n");
    scanf ("%f", &PIB);

    printf ("Digite o número de Pontos Turísticos da cidade: \n");
    scanf ("%d", &númerodepontosturísticos);

    printf ("Estado: %s\n", Estado);
    printf ("Código da Carta: %s\n", CodigodaCarta);
    printf ("Nome da Cidade: %s\n", nomecidade);
    printf ("População: %d\n", População);
    printf ("Área: %f\n", Área);
    printf ("PIB: %f\n", PIB);
    printf ("Número de Pontos Turísticos: %d\n", númerodepontosturísticos);
    
  
    return 0;
}