//short-circuit
let nombre = '';
let username = nombre  || 'Brennis';
console.log(username);

function n1(){
    console.log('Brennis');
    return true
}

function n2(){
    console.log('Castro');
    return true;
}

let x = n1() + n2();

console.log(x);