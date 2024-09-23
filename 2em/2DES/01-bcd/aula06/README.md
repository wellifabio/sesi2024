# Aula06 - QUERY - Consultas
Query são consultas em SQL normalmente iniciadas com SELECT

- SELECT
Exemplo
```sql
SELECT * FROM jogadores
```
resultados
```
id	nome	classe	idade	especialidade
1	Marcelo	1ano	15	Futebol
2	Mariana	1ano	14	Voley
3	Maria	1ano	15	Futebol
4	Ana	1ano	14	Voley
5	Beatriz	1ano	14	Voley
6	Suzana	1ano	14	Voley
```
- WHERE
Exemplo
```sql
SELECT * FROM jogadores WHERE nome = "Maria"
```
resultados
```
id	nome	classe	idade	especialidade
3	Maria	1ano	15	Futebol
```
Além do "=" temos LIKE que funciona como semelhante e possui os operadores "%" e "_"<br>
Exemplo
```sql
SELECT * FROM jogadores WHERE nome LIKE "Mar%"
```
Resultado
```
id	nome	classe	idade	especialidade
1	Marcelo	1ano	15	Futebol
2	Mariana	1ano	14	Voley
3	Maria	1ano	15	Futebol
```