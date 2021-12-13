Esse é um programa para teste do git.
Ele calcula o dobro de qualquer valor inteiro enquanto o usuário desejar.

a ideia era tipo 

vc pede pro usuário digitar um numero e fala pra ele qual é o dobro desse numero

eu queria q ele fizesse isso infinitamente, não uma vez só, a não ser q o usuário quisesse sair

ou seja, ele pode ver o dobro várias vezes.

pra isso eu usei uma estrutura de repetição q chama "for", q na épca eu achava dificil de usar mas agr eu consegui fzr de primeira sem tutorial algum, apenas com fontes da minha cabeça

e achei genial minha sacada de i=0 e i=10 ficou mt legal isso pq

explicando

primeiro eu declaro a existência de A e X

ai eu abro a estrutura de repetição e crio um contador la dentro q chama i

ai esse i começa no 0

vc coloca primeiro o valor inicial, dps o valor final (q eu coloquei no máximo < 10)

e por fim vc coloca oq acontece com o i dps q ele repetir uma vez
no caso eu coloquei i++ pq ai dps da primeira vez ele vai de 0 pra 1 pra 2

teoricamente era pra acabar quando chegasse no 9, ja q eu botei até 10, então quando o usuário usasse 10 vezes (de 0 a 9 da 10) o programa ia encerrar automaticamente

ai ta, dentro da estrutura de repetição eu botei pra pessoa digitar 0 pra sair e botei pra ela escolher um numero 

ai ela digita o numero (a)

se esse numero for diferente de 0, ele calcula o dobro e informa pra pessoa.

mas como eu quero q repita pra sempre, eu não quero fzr só 10 vezes, e n quero botar um numero eterno grande dms pra n ficar pesado

então toda vez q calcula um numero, eu faço o i ficar 0 dnv. ppr isso botei o i=0.

então ele nunca vai chegar a 10, pq ele se iguala a 0 toda vez q repete.

e ai, caso contrário, se a pessoa digitar 0, eu boto o i=10, e ai a repetição se encerra automaticamente e o programa acaba.