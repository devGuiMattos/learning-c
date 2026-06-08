Master Blaster C



**--- *Informações básicas deste arquivo* ---**

\-> Este arquivo está divido em seções, cada uma explicando um tópico;

\-> Quando ver um \[texto] não se assuste, isso é um placeholder informando o que deve ser escrito na hora de programar;





**Tipos de dados**

int : representa valores inteiros

float : representa um valor decimal, limite de até 4 bytes

double : representa um valor decimal, limite de até 8 bytes

char : representa um único caractere



Declarando uma variável:



int numero = 10; // Um valor inteiro

float decimal = 4.25 // Um valor decimal

char letra = 'G' // Um caractere



Vale ressaltar que strings são arrays de caracteres, então para declarar uma string devemos usar um array de caracteres. Arrays serão abordados mais para frente.



char nome\[] = "Guilherme";



**Output**

Pra realizar a impressão de informações é preciso, primeiramente, incluir a biblioteca <stdio.h>.

Então:



\#include <stdio.h> // \*\* std significa standart, ou seja, uma biblioteca padrão. Nesse caso, a biblioteca é a standart io.

.

.



O método utilizado para imprimir informações é o printf().

Então:



\#include <stdio.h>



int main() {

&#x20;   printf("Hello World!"); // imprime a mensagem "Hello World!" na tela

&#x20;   return 0; // encerra o programa

}



Vale ressaltar que C é uma linguagem estruturada, então para o programa saber onde iniciar deve-se adicionar o método main().

O valor retornado indica o estado da execução. Se o valor retornado for 0, o programa foi executado sem problemas. Se for qualquer valor diferente, significa que houve um erro de execução.



**Input**

Pra realizar a inserção de valores também é preciso utilizar a biblioteca <stdio.h>. O método utilizado é o scanf().

Então:



\#include <stdio.h>



int main() {

&#x20;   int valor; // inicializa uma variável do tipo int com o valor vazio

&#x20;

&#x20;   scanf("%d", \&valor); // lê o valor inserido e atribui ele ao endereço de memória da variável "valor" \*\* o caractere '\&' atribui o valor lido à variável

&#x20;   printf("%d", valor); // imprimi o valor na tela



&#x20;   return 0; // encerra o programa

}



Também existe o método fgets() para receber entrada de usuário. Este é utilizado para obter mais de uma entrada do usuário.

Então:



\#include <stdio.h>



int main() {

&#x09;char nomeCompleto\[30];



&#x09;printf("Qual eh o seu nome completo?\\n: ");

&#x09;fgets(nomeCompleto, sizeof(nomeCompleto), stdin);



&#x09;printf("Salve, %s", nomeCompleto);



&#x09;return 0;

}



**(Especificadores de formato)**

Especificadores de formato são detalhes importantes que fazem o código funcionar, sem eles o programa fica perdido na hora de lidar com variáveis.

Os especificadores de formato são:



| Especificador | Tipo de variável |

\------------------------------------

|   %d ou %i    |       int        |

\------------------------------------

|      %f       |      float       |

\------------------------------------

|      %c       |       char       |

\------------------------------------

|     %lf       |      double      |

\------------------------------------

|     %zu       |      sizeof()    |   \*\* sizeof() indica o tamanho de bytes que a variável ocupa na memória

\------------------------------------

|     %p        |   pointer value  |

\------------------------------------



**Conversão de tipos (Casting)**

Durante a execução do programa pode ocorrer de precisarmos trocar o tipo de uma variável, para isso, realizamos o casting

O casting em C funciona da seguinte forma:



\[tipo] \[nome] = (\[tipo]) \[expressão]





