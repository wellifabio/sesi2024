# Aula16 - Permissões de Pasta / Diretório

## Conhecimentos
- 2.3. Modo texto (linha de comando)
	- 2.3.1.Navegação entre diretórios
	- 2.3.2.Criação de diretórios e arquivos
	- 2.3.3.Exclusão de diretórios e arquivos
	- 2.3.4.Renomeação de diretórios e arquivos
	- 2.3.5.Movimentação de diretórios e arquivos
	- 2.3.6.Cópia de diretórios e arquivos
	- 2.3.7.Edição de arquivos

```bash
sn1057928@ESS356D1431222 MINGW64 ~/Desktop/permissao
$ ls -la
total 4
drwxr-xr-x 1 sn1057928 1049089 0 Jun 10 16:31 ./
drwxr-xr-x 1 sn1057928 1049089 0 Jun 10 16:24 ../
drwxr-xr-x 1 sn1057928 1049089 0 Jun 10 16:43 assets/
-rw-r--r-- 1 sn1057928 1049089 0 Jun 10 16:30 index.html
-rw-r--r-- 1 sn1057928 1049089 0 Jun 10 16:31 script.js
-rw-r--r-- 1 sn1057928 1049089 0 Jun 10 16:30 style.css
```
- **d** significa diretório/pasta
- **r** significa Read - Ler
- **w** significa Write - Escrever
- **x** significa Executar

Para três níveis **Dono Grupo Todos**

|Desafio|
|-|
|Altere a permissão de pasta do arquivo index.html para -rwxrwxr-x|

Solução
```bash
chmod -c 775 index.html
```