Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("blazedemo.com", 
		"URL=https://blazedemo.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t122.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(9);

	web_submit_form("reserve.php", 
		"Snapshot=t123.inf", 
		ITEMDATA, 
		"Name=fromPort", "Value=Portland", ENDITEM, 
		"Name=toPort", "Value=London", ENDITEM, 
		LAST);

	return 0;
}