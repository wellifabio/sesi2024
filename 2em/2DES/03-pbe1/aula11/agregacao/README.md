# Projeto pedidos
## Exemplo de agregação de pedidos a clientes
![diagrama](./pedidos_agregacao.png)
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

## Exemplo de saída da rota clientesagregados
A saída com a lista de clientes agregados dos pedidos é:
```json
[
	{
		"id": 1,
		"nome": "Ana Silva",
		"cep": "13444-444",
		"numero": null,
		"complemento": null,
		"pedidos": [
			{
				"id": 5,
				"data": "2024-11-25T12:11:48.000Z",
				"quantidade": 1,
				"produto": {
					"id": 1,
					"nome": "Camiseta",
					"preco": 49.9
				},
				"total": 49.9
			},
			{
				"id": 6,
				"data": "2024-11-25T12:59:45.000Z",
				"quantidade": 2,
				"produto": {
					"id": 1,
					"nome": "Camiseta",
					"preco": 49.9
				},
				"total": 99.8
			}
		]
	},
	{
		"id": 2,
		"nome": "Jorge Garcia",
		"cep": "13333-33",
		"numero": "123B",
		"complemento": "Fundos",
		"pedidos": []
	}
]
```