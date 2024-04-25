/* function Usuario(nombre){
    this.nombre = nombre;
}

console.log(Usuario.name);
console.log(Usuario.length);

const U = Usuario;
let user = new U('Brennis');
console.log(user);

function of(Fn, arg){
    return new Fn(arg);
}  */

function Punto(x, y){
    this.x= x;
    this.y = y;
    this.dibujar = function(){ console.log('Dibujando'); }
    return 1;
}
let punto = {z:7};
Punto.call(punto, 1, 2);
Punto.apply(punto, [1, 2]);

console.log(punto);