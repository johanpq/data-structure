1- Crio duas struct no inicio, uma para o novo salario e a outro com as informações das pessoas e os renomeio. Crio uma variável do tipo int para a quantidade de pessoas e peço ao usuário para dar o valor, crio dois vetores dinamicos com o tamanho da quantidade de pessoas. O primeiro vetor do tipo funcionario(nome renomeado com typedef da minha struct Employer) e o outro do tipo new_salario(nome renomeado com typedef da minha struct change_salario).

Checo se ambas foram alocadas na memória, e crio minha função(employers) sem retorno para receber os valores do usuário. A função têm dois parâmetros, que são a quantidade de pessoas e um ponteiro do tipo funcionario, dentro da função eu crio um loop para o usuário preencher a struct(Employer) e chamo a função no int main com os argumentos da quantidade de pessoas, e o meu vetor do tipo funcionario.

Depois crio outra função para mostrar na tela com os mesmos parâmetros e crio uma variável contadora e um loop para mostrar os valores que o usuário digitou na tela. No int main eu a chamo e passo os mesmos argumentos da anterior.

Depois crio outra função para fazer o reajuste do salário com três parâmetros, a quantiade de pessoas, um ponteiro do tipo funcionario e outro ponteiro do tipo new_salario. Crio um loop e faço o cálculo para aumentar 10% do valor e crio um printf para mostrar o novo salário. No int main eu a chamo e passo as variáveis como argumentos para a função que são a quantidade de pessoas, o vetor do tipo funcionario e o vetor do tipo new)salario.

Depois crio a última função que recebe os mesmos parâmetros da função anterior e dentro da função, eu crio sete variáveis. quatro do tipo char, duas do tipo float e um contador. Quatro delas são vetores para receber o nome da pessoa com o maior e menor salário. Crio um loop que vai até a quantidade de pessoas e crio condições para que receber o nome da pessoa com o maior salário e menor salário, para isso eu usei a função strcpy que pertence a bibilioteca string.h. Depois eu criei dois printf para msotrar na tela.
No int main eu chamo ela com os mesmos argumentos da função chamada anterior e libero os dois vetores dinâmicos.


2- Crio a struct Registro com três variáveis inteiras e a renomeio com typdef, crio quatro protocolos para funções e dentro do int main crio a variável do tipo inteiro para a quantidade de pessoas. Crio o vetor do tipo registro(nomeado com typdef) do tamanho da variável da quantidade de pessoas e checo se foi alocado dinamicamente.

Crio uma função que recebe com parâmetros a quantidade de pessoas e um ponteiro do tipo registro. Dentro da função crio um contador e o loop para o usuário me fornencer as informações, e a chamo no int main com as variáveis da quantidade de pessoas e o vetor dinamico como argumentos.

Logo, crio outra função com os mesmos parâmetros, crio um contador e o loop, e crioo vários printf para mostrar na tela. No int main a chamo com os mesmo arguementos da função anterior.

Crio outra função com os mmesmos parâmetros e crio um contador e um vetor estático do tipo inteiro, o vetor tendo a variável da quantidade de pessoas com índice. Crio um printf para informar ao usuário e dois loops. O primeiro para receber o novo valor e o segundo para mostra na tela. No int main eu a chamo com os mesmos arguementos da função anterior.

E por fim, crio a última função com os mesmos parâmetros e dentro da função, crio três variáveis do tipo inteiro para receber a maior e menor idade e o contador e mais duas variáveis do tipo char que são vetores de strings com o tamanho 100 para receber os nomes das pessoas mais velha e mais jovem. Crio um loop e faço as condições para comparar os valores e as variáveis receber os valores. Novamente usando a função strcpy para copiar uma string(função pertence a biblioteca string.h) e crio alguns printf para mostrar os valores dentro do loop. No int main a chamo com os mesmos arguemntos da função anterior e libero o vetor dinamico.
