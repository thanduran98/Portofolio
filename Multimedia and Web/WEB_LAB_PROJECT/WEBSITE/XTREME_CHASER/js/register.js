
document.getElementsByClassName("submit")[0].addEventListener('click',formValidation);

function cek_email(oemail){
	email = oemail.value;
	var atsym = email.indexOf("@");
	if(atsym<1) return false;

	var titik = email.indexOf(".");
	if (atsym+2 > titik) return false;

	if(titik == email.length-1) return false;

	return true;
}

function cek_username(ousername){
	username = ousername.value;
	if(username.length < 5) return false;
	for(var i = 0; i<username.length; i++){
		var cc = username.charCodeAt(i);
		if((cc >= 48 && cc <= 57) || (cc >= 65 && cc <= 92) || (cc >= 97 && cc <= 124)){

		} else {
			return false;
		}
	}
	return true;
}

function cek_password(opassword){
	password = opassword.value;
	var angka = true;
	var lower = true;
	var upper = true;

	for(var i = 0; i<password.length; i++){
		var cc = password.charCodeAt(i);
		if(cc >= 48 && cc <= 57){
			angka = false;
		} 
		if (cc >= 65 && cc <= 92){
			upper = false;
		} 
		if (cc >= 97 && cc <= 124){
			lower = false;
		} 
	}

	if(angka || upper || lower || password.length<8) return false;
	return true;
}

function cek_gender(omale, ofemale){
	var pilih = false;
	if(omale.checked) pilih = true;
	if(ofemale.checked) pilih = true;

	if(!pilih) return false;
	return true;
}

function cek_nation(onation){
	nation = onation.value;
	if(nation=="default") return false;
	return true;
}

function cek_DOB(oDOB){
	DOB = oDOB.value;
	console.log(DOB);
	if(DOB == "") return false;
	return true;
}

function formValidation(){

	var email = document.getElementById("email")
	var username = document.getElementById("username")
	var password = document.getElementById("password")
	var gender_male = document.getElementById("male")
	var gender_female = document.getElementById("female")
	var nation = document.getElementById("nation")
	var DOB = document.getElementById("DOB")

	if(!cek_email(email)){
		alert('Enter the correct email');
		return;
	}

	if(!cek_username(username)){
		alert('Username must be longer than 5 alphanumeric characters');
		return;
	}

	if(!cek_password(password)){
		alert('Password must have at least 8 characters with at least one numeric digit, one uppercase and one lowercase letter');
		return;
	}

	if(!cek_gender(gender_male,gender_female)){
		alert('Please select a gender');
		return;
	}

	if(!cek_DOB(DOB)){
		alert('Please fill your DOB');
		return;
	}

	if(!cek_nation(nation)){
		alert('Please select a nation');
		return;
	}

	alert('Register Successfully');
	window.location.href="index.html";	
}

function disableSubmit() {
  document.getElementById("submit").disabled = true;
}

function activateButton(element) {

  if(element.checked) {
    document.getElementById("submit").disabled = false;
   }
   else  {
    document.getElementById("submit").disabled = true;
  }

}