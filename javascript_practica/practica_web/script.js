function validate(){
    var username = document.getElementById("mail")
    var passaword = document.getElementById("password")

    if(username.value.trim() == ""){
        document.getElementById("visible").style.visibility="visible";
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