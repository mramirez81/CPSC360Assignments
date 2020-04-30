//--THIS PART OF CODE KEEPS JAVASCRIPT VARIABLE UPDATED TO FORM INPUT--//
//select text input in form and store to a variable
const whatInput = document.getElementById('what').value;
const countryInput = document.getElementById('countries')value;
const timeframeInput = document.getElementById('timeframe').value;
const minmagInput = document.getElementById('minmag').value;
const maxmagInput = document.getElementById('maxmag').value;
const howmanyInput = document.getElementById('howmany').value;



//--THIS PART OF CODE RETRIEVES INPUT FROM FORM WHEN SUBMITTED--//
// querySelector selects the form item from the html document that uses this scripts
//return: HTMLElement object representing the first element match
//parameter: CSS selector string
const form = document.querySelector('form');

//this listens to event when "Submit" is clicked
form.addEventListener('submit', function(e) {
			// listener: prevent form default behavior
			//e: event
			e.preventDefault();//prevent default action if not handled explicitly
			
			//make request to API using axios
			//axios lets us easily get API request
			//make sure to include axios CDN in html
			axios.get("http://localhost:8000/earthquakes/?what="+whatInput+"&country="+countryInput+"&timeframe="+timeframeInput+"&minmag="+minmagInput
			+"&maxmag="+maxmagInput+"&howmany="+howmanyInput).then(function(resp){
																				outputdata(resp);})
																				.catch(function(error){
																					console.log(error);
																				})
			
			
			//textInput.value="";//clear form input box
			}	
)

function outputdata(resp){
	//resp.data will be array of employee objects 
	console.log(resp.data);
	console.log(resp.data.length)	
	
	//display results in HTML page
	let outputheading = document.querySelector('.outputheading');
	let earthquake-data = document.querySelector('.earthquake-data');
	let errormsg = document.querySelector('.error-message');
	//console.log(resp.data.firstname);	
	
	let earthquake-list=[];
	//let personstr="";
	
	//response will be an array of employee objects, display each item
	if (resp.data.length){

		for(i=0; i<resp.data.length;i++){
			//personstr="The " + resp.data[i].title + ", " +resp.data[i].firstname + " " + resp.data[i].lastname+ " is " + resp.data[i].age + " years old.";
			earthquake-list.push(resp.data[i]);
			
		}		
		outputheading.innerHTML = "Here are " +resp.data.length +" earthquake(s):";
		earthquake-data.innerHTML = earthquake-list.join("\n");
		errormsg.innerHTML="";
	} else{
		errormsg.innerHTML = "There are no earthquakes for your query.";
		
	}	
	
} 