/*
Crie um programa que leia os três lados de um triângulo
e classifique, se é um triângulo equilátero, isósceles ou escaleno.
*/
const prompt = require("prompt-sync")();

a = parseFloat(prompt("Digite o lado A"));
b = parseFloat(prompt("Digite o lado B"));
c = parseFloat(prompt("Digite o lado C"));

// Verifica se é um triângulo
if(a + b > c && a + c > b && b + c > a){
    if(a == b && b == c){
        console.log("Triângulo equilátero");
    }else if(a != b && b != c && c != a){
        console.log("Triângulo escaleno");
    }else{
        console.log("Triângulo isósceles");
    }
}else{
    console.log("Não é um triângulo");
}