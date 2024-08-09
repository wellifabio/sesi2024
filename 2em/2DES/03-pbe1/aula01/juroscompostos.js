/*
Juros Compostos - Crie um programa que leia um valor inicial,
uma taxa de juros e um período em meses e calcule o montante final
com juros compostos. Fórmula: M = C * (1 + i)^t
1000
1100
1210
1331
1464,1
1610,51
1771,561
1948,7171
2143,58881
2357,947691
2593,74246
*/

function jCompostos(c,i,t){
    c = parseFloat(c);
    i = parseFloat(i/100);
    t = parseInt(t);
    return c * Math.pow(1 + i,t);
}

c = prompt("Digite o valor inicial");
i = prompt("Digite a taxa de juros");
t = prompt("Digite o período em meses");

m = jCompostos(c,i,t);

console.log(m.toFixed(2));