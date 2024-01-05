function modify (array, callback){
 //hacemos algo ...
    array.push('midu')
 //despues de hacer algo...
    setTimeout(function (){

    
    callback(array)
    }, 300)
}


const names = ['Brennis', 'Benjaminn', 'Castro', 'Cano']

modify(names, function(array){
    console.log('He modificado el array y ahora es de ${array.length} elementos !')
})