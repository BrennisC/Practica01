const miArray = ["Brennis", "Castro", "Cano"];

console.log(miArray)

miArray.push("Carlos");
console.log(miArray)

let inicio = miArray.shift();
console.log(miArray)


for (let i=0; i< miArray.length;i++){
    console.log(miArray[i])
}


const persona = {
    nombre : "Dayiro",
    edad: 23,
    comidaFavorite:"papa fritas",
};
persona.deportes = "Futbol";

console.log(persona)

for (let key in persona){
    console.log(key, persona[key]);
}