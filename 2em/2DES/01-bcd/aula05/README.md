# Aula 05 - Funções Nativas do SGBD
## Objetivo
Apresentar as funções nativas do SGBD que podem ser utilizadas para manipular os dados armazenados no banco de dados.

# Funções de Data MySQL
|Função|Descrição|
|------|---------|
|`NOW()`|Retorna a data e hora atual|
|`CURDATE()`|Retorna a data atual|
|`CURTIME()`|Retorna a hora atual|
|`DATE()`|Extrai a data de um campo datetime|
|`TIME()`|Extrai a hora de um campo datetime|
|`DAY()`|Extrai o dia de um campo datetime|
|`MONTH()`|Extrai o mês de um campo datetime|
|`YEAR()`|Extrai o ano de um campo datetime|
|`HOUR()`|Extrai a hora de um campo datetime|
|`MINUTE()`|Extrai o minuto de um campo datetime|
|`SECOND()`|Extrai o segundo de um campo datetime|
|`DAYNAME()`|Retorna o nome do dia da semana|
|`MONTHNAME()`|Retorna o nome do mês|
|`DAYOFWEEK()`|Retorna o dia da semana|
|`DAYOFMONTH()`|Retorna o dia do mês|
|`DAYOFYEAR()`|Retorna o dia do ano|
|`WEEK()`|Retorna a semana do ano|
|`LAST_DAY()`|Retorna o último dia do mês|
|`DATE_ADD()`|Adiciona um intervalo de tempo a uma data|
|`DATE_SUB()`|Subtrai um intervalo de tempo de uma data|

## Exemplos de DATE_SUB
```sql
SELECT DATE_SUB(NOW(), INTERVAL 1 DAY);
SELECT DATE_SUB(NOW(), INTERVAL 1 MONTH);
SELECT DATE_SUB(NOW(), INTERVAL 1 YEAR);
SELECT DATE_SUB(NOW(), INTERVAL 1 HOUR);
```

## Criptografia e HASH
O objetivo da utilização de funções de criptografia e hash é proteger os dados armazenados no banco de dados. As funções de criptografia e hash são utilizadas para proteger os dados sensíveis armazenados no banco de dados.
<br>
A criptografia embaraça os dados de forma que somente quem possui a chave de descriptografia pode visualizar o conteúdo original. Já o hash é uma função que gera um valor único para um determinado conjunto de dados. O hash é utilizado para verificar a integridade dos dados.


### MD5
```sql
SELECT MD5('Senha');
```

### SHA1
```sql
SELECT SHA1('Senha');
```

### SHA2
```sql
SELECT SHA2('Senha', 256);
```

### AES_ENCRYPT
```sql
SELECT AES_ENCRYPT('Texto', 'Chave');
```

### AES_DECRYPT
```sql
SELECT AES_DECRYPT('TextoCriptografado', 'Chave');
```

### PASSWORD
```sql
SELECT PASSWORD('Senha');
```

# Dinâmica de criptografia

Separados em grupos de 4 a 5 alunos, desenvolver um sistema de login e senha utilizando matemática simples em folhas de papel.
- O sistema deve ser capaz de armazenar o login e senha do usuário de forma segura no banco de dados.
- O sistema deve ser capaz de verificar se o login e senha informados pelo usuário estão corretos.
- Os integrantes do seu grupo devem ser capazes de acessar o sistema utilizando o login e senha armazenados no banco de dados.
- Os integrantes de outros grupos não devem ser capazes de acessar o sistema utilizando o login e senha armazenados no banco de dados.

## Exemplo de criptografia
- senha: 1234
- chave: o último número da própria senha
- senha criptografada onde cada número é acrescido da chave: 1 + 4, 2 + 4, 3 + 4, 4 + 4 e a chave = **56784**
- senha criptografada: 56784
- **Decriptografia**: 5 - 4, 6 - 4, 7 - 4, 8 - 4 = **1234**

- encripta.html
```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Encripta</title>
</head>
<body>
    <input type="number" id="senha">
    <input type="button" value="Encripta" onclick="encripta(senha.value)">
    <label id="resp"></label>
</body>
<script>
    function encripta(senha){
        senha = senha.split('');
        let ultimo = senha.length - 1;
        let resp = '';
        senha.forEach(c => {
            resp += (parseInt(c) + parseInt(senha[ultimo]));
        });
        resp += senha[ultimo]; 
        document.querySelector("#resp").innerHTML = resp;
    }
</script>
</html>
```