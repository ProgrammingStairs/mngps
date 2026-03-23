function register(){
    var username = document.getElementById("username");
    var email = document.getElementById("email");
    var password = document.getElementById("password");
    var address = document.getElementById("address");
    
    var obj = {
        username : username.value,
        email : email.value,
        password : password.value,
        address : address.value    
    }

    var data = JSON.parse(localStorage.getItem("data"));
    if(!data){
        localStorage.setItem("data",JSON.stringify([obj]));
        return true;
    }else{
        var entry = data.find(user=>user.email==obj.email);        
        if(entry){
            alert("Email Id already exist | please try with another email id");  
            window.location.reload();
            return false;          
        }else{
            localStorage.setItem("data",JSON.stringify([...data,obj]));
            alert("User Added Successfully");
        }
    }
}
function login(){
    var email = document.getElementById("email");
    var password = document.getElementById("password");
    
    var obj = {
        email : email.value,
        password : password.value,
    }

    var data = JSON.parse(localStorage.getItem("data"));
   
        var entry = data.find(user=>user.email==obj.email && user.password==obj.password);        
        if(entry){
            sessionStorage.setItem("email",obj.email);
            return true;          
        }else{
            alert("Email id password is incorrect");
            return false;
        }
}