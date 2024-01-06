Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_reg_find("Text=Welcome to JPetStore 6", 
		LAST);

	web_url("petstore.octoperf.com", 
		"URL=https://petstore.octoperf.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}