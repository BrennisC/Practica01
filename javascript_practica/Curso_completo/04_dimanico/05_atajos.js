let obj = {};
let pbj = new Object();

function Usuario() {
    this.name="Brennis Benjaminn";
}

let user = new Usuario();
console.log(user.constructor);

const s1="1 +1";
const s2=new String("1 +1");
console.log(eval(s1), eval(s2));