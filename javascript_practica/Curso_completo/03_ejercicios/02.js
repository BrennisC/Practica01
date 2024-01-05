function nombreResolucion(ancho, alto){
    if(ancho > 7680 && alto > 4320){
        return '8k'
    }else if (ancho > 3840 && alto > 2160){
        return '4K';
    }else if (ancho > 1920 && alto > 1080){
        return 'FHD';
    }else{
        return false;
    }
}
let nombre = nombreResolucion(1366,768)
console.log(nombre);