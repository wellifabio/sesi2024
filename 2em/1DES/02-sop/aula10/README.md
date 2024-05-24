# Aula10
- Painel de Controle
    - Add ou remover programas
    - Configurações regionais de idioma
    - Ferramentas de sistema
    - Video, Som
    - Sistema
- Arquivos de Lote

- construtor.bat
```cmd
md programa
cd programa
md paginas
cd paginas
type nul > page1.html
type nul > page2.html
type nul > page3.html
cd ..
md estilos
cd estilos
type nul > style1.css
type nul > style2.css
type nul > style3.css
```

- destrutor.bat
```cmd
cd programa
cd paginas
del page1.html
del page2.html
del page3.html
cd ..
cd estilos
del style1.css
del style2.css
del style3.css
cd ..
rd estilos
rd paginas
cd ..
rd programa
```