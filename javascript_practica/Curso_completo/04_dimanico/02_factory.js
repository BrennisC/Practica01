let user = {
    id: 1,
    email: 'brennis@gmail',
    name:'Brennis',
    activo:true,
    recuperarClave: function () {
        console.log('recuperando clave');
    },
}

function crearUsuario(name,email) {
    return {
        email,
        name,
        activo:true,
        recuperarClave: function () {
            console.log('recuperando clave');
        },
    }

}
let user1 = crearUsuario('Brennis', 'brennis@gmail');
let user2 = crearUsuario('Benjaminn', 'Benja@gmail');
console.log(user1, user2);