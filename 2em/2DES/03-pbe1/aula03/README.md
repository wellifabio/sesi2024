# Aula03 - NodeJS
## Objetivo
- Entender o que é NodeJS

## O que é NodeJS
- NodeJS é uma plataforma que permite a execução de código JavaScript no servidor

### O que é um servidor
- Um servidor é um programa instalado em um computador que fornece dados para outros computadores. Ex: Google, Facebook, Instagram, etc.

### Servidor HTTP
- É um servidor que fornece conexão através de um protocolo de **Resposta** a **Requisições** web para os navegadores. Ex: Apache, Nginx, IIS, etc.

|Servidores|Framework|
|-|-|
|Apache|PHP|
|Nginx|Ruby on Rails|
|IIS|.NET|
|Tomcat|Java|
|V8a|NodeJS|

## Tutorial de como inicar um projeto NodeJS
- 1 Com o  VsCode e o NodeJS instalados, crie uma Pasta para o projeto e abra com VsCode.
```bash
mkdir lojinha
cd lojinha
code .
````
- 2 Abra o terminal do VsCode `CTRL + '` e inicie o projeto NodeJS (Utilize o gerenciador de pacotes npm)
```bash
npm init -y
```
- 3 Instale o Express
```bash
npm install express
```