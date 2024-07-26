function jSimples(c,i,t){
    c = parseFloat(c);
    i = parseFloat(i/100);
    t = parseInt(t);
    return c + c * i * t;
}

function jComposto(c,i,t){
    c = parseFloat(c);
    i = parseFloat(i/100);
    t = parseInt(t);
    return (c * Math.pow(1 + i,t)).toFixed(2);
}