# Projeto pedidos
## Exemplo de agregação de pedidos a clientes
![diagrama](./pedidos_heranca.png)
## Ambiente
- VsCode
- NodeJS
- MySQL
## Passo a passo para executar
- 1. Clonar o projeto
- 2. Abrir com VsCode e abrir um terminal **cmd** ou **bash** navegar até a pasta api e instalar as dependências.
```bash
cd api
npm install
```
- 3. Criar o banco de dados pedidos, abrindo o XAMPP e iniciar o MySQL e Apache. Rodar o script ./bd/pedidos.sql
- 4. Iniciar a API
```bash
npm start
#ou
npx nodemon
```
- 5. Testar a API com o Insomnia importando o script ./

## Exemplo de saída da rota vendedores
A saída com a lista de clientes agregados dos pedidos é:
```json
[
	{
		"vendedor_id": 1,
		"id": 4,
		"cpf": "444.444.444-44",
		"nome": "Daniela Oliveira",
		"email": "daniela@email.com",
		"salario": 2000
	},
	{
		"vendedor_id": 2,
		"id": 5,
		"cpf": "555.555.555-55",
		"nome": "Eduardo Pereira",
		"email": "eduardo@email.com",
		"salario": 3000
	},
	{
		"vendedor_id": 3,
		"id": 7,
		"cpf": "888.888.888-88",
		"nome": "Amanda Martins",
		"email": "amanda@email.com",
		"salario": 7000
	}
]
```
![Insomnia](./insominia_print.png)