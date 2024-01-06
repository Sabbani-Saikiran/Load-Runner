Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("101", 
		"URL=https://sampleapp.tricentis.com/101/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=layout/fonts/open_sans/OpenSans-Regular.ttf", "Referer=https://sampleapp.tricentis.com/101/layout/css/style.css?v3", ENDITEM, 
		"Url=layout/fonts/open_sans/OpenSans-Light.ttf", "Referer=https://sampleapp.tricentis.com/101/layout/css/style.css?v3", ENDITEM, 
		"Url=layout/fonts/awesome/fontawesome-webfont.woff2?v=4.5.0", "Referer=https://sampleapp.tricentis.com/101/layout/fonts/awesome/font-awesome.min.css", ENDITEM, 
		"Url=images/slider_bike.png", ENDITEM, 
		"Url=images/slider_camper.jpg", ENDITEM, 
		"Url=images/slider_truck.png", ENDITEM, 
		"Url=images/slider_car.png", ENDITEM, 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_add_cookie("selectedvehicle=Automobile; DOMAIN=sampleapp.tricentis.com");

	web_url("app.php", 
		"URL=https://sampleapp.tricentis.com/101/app.php", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://sampleapp.tricentis.com/101/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=images/arrow.png", "Referer=https://sampleapp.tricentis.com/101/layout/css/style.css?v3", ENDITEM, 
		"Url=images/dropdown-arrow.png", "Referer=https://sampleapp.tricentis.com/101/layout/css/style.css?v3", ENDITEM, 
		"Url=forms/img/radiocheck.png", "Referer=https://sampleapp.tricentis.com/101/forms/css/jquery.idealforms.css", ENDITEM, 
		"Url=forms/img/validation.png", "Referer=https://sampleapp.tricentis.com/101/forms/css/jquery.idealforms.css", ENDITEM, 
		LAST);

	return 0;
}