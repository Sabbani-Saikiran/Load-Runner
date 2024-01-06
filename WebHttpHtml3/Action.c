Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=120", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_url("petstore.swagger.io", 
		"URL=https://petstore.swagger.io/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://validator.swagger.io/validator?url=https%3A%2F%2Fpetstore.swagger.io%2Fv2%2Fswagger.json", ENDITEM, 
		LAST);

	web_reg_find("Text=Swagger Petstore123", 
		LAST);

	web_url("swagger.json", 
		"URL=https://petstore.swagger.io/v2/swagger.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://petstore.swagger.io/", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}