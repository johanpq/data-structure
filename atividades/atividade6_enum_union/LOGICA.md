1- Criei um enum com duas constantes e fiz a primeira receber 1 (para começar com 1 e não com 0) e a renomei com typedef. Logo criei uma struct com três variáveis. A primeira sendo um vetor de string, a segunda do tipo inteiro e a outra do tipo Genero(nomeado a enum com typedef) e renomei a struct com typedef.

No int main declaro a variável do tipo registro(nomeado com typedef) e peço ao usuário para digitar o nome a idade armazenando elas na struct, e então eu peço ao usuário para digitar o genêro sendo 1 para masculino e 2 para feminino e crio condições para que se o número for 1 que é igual a Masculino na enum, ele mostra todos os dados e diz que é masculino, da mesma forma eu faço para feminino com o else if, e por fim, se o usuário não digitar 1 e nem 2, ele dar erro.



2- Crio a union com três vetores de strings, e crio uma struct com três variáveis, a primeira sendo do tipo char (vetor de string), a segundo do tipo float e a outra do tipo union, e renomeio a struct com typedef.

Crio uma variável do tipo produto(nomeado com typedef), peço ao usuário o nome e o preço do produto e armazeno na struct. Depois crio uma variável do tipo int para pega-la com switch. E peço para o usuário digitar o tipo do produto, todos eles classificados(1, 2 e 3) e pego a variável com switch.

Dentro do switch, caso for 1 Eu pergunto o tipo do alimento e armazeno na union na variável de acordo com o tipo. Caso 2 e 3 é a mesma coisa, só irá mudar a variável da union que vai receber o valor de acordo com o que o usuário escolha. E dentro dos cases eu já mostro ao usuário os valores digitados.



3- Crio uma enum para os meses e declaro 12 constantes, que são os meses, e inicializo o primeiro mês com 1. Depois crio uma struct para dias e anos e declaro duas variáveis do tipo inteiro, uma para dia e uma para ano, e renomeio a struct com typedef.

No int main declaro a variável do tipo Day_Year(nomeado com typedef) para a struct e declaro outra variável do tipo enum para pegar os meses. Depois peço ao usuário para digitar o dia e armazeno na struct. Depois o mês e armazeno na variável do tipo enum, e o ano e armazeno na struct.

Depois faço condições para comparar se a variável meses (do tipo enum) for igual ao número recpectivo do mês, o programa imprima na tela a data. Faço isso para todos os meses e caso o usuário não digitado de acordo com os meses, ele imprima a mensagem: você digitou o mês errado!
