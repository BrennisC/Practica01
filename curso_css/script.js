function validate(){
    var username = document.getElementById("mail")
    var passaword = document.getElementById("password")

    const name = "Brennis@gmail.com";

    if(username.value.trim() == " "){
        document.getElementById("visible").style.visibility="visible";
        document.getElementById("visible")=name;
        return false;
    }
    else if(passaword.value.trim().length<6){
        document.getElementById("visible2").style.visibility="visible";
        return false;
    }
    else{
        return true;
    }
}
var user={
    "Juan@gmail":112322,
    
}
