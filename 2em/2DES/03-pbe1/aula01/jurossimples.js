/*
Juros Simples - Crie um programa que leia um valor inicial,
uma taxa de juros e um período em meses e calcule o montante final
com juros simples. Fórmula: M = C + C *  i * t
1000
1100
1200
1300
1400
1500
1600
1700
1800
1900
2000
*/

function jSimples(c,i,t){
    c = parseFloat(c);
    i = parseFloat(i/100);
    t = parseInt(t);
    return c + c * i * t;
}

c = prompt("Digite o valor inicial");
i = prompt("Digite a taxa de juros");
t = prompt("Digite o período em meses");

m = jSimples(c,i,t);

console.log(m);