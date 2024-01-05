let nombre = "Tanjiro";
let anime = "Demon slayer";
let edad = 18;

let personaje = 
{
    nombre : "Tanjiro",
    anime : "Demon slayer",
    edad :18
};
console.log(personaje['anime']);
console.log(personaje.nombre);
console.log(personaje);

personaje.edad = 24;

console.log(personaje.edad)


delete personaje.anime;
