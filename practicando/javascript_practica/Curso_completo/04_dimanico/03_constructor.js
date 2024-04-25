function Usuario(){
    this.id=1;
    this.recuperarClave= function(){
        console.log("se ha repuerado la clave...");
    }
}

let usuario = new Usuario();

console.log(usuario);