# **📊 Bubble Sort - Implementação e Otimização** 🔄

## **📝 Descrição**

<a href="https://pt.wikipedia.org/wiki/Bubble_sort">
    <img src="https://github.com/user-attachments/assets/200dd03c-00f3-47e8-bd6b-4ae0c215c91e" alt="Bubble_sort_animation" align="right" width="250" height="250">
</a>

Este repositório contém uma implementação do algoritmo de ordenação **Bubble Sort**, juntamente com uma versão otimizada. O objetivo principal deste projeto é compreender o funcionamento do Bubble Sort, analisar sua eficiência e aplicar uma otimização para melhorar o desempenho em listas quase ordenadas.

O **Bubble Sort** é um algoritmo de ordenação que pode ser aplicado em Arrays e Listas dinâmicas.
Se o objetivo é ordenar os valores em forma crescente, então, a posição atual é comparada com a próxima posição e, se a posição atual for menor que a posição posterior, é realizada a troca. Caso contrário, a troca não é feita e passa-se para o próximo par de comparação.
Um array ou lista pode estar já ordenado no momento em que se solicita a ordenação, dessa forma, esta situação tem de ser considerada na implementação do algoritmo. 

## **⚙️ Como Funciona**

<a href="https://pin.it/4QhqJWy3w">
    <img src="https://github.com/user-attachments/assets/3be1282d-1490-437e-9198-5d95f95673b9" alt="Bubble_sort_animation" align="right" width="500" height="500">
</a>

1. **Vetor inicial**:
   Temos o vetor `[3, 2, 8, 1, 5]`.

2. **Primeira passagem (ou iteração)**:
   O algoritmo começa comparando os elementos adjacentes e trocando-os se necessário. Aqui estão as comparações:
   
   - O primeiro par de elementos é 3 e 2. Como 3 é maior que 2, eles são trocados. Agora, o vetor é `[2, 3, 8, 1, 5]`.
   - O próximo par de elementos é 3 e 8. Como 3 é menor que 8, não há troca. O vetor permanece `[2, 3, 8, 1, 5]`.
   - O próximo par é 8 e 1. Como 8 é maior que 1, eles são trocados. O vetor se torna `[2, 3, 1, 8, 5]`.
   - O último par é 8 e 5. Como 8 é maior que 5, eles são trocados. O vetor agora é `[2, 3, 1, 5, 8]`.
   
   Ao final da primeira passagem, o maior número (8) está na última posição do vetor.

3. **Segunda passagem**:
   Na segunda passagem, o algoritmo realiza comparações novamente, mas agora até o penúltimo elemento, já que o maior elemento já foi "burbulhado" para o final.

   - O primeiro par de elementos é 2 e 3. Como 2 é menor que 3, não há troca. O vetor continua `[2, 3, 1, 5, 8]`.
   - O próximo par de elementos é 3 e 1. Como 3 é maior que 1, eles são trocados. O vetor agora é `[2, 1, 3, 5, 8]`.
   - O próximo par é 3 e 5. Como 3 é menor que 5, não há troca. O vetor permanece `[2, 1, 3, 5, 8]`.
   
   Ao final da segunda passagem, o número 5 está na sua posição correta.

4. **Terceira passagem**:
   Na terceira passagem, o algoritmo compara apenas os dois primeiros elementos, pois os dois últimos já estão na posição correta.

   - O primeiro par de elementos é 2 e 1. Como 2 é maior que 1, eles são trocados. O vetor agora é `[1, 2, 3, 5, 8]`.
   
   Após a terceira passagem, o vetor já está ordenado. O algoritmo termina a execução.

5. **Resultado final**:
   O vetor ordenado é `[1, 2, 3, 5, 8]`.

## **🛠️ Tecnologias Utilizadas**

- **Linguagem:** C e C++ 💻
- **Ambiente de Desenvolvimento utilizado:** CodeBlocks

## **🔍 Algoritmos Bubble Sort**

 ### Versão Básica do Bubble Sort: ###

<img src="https://github.com/user-attachments/assets/59880334-1dda-47da-997c-6cf0a77e41fc" alt="Algoritmo_Bubble_sort" align="right">

O Bubble Sort funciona repetidamente passando pela lista, comparando pares de elementos adjacentes e trocando-os se estiverem na ordem errada. Esse processo é repetido até que a lista esteja completamente ordenada. A cada passada, o maior elemento "borbulha" para o final do vetor, daí o nome "Bubble Sort".

Esse algoritmo tem uma complexidade de tempo O(n²), o que significa que, para vetores muito grandes, ele pode ser ineficiente.

Esta função foi desenvolvido em linguagem de programação C.

**Caso de teste:**

<img src="https://github.com/user-attachments/assets/7ab2cb13-8f4d-4feb-b52f-50fcd1b1958f" alt="Algoritmo_Bubble_sort" align="lift">

<img src="https://github.com/user-attachments/assets/da63d02a-ce81-4a8f-ae5f-b45414382ead" alt="run" align="right" width="400" height="200">

<br></br>

### Versão Otimizada do Bubble Sort: ###
<img src="https://github.com/user-attachments/assets/ca3528b4-d8fb-4099-ae94-5a65129412e6" alt="Algoritmo_Bubble_sort" align="right"  width="480" height="300">

O Bubble Sort funciona repetidamente passando pela lista, comparando pares de elementos adjacentes e trocando-os se estiverem na ordem errada. Esse processo é repetido até que a lista esteja completamente ordenada. A cada passada, o maior elemento "borbulha" para o final do vetor, daí o nome "Bubble Sort".

Esse algoritmo tem uma complexidade de tempo O(n²), o que significa que, para vetores muito grandes, ele pode ser ineficiente.

Esta função foi desenvolvido em linguagem de programação C.

<br> </br>
**Caso de teste:**

<img src="https://github.com/user-attachments/assets/f5d0228d-97ed-4b42-a584-63034f6f1119" alt="Algoritmo_Bubble_sort" align="lift"  width="'450" height="250">

<img src="https://github.com/user-attachments/assets/74227058-d595-457e-a25b-e8eaa9d50c37" alt="run" align="right" width="480" height="350">

<br></br>


## **🚀 Instruções para Execução**

1. Clone o repositório para o seu computador:

    ```bash
    git clone https://github.com/seu-usuario/bubble-sort.git
    ```

2. Entre na pasta do repositório:

    ```bash
    cd bubble-sort
    ```

3. Compile o código:

    ```bash
    g++ -o bubble_sort main.cpp
    ```

4. Execute o programa:

    ```bash
    ./bubble_sort
    ```

## **🔍 Como Funciona**

1. **Versão Básica do Bubble Sort:**  
   A função `bubbleSort` realiza o algoritmo de ordenação comparando pares consecutivos de elementos e trocando-os caso estejam fora de ordem. Isso se repete até que o vetor esteja completamente ordenado.

2. **Versão Otimizada do Bubble Sort:**  
   A função `optimizedBubbleSort` melhora a versão básica ao monitorar se ocorreram trocas durante uma iteração. Se nenhuma troca ocorrer, o algoritmo interrompe a execução antecipadamente, evitando comparações desnecessárias.

3. **⏱️ Medição de Tempo:**  
   O tempo de execução de ambos os algoritmos é medido utilizando a biblioteca `chrono`. A comparação é feita para determinar a eficiência da versão otimizada.

## **📊 Exemplo de Saída**

### **Versão Básica:**


40 1 23 20 67 44 9 18 0 99 

Vetor depois de ordenar (versão básica):
0 1 9 18 20 23 40 44 67 99

Tempo de execução (versão básica): 2457 microsegundos
Versão Otimizada:
java
Copiar
Editar
Vetor antes de ordenar (versão otimizada):
40 1 23 20 67 44 9 18 0 99 

Vetor depois de ordenar (versão otimizada):
0 1 9 18 20 23 40 44 67 99

Tempo de execução (versão otimizada): 1865 microsegundos
## **🧪 Testes Realizados**

- Testei ambos os algoritmos (versão básica e otimizada) no mesmo vetor, com 10 elementos, para comparar o tempo de execução.
- A versão otimizada mostrou uma melhoria de desempenho, especialmente quando o vetor já estava parcialmente ordenado.
- A versão otimizada evita comparações desnecessárias e, por isso, resulta em uma execução mais rápida, especialmente em listas que já estão quase ordenadas.

## **📈 Conclusão**

- **Bubble Sort** é um algoritmo de ordenação simples, mas ineficiente para grandes volumes de dados.
- A **otimização** adicionada no algoritmo ajuda a reduzir o número de comparações quando o vetor já está parcialmente ordenado.
- O tempo de execução de ambos os algoritmos foi comparado e a versão otimizada demonstrou um desempenho melhor, especialmente quando a lista já estava quase ordenada.

---

## **📜 Licença**

Distribuído sob a licença MIT. Veja o arquivo [LICENSE](LICENSE) para mais detalhes.
