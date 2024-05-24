# Aula 04

- Mapeamento de Subrede
## Endereçamento IP
- Calculo de máscara de subrede

## 1ºExemplo
<img src="IP.jpg">

## 2ºExemplo
<img src="exe2.jpg">

- Na imagem a seguir podemos notar 2 Octais totalmente preenchidos, e dois octais zerados ou seja, um total de 255^2 hosts liberados.

- A mascara sendo "16", em binário ficara igual na imagem: 255.255.0.0.
    - O Gatway ficara: 172.16.0.1.
    - Broadcast ficara: 172.16.255.255
    - E ficara em apenas 1 escopo, justamente porque a mascara é 16. Caso a mascara fosse 17, ja seriam 2 escopos, ou seja, dividido por 2:
        - 172.16.0.0 até 172.16.0.127
        - 172.16.0.128 até 172.10.0.255

- O que é Gateway?
    -  pode ser classificado como “portal” ou “portão”. Ele é considerado uma passagem entre dois ambientes distintos. Ou ainda, em outras palavras, é um sistema ou equipamento encarregado de estabelecer a comunicação entre duas redes.

- O que é Broadcast?
    - Em redes de computadores, um endereço de broadcast é um endereço lógico no qual todos os dispositivos conectados a uma rede de comunicações de acesso múltiplo estão habilitados a receber datagramas. Uma mensagem enviada para um endereço de broadcast pode ser recebido por todos os hospedeiros conectados à rede.

- O que é Escopo?
    - Um escopo no Gerenciador de Rede Virtual do Azure representa o acesso delegado concedido a um gerenciador de rede em que os recursos podem ser aplicados aos recursos dentro do escopo. Ao especificar um escopo, você limita o acesso ao qual o Gerenciador de Rede pode gerenciar recursos.

- O que são Hosts?
    - Host, hospedeiro ou anfitrião, em informática, é qualquer máquina ou computador conectado a uma rede, podendo oferecer informações, recursos, serviços e aplicações aos usuários ou outros nós na rede. É o responsável por implementar a estrutura da camada de rede de endereçamento.
## Atividade
### A partir das seguintes redes, encontre o total de hosts, gateway e broadcast
- a) 192.168.0.0/24
- b) 192.168.3.0/25
- c) 10.0.0.128/25
- d) 172.16.0.192/26
- e) 172.10.0.0/16
- f) 172.16.0.0/17
- g) 10.0.0.0/8
- h) 10.0.128.0/17
- i) 10.128.0.0/9
- j) 10.0.0.0/10

## Cadastro na Cisco net acad no curso Iot, pra termos acesso ao simulador
[Emails da turma](./emails.csv)
