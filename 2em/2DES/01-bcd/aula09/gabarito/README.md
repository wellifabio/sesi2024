# Gabarito
- 1(40) Desenvolva o modelo **MER/DER conceitual** deste banco de dados, utiliza draw.io ou qualquer ferramenta gráfica, salve o arquivo no formato **.png** Anexe a imagem no formato *.png ao formulário desta questão. ![MER DER Conceitual](./mer_der_solicicacoes.png)
- 2(10) Conceitualmente, qual a cardinalidade simples do relacionamento entre as entidades **"Solicitações"** e **"Produtos"** respectivamente.
    - [ ] 1 para N (Solicitações x Produtos)
    - [x] N para N (Solicitações x Produtos)
    - [ ] 1 para 1 (Solicitações x Produtos)
    - [ ] (1,1) para (0,N) (Solicitações x Produtos)
    - [ ] (0,1) para (0,1) (Solicitações x Produtos)
- 3(05) Crie um **MER Dicionário de Dados** a partir do script de Criação **DDL**, pode formatar como **Tabela Markdow** ou **Texto com tópicos**.
- 4(05) Faça uma query que mostre o nome do funcionário que mais fez solicitações (em Reais), O **SELECT** deve mostrar o **nome** do funcionário e seu respectivo **valor total**.
- 5(05) Qual funcionário que mais fez solicitações? (em Reais) (Solicitações que custaram mais).
    - [x] Joao Antonio - 783.00
    - [ ] Maria da Silva - 783.25
    - [ ] Jose Pedro - 860.42
    - [ ] Ana Pereira - 783.00
- 6(05) Qual funcionário que menos fez solicitações? (em Reais) (Solicitações que custaram menos)
    - [ ] Joao Antonio - 183.00
    - [ ] Maria da Silva - 606.30
    - [ ] Jose Pedro - 60.42
    - [x] Ana Pereira - 104.50
- 7(10) Faça uma consulta que mostre os nomes dos **departamentos** e **nomes dos produtos** cujo as solicitações  contém **"Parafuso"** e **"Difusor"**.
- 8(10) Escreva um comando select para mostrar apenas os nomes dos produtos vendidos em **Fevereiro de 2018**.
```sql
SELECT p.Nome_produto
FROM Produtos p
WHERE p.Cod_Produto IN (
    SELECT i.Cod_Produto
    FROM Itens_Solicitacao i
    JOIN Solicitacoes s ON i.Num_Sol = s.Num_Sol
    WHERE s.Data_sol BETWEEN '2018-02-01' AND '2018-02-28'
);
-- ou
select p.Nome_produto from Produtos p
inner join Itens_Solicitacao i on i.Cod_Produto = p.Cod_Produto
inner join Solicitacoes s on s.Num_Sol = i.Num_Sol
where Year(s.Data_sol) = "2018" AND month(s.Data_sol) = "02";
```
Resultado
+--------------+
| Nome_produto |
+--------------+
| Parafuso     |
| Difusor      |
+--------------+
- 9(10) Crie uma **view(visão/relatório)** que mostre os seguintes campos: Num_Sol, Data_sol, Cod_Depto, Nome_Depto , Cod_Func, Nome_Func, Cod_Produto, Nome_produto, Qtde, valor e ordene por num_sol decrescente;
