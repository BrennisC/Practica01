export const MESSAGE_TYPES  = {
    ERROR : 'error',
    WARNING : 'warning',
    INFO: 'informacion'
}

function imprimirMensaje(tipo){
    if(tipo == MESSAGE_TYPES.ERROR){
    console.log("Se ha porducido ub error")
    }else if (tipo == MESSAGE_TYPES.WARNING){
        console.log("Esto es una advertencia")
    }else if (tipo=MESSAGE_TYPES.INFO){
        console.log("Esta es una informacion")
    }else {
        console.log("Mensaje no reconocido")
    }
}

imprimirMensaje(MESSAGE_TYPES.WARNING)
