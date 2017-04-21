//v0.0.2

function x1(id,html)
{
	var o = document.getElementById(id);
	o.innerHTML = html;
} 

function xdDiv(id,o,h,l,c,color,x,y)
{
	var o = document.getElementById(id); 
	o.style.backgroundColor = color;
	o.style.width	= "800px"; 
	o.style.height	= "500px"; 
	o.style.left	= x + "px";
	o.style.top		= y + "px";
	o.style.position = "absolute";
	o.style.border = "1px solid #0000FF";



	var d1 = document.createElement("div"); 
    d1.style.backgroundColor = color;
	d1.style.width		= "1px"; 
	d1.style.height		= "150px";  
	d1.style.left		= "50px";
	d1.style.top		= "-50px";
	d1.style.position = "absolute";

	o.appendChild(d1);

	
	var d2 = document.createElement("div"); 
    d2.style.backgroundColor = 'blue';//color;
	d2.style.width		= "30px"; 
	d2.style.height		= "40px";  
	d2.style.left		= "25px";
	d2.style.top		= "-30px";
	d2.style.position = "absolute";
    o.appendChild(d2);  

}
function xdMousemove(e) {
    var x = e.clientX;
    var y = e.clientY;
    var coor = "Coordinates: (" + x + "," + y + ")";
    document.getElementById("demo").innerHTML = coor;
}

function xdMouseout() {
    document.getElementById("demo").innerHTML = "";
}
